static void FUN1(struct VAR1 *VAR2) {
struct VAR1 *VAR3 = (struct VAR1 *) VAR2->VAR4;
if (VAR3 != NULL) {
VAR3->VAR5 = 1;
VAR3->VAR4 = NULL;
}
VAR2->VAR5 = 1;
VAR2->VAR4 = NULL;
}