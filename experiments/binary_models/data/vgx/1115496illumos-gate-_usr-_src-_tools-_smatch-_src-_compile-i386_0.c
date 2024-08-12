static void FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR1 *VAR5;

FUN2(VAR2->VAR6, VAR5) {


if (VAR5->VAR7 == VAR8) {
FUN1(VAR5, VAR4);
continue;
}



if (VAR5->VAR7 == VAR9 || VAR5->VAR7 == VAR10)
continue;
if (VAR5->VAR7 == VAR11) {
FUN3(VAR5, VAR4);
continue;
}
FUN4(VAR4, VAR5);
} FUN5(VAR5);
}