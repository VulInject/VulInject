static int FUN1(struct VAR1 *VAR2, unsigned VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
u32 VAR6, VAR7 = FUN3(VAR3);

if (VAR5->VAR8 & VAR7) {

FUN4(VAR5->VAR9);
VAR6 = FUN4(VAR5->VAR9);
} else {
VAR6 = VAR5->VAR10;
}
return !!(VAR6 & VAR7);
}