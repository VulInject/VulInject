static int
FUN1(const char *VAR1)
{
uint32_t VAR2, VAR3, VAR4, VAR5;
int VAR6, VAR7;

FUN2();

VAR4 = FUN3(*(const VAR8 *)VAR1);
VAR5 = FUN3(*(const VAR8 *)(VAR1 + 4));

if((VAR4 | VAR5) && VAR4 == VAR9 && VAR5 == VAR10)
{

return (0);
}
VAR9 = VAR4;
VAR10 = VAR5;


VAR2 = VAR11[0][VAR4 >> 25]
| VAR11[1][(VAR4 >> 17) & 0x7f]
| VAR11[2][(VAR4 >> 9) & 0x7f]
| VAR11[3][(VAR4 >> 1) & 0x7f]
| VAR11[4][VAR5 >> 25]
| VAR11[5][(VAR5 >> 17) & 0x7f]
| VAR11[6][(VAR5 >> 9) & 0x7f]
| VAR11[7][(VAR5 >> 1) & 0x7f];
VAR3 = VAR12[0][VAR4 >> 25]
| VAR12[1][(VAR4 >> 17) & 0x7f]
| VAR12[2][(VAR4 >> 9) & 0x7f]
| VAR12[3][(VAR4 >> 1) & 0x7f]
| VAR12[4][VAR5 >> 25]
| VAR12[5][(VAR5 >> 17) & 0x7f]
| VAR12[6][(VAR5 >> 9) & 0x7f]
| VAR12[7][(VAR5 >> 1) & 0x7f];

VAR6 = 0;
for(VAR7 = 0; VAR7 < 16; VAR7++)
{
uint32_t VAR13, VAR14;

VAR6 += VAR15[VAR7];

VAR13 = (VAR2 << VAR6) | (VAR2 >> (28 - VAR6));
VAR14 = (VAR3 << VAR6) | (VAR3 >> (28 - VAR6));

VAR16[15 - VAR7] =
VAR17[VAR7] = VAR18[0][(VAR13 >> 21) & 0x7f]
| VAR18[1][(VAR13 >> 14) & 0x7f]
| VAR18[2][(VAR13 >> 7) & 0x7f]
| VAR18[3][VAR13 & 0x7f]
| VAR18[4][(VAR14 >> 21) & 0x7f]
| VAR18[5][(VAR14 >> 14) & 0x7f]
| VAR18[6][(VAR14 >> 7) & 0x7f] | VAR18[7][VAR14 & 0x7f];

VAR19[15 - VAR7] =
VAR20[VAR7] = VAR21[0][(VAR13 >> 21) & 0x7f]
| VAR21[1][(VAR13 >> 14) & 0x7f]
| VAR21[2][(VAR13 >> 7) & 0x7f]
| VAR21[3][VAR13 & 0x7f]
| VAR21[4][(VAR14 >> 21) & 0x7f]
| VAR21[5][(VAR14 >> 14) & 0x7f]
| VAR21[6][(VAR14 >> 7) & 0x7f] | VAR21[7][VAR14 & 0x7f];
}
return (0);
}