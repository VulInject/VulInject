static int FUN1(wchar_t VAR1, unsigned char *VAR2, int VAR3)
{
const unsigned char *VAR4;
unsigned char VAR5 = VAR1 & 0x00ff;
unsigned char VAR6 = (VAR1 & 0xff00) >> 8;

if (VAR3 <= 0)
return -VAR7;

VAR4 = VAR8[VAR6];
if (VAR4 && VAR4[VAR5])
VAR2[0] = VAR4[VAR5];
else
return -VAR9;
return 1;
}