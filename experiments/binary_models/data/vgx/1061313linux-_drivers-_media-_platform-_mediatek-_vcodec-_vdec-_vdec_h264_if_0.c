static int FUN1(unsigned char *VAR1, unsigned int VAR2)
{
if (VAR2 > 3 && VAR1[0] == 0 && VAR1[1] == 0 && VAR1[2] == 1)
return 3;

if (VAR2 > 4 && VAR1[0] == 0 && VAR1[1] == 0 && VAR1[2] == 0 &&
VAR1[3] == 1)
return 4;

return -1;
}