static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
const VAR5 *VAR6 = VAR4->VAR7;
u8 VAR8 *VAR9 = (u8 VAR8 *)VAR2->VAR10;
int VAR11, VAR12;

if ((VAR4->VAR13 != 8) || (VAR4->VAR14 != 16) ||
(VAR4->VAR15 != 1) || (VAR4->VAR16 != 256)) {
FUN2(VAR2, "",
VAR4->VAR13, VAR4->VAR14, VAR4->VAR15, VAR4->VAR16);
return;
}

VAR9 += 2;
for (VAR12 = 0; VAR12 < VAR4->VAR16; VAR12++) {
for (VAR11 = 0; VAR11 < VAR4->VAR14; VAR11++) {
FUN3(VAR6[VAR11], &VAR9[VAR11 * 4]);
FUN3(VAR6[VAR11], &VAR9[VAR11 * 4 + (128 * 8)]);
}
VAR9 += 128;

if ((VAR12 % 8) == 7)
VAR9 += 128*8;

VAR6 += VAR4->VAR14;
}
}