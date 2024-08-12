void FUN1(const char *VAR1, VAR2 *VAR3)
{
*VAR3 = (((VAR2)(unsigned char)VAR1[3])<<24) |
(((VAR2)(unsigned char)VAR1[2])<<16) |
(((VAR2)(unsigned char)VAR1[1])<<8) |
(((VAR2)(unsigned char)VAR1[0]));
}