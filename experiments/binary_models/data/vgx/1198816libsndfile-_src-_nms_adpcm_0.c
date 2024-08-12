FUN1 (int VAR1)
{	int VAR2 ;

VAR2 = 0x1000 ;
VAR2 += (((VAR1 & 0x3f) * 0x166b) >> 12) ;
VAR2 *= VAR3 [(VAR1 & 0x7c0) >> 6] ;
VAR2 >>= (26 - (VAR1 >> 11)) ;

return VAR2 ;
}