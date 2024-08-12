static int FUN1(struct VAR1 *VAR2,
bool VAR3)
{
u32 VAR4;

FUN2(VAR2->VAR5, "", VAR3 ? "" : "");

VAR4 = FUN3(VAR2, VAR6);

if (VAR3) {
if (VAR4 & VAR7) {
VAR4 &= ~VAR7;
FUN4(VAR2, VAR4, VAR6);
FUN5(1000, 2000);

VAR4 = FUN3(VAR2, VAR6);
}

VAR4 &= ~FUN6(~0);
VAR4 |= VAR8;
} else {
VAR4 &= ~FUN6(~0);
VAR4 |= VAR9;
}

FUN4(VAR2, VAR4, VAR6);

return 0;
}