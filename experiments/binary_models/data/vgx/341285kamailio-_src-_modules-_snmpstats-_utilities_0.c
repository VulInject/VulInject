char *FUN1(struct VAR1 *VAR2)
{
static char VAR3[8];


int VAR4 = VAR2->VAR5 + 1900;


VAR3[0] = (char)((VAR4 & 0xFF00) >> 8);
VAR3[1] = (char)VAR4 & 0xFF;
VAR3[2] = (char)VAR2->VAR6 + 1;
VAR3[3] = (char)VAR2->VAR7;
VAR3[4] = (char)VAR2->VAR8;
VAR3[5] = (char)VAR2->VAR9;
VAR3[6] = (char)VAR2->VAR10;
VAR3[7] = 0;

return VAR3;
}