void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR3;

for (VAR3 = VAR4; VAR3 != NULL; VAR3 = VAR3->VAR5) {
if (VAR3->VAR2 == VAR2) {
FUN2(VAR3);
FUN3(VAR3);
}
}
}