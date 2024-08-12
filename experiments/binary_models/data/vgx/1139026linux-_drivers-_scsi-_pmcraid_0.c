static int FUN1(struct VAR1 *VAR2)
{
u32 VAR3;

FUN2(VAR2);
VAR3 = FUN3(VAR2);

FUN4(VAR2, VAR4);

if (VAR3 & VAR5) {
if (!VAR2->VAR6) {
FUN5(VAR5,
VAR2->VAR7.
VAR8);
FUN5(VAR5,
VAR2->VAR7.VAR9);
}
return 1;
} else {
return 0;
}
}