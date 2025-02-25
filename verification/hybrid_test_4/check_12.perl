#
#      WARP3D verification system
#      ==========================
#
#      check results for MPI combine partial files
#
$inputfile = 'temp7';
$line = ' ';
print "\n... Check results: wem000030_stream_mises_gurson\n";
open(infile, "$inputfile") or die
"  >> Fatal Error. could not open: $inputfile\n  >> Aborting this verification segment\n\n";
print "   ... output file opened ...\n";
#
$line=<infile>;
#
#
@parts = split( / +/, $line);
#
$answer = "6.1807251e+01";
$partno = 2;
#
$parts[$partno] =~ s/\x0d{0,1}\x0a\Z//s;
$out_value = $parts[$partno];
#
$message = " ";
if ( $answer ne $parts[$partno] ) {
 $message = "\t\t  **** difference in solution";
}
#
print "   ... comparison value:       $answer","\n";
print "   ... value from output file: ", "$out_value$message\n";
print "\n";
#
print "   ... done\n";
close infile;
exit;



#**********************************************************
#*                                                        *
#*  find_line    ( $line is global )                      *
#*                                                        *
#**********************************************************

sub find_line {
      my ( $type, $string ) = @_;
      my ( $debug );
      $debug = 0;
#
      if( $debug == 1 )
	{
         print " type: ", $type, "\n";
         print " string: ", $string, "\n";
	}
#
      while ( !eof(infile) )
        {
           $line = <infile>;
	   if( $line =~ /$string/ ) {return};
        }
#
	 print "\n>>> Fatal Error. string search type: ",$type;
         print "\n    Searching for string: ", "\"",$string,"\" failed";
	 print "\n    Aborting this verification segment\n\n";
         exit;
}


#**********************************************************
#*                                                        *
#*  skip_lines                                            *
#*                                                        *
#**********************************************************

sub skip_lines {
      my ( $type, $nlines ) = @_;
      my ( $line, $debug, $count );
      $debug = 0;
#
      if( $debug == 1 )
	{
         print " type: ", $type, "\n";
         print " nlines: ", $nlines, "\n";
	}
#
      $count = 0;
      while ( !eof(infile) )
        {
         $line = <infile>; $count++;
         if( $count == $nlines ) {return};
        }
#
	 print "\n>>> Fatal Error. EOF reached beofre skip lines type: ",$type;
	 print "\n    Aborting this verification segment\n\n";
         exit;
}
