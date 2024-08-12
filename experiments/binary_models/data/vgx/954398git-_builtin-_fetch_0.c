static int FUN1(struct VAR1 *VAR1)
{
const char *VAR2 = FUN2(VAR3);

if (VAR4) {
VAR1->VAR5 = fopen(VAR2, "");
if (!VAR1->VAR5)
return FUN3(FUN4(""), VAR2);
FUN5(&VAR1->VAR6, 0);
} else {
VAR1->VAR5 = NULL;
}

return 0;
}