static bool FUN1(struct VAR1 *VAR2, u32 VAR3)
{
u32 VAR4;

VAR4 = FUN2(VAR2, VAR5);
VAR4 |= VAR3;
FUN3(VAR2, VAR5, VAR4);


if (FUN4(VAR2->VAR6 + VAR7, VAR4,
!(VAR4 & VAR3),
1, 500 * VAR8)) {
FUN5(VAR2->VAR9,
"",
VAR4 & VAR3);
return false;
}

return true;
}