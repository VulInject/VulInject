R_API int FUN1(VAR1* VAR2) { return FUN2(VAR2); }







static void FUN3(struct VAR3 *VAR3) {
struct VAR3 *VAR4;
if (!VAR3) {
return;
}
for (VAR4 = VAR3->VAR5; VAR4 != VAR3;) {
struct VAR3 *VAR5 = VAR4->VAR5;
struct VAR6 *VAR7 = VAR4->VAR8;
FUN4 (VAR7, VAR4->VAR9, VAR4->VAR10);
free (VAR4);
VAR4 = VAR5;
}
free (VAR4);
}