static void FUN1(u32 VAR1, unsigned char *VAR2)
{
VAR2[0] = (unsigned char) (VAR1 >> 24);
VAR2[1] = (unsigned char) (VAR1 >> 16);
VAR2[2] = (unsigned char) (VAR1 >> 8);
VAR2[3] = (unsigned char) VAR1;
}