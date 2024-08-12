unsigned int FUN1(const unsigned char *VAR1, int VAR2, unsigned int VAR3)
{
unsigned int VAR4 = FUN2(VAR1, VAR2);


VAR4 += VAR3;

VAR4 = (VAR4 & 0xffff) + (VAR4 >> 16);
return VAR4;
}