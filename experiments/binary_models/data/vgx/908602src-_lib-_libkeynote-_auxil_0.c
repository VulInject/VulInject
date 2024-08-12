unsigned int 
FUN1(char *VAR1, unsigned int VAR2)
{
unsigned int VAR3 = 0;
unsigned int VAR4;

if ((VAR2 == 0) || (VAR2 == 1))
return 0;

for (; *VAR1; VAR1++) 
{
VAR3 = (VAR3 << 2) + *VAR1;
if ((VAR4 = VAR3 & 0x3fff) != 0)
VAR3 = ((VAR3 ^ (VAR4 >> 12)) & 0x3fff);
}

return VAR3 % VAR2;
}