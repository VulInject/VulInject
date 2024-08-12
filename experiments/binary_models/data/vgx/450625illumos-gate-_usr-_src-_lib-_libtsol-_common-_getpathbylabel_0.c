static void
FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3;
struct VAR1 *VAR4;

VAR3 = VAR2;
while (VAR3) {
struct VAR5 *VAR6 = VAR3->VAR7;

if (VAR6)
FUN2(VAR6);
VAR4 = VAR3;
VAR3 = VAR3->VAR8;
free(VAR4);
}
}