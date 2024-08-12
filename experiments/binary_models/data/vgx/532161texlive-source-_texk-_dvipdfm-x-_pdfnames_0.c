FUN1 (void *VAR1)
{
struct VAR2 *VAR3;

VAR3 = (struct VAR2 *) VAR1;

if (VAR3->VAR4) {
FUN2(VAR3->VAR4);
VAR3->VAR4 = NULL;
}
if (VAR3->VAR5) {
FUN2(VAR3->VAR5);
VAR3->VAR5    = NULL;
}

FUN3(VAR3);

return;
}