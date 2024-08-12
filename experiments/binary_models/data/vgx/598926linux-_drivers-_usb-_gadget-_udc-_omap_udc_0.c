static int FUN1(struct VAR1 *VAR2, int VAR3)
{
struct VAR4	*VAR5;
unsigned long	VAR6;
u32 VAR7;

VAR5 = FUN2(VAR2, struct VAR4, VAR2);
FUN3(&VAR5->VAR8, VAR6);
FUN4("", VAR3 ? "" : "");
VAR5->VAR9 = (VAR3 != 0);
if (FUN5()) {

VAR7 = FUN6(VAR10);
if (VAR3)
VAR7 |= VAR11;
else
VAR7 &= ~VAR11;
FUN7(VAR7, VAR10);
}
if (VAR5->VAR12 != NULL && VAR3) {
if (!VAR5->VAR13) {
FUN8(1);
VAR5->VAR13 = 1;
}
}
if (FUN9(VAR5))
FUN10(VAR5);
else
FUN11(VAR5);
if (VAR5->VAR12 != NULL && !VAR3) {
if (VAR5->VAR13) {
FUN8(0);
VAR5->VAR13 = 0;
}
}
FUN12(&VAR5->VAR8, VAR6);
return 0;
}