static void
FUN1(void (*VAR1)(), VAR2 *VAR3, clock_t VAR4)
{
timeout_id_t VAR5;

FUN2(VAR6,
char *, VAR3->VAR7, VAR2 *, VAR3,
int, VAR4, VAR8, VAR3->VAR9);

FUN3(FUN4(&VAR3->VAR10));
if ((VAR5 = VAR3->VAR9) != 0) {
if (VAR4 == 0) {
VAR3->VAR9 = 0;
FUN5(&VAR3->VAR10);
(void) FUN6(VAR5);
FUN7(&VAR3->VAR10);
}
} else {
if (VAR1 && (VAR4 != 0))
VAR3->VAR9 = FUN8(VAR1, VAR3, VAR4);
}
}