static void FUN1(struct VAR1 *VAR2,
u32 VAR3,
VAR4 *VAR5)
{
u32 VAR6;
VAR4 *VAR7 = VAR2->VAR8.VAR7;
int VAR9;

if (!((VAR7[VAR10] & 0x8) &&
(VAR7[VAR11] & 0x80)))
return;


VAR9 = FUN2(VAR7[VAR10]);

if (VAR9 <= VAR12) {

*VAR5 |= 0xF0;
return;
}

FUN3(
VAR2->VAR13,
VAR14, VAR3,
VAR15, &VAR6, 4);

if (!VAR6) {
FUN4(
VAR2->VAR13,
"",
VAR16);
return;
}
FUN3(
VAR2->VAR13,
VAR14,
VAR3,
VAR17, &VAR6, 4);


VAR6 = (VAR6 | (VAR6 << 1) |
(VAR6 << 2) | (VAR6 << 3));

if (VAR6)
*VAR5 |= (VAR6 << 4);
else

*VAR5 &= ((VAR6 << 4) | 0xF);
}