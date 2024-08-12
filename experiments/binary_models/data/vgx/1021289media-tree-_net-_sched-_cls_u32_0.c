static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct tc_u_knode VAR5 **VAR6;
struct VAR3 *VAR7;
struct VAR8 *VAR9 = FUN2(VAR4->VAR10);

if (VAR9) {
VAR6 = &VAR9->VAR9[FUN3(VAR4->VAR11)];
for (VAR7 = FUN2(*VAR6); VAR7;
VAR6 = &VAR7->VAR12, VAR7 = FUN2(*VAR6)) {
if (VAR7 == VAR4) {
FUN4(*VAR6, VAR4->VAR12);

FUN5(VAR2, &VAR4->VAR13);
FUN6(&VAR4->VAR14, VAR15);
return 0;
}
}
}
FUN7(1);
return 0;
}