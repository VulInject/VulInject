static int FUN1(unsigned int VAR1, unsigned int VAR2,
struct VAR3 *VAR4)
{
u64 VAR5, VAR6, VAR7;
int VAR8, VAR9;

if (VAR1 > VAR10 || VAR1 < VAR11)
return -VAR12;
VAR6 = 0;
VAR9 = FUN2(VAR13);

for (VAR8 = 0; VAR8 < VAR9; VAR8++) {
VAR5 = 256 * VAR2 * 4 * VAR13[VAR8] / 10;
if (VAR5 > VAR14 && VAR5 < VAR15 &&
VAR6 < VAR5) {
VAR6 = VAR5;
VAR9 = VAR8;
}
}

if (FUN2(VAR13) == VAR9)
return -VAR12;
VAR4->VAR16 = VAR9;
VAR5 = VAR6;


VAR7 = FUN3(VAR5 << 28, VAR1);
VAR4->VAR17 = 0;
if (((VAR7 >> 28) & 0xF) < VAR18) {
VAR7 <<= 1;
VAR4->VAR17 = 1;
}
VAR4->VAR19 = (VAR7 >> 28) & 0xF;
VAR4->VAR20 = ((VAR7 & 0xFFFFFFF) >> 4);

return 0;
}