static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
VAR4 *VAR5, unsigned int VAR6)
{
unsigned int VAR7;
int VAR8;
unsigned int VAR9;



while (VAR6) {
VAR9 = 16;
if (VAR9 > VAR6) VAR9 = VAR6;
if (VAR9 < 16) VAR9 = 1;
VAR2->VAR10[0] =
((VAR9 == 1) ?
VAR11 : VAR12);
VAR2->VAR10[1] = 0;
VAR2->VAR10[2] = 0;
VAR2->VAR10[3] = 0;
VAR2->VAR10[4] = 0;
VAR2->VAR10[5] = ((VAR3>>16) & 0xffu);
VAR2->VAR10[6] = ((VAR3>>8) & 0xffu);
VAR2->VAR10[7] = (VAR3 & 0xffu);
VAR8 = FUN2(VAR2,
VAR2->VAR10,8,
VAR2->VAR10,
(VAR9 == 1 ? 4 : 16 * 4));
if (VAR8) return VAR8;

for (VAR7 = 0; VAR7 < VAR9; VAR7++) {
VAR5[VAR7] = FUN3(VAR2->VAR10,VAR7*4);
}
VAR5 += VAR9;
VAR6 -= VAR9;
VAR3 += VAR9;
}

return 0;
}