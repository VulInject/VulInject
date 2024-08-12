static void FUN1(const struct VAR1 *VAR2, int VAR3)
{
unsigned int VAR4 = FUN2();
struct VAR1 *VAR5 = FUN3(VAR6);
const struct VAR1 *VAR7;

FUN4(VAR5, VAR2);
FUN5(VAR4, VAR5);
VAR7 = VAR5;
FUN6(VAR7, VAR3);
}