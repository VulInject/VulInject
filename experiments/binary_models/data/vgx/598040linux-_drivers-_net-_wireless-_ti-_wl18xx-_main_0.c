static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
int VAR4;
u32 VAR5 = 0;
u32 VAR6 = VAR7 |
VAR8;


if (VAR2->VAR9 & VAR10) {
VAR6 |= VAR11;
VAR5 = VAR12;
}


if (VAR2->VAR9 & VAR13) {
VAR6 |= VAR14;
VAR5 = VAR12;
}

VAR4 = FUN2(VAR2, VAR6,
VAR5, VAR3,
VAR15);
if (VAR4 < 0)
return VAR4;

return 0;
}