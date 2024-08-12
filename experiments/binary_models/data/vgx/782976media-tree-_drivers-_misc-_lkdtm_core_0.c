static int FUN1(struct VAR1 *VAR1,
struct VAR2 *VAR2)
{
int VAR3;


if (!VAR1->VAR4.VAR5.VAR6) {
FUN2(VAR2);
return 0;
}

if (VAR7 != NULL)
FUN3(VAR7);

VAR8 = VAR1;
VAR9 = VAR2;
VAR7 = &VAR1->VAR4;
VAR3 = FUN4(VAR7);
if (VAR3 < 0) {
FUN5("",
VAR1->VAR4.VAR5.VAR6);
VAR7 = NULL;
VAR8 = NULL;
VAR9 = NULL;
}

return VAR3;
}