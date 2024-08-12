static void FUN1(void *VAR1)
{
struct VAR2 *VAR3 = VAR1;
const struct VAR4 *VAR5 = FUN2(VAR3->VAR6);
int VAR7;

VAR7 = FUN3(VAR3->VAR8);
if (VAR7)
FUN4(VAR5, "", VAR7);
}