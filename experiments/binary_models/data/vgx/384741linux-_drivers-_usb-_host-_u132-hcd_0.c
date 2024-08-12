static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3 = FUN2(VAR2);
if (VAR3->VAR4 > 1) {
FUN3(&VAR3->VAR5->VAR6, ""
"", VAR3, VAR2, VAR3->VAR4);
} else if (VAR3->VAR4 > 0) {
FUN3(&VAR3->VAR5->VAR6, ""
"", VAR2);
} else {
FUN4(&VAR3->VAR7);
FUN5(100);
FUN6(VAR3, 0);
FUN7(&VAR3->VAR7);
}
}