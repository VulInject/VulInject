struct VAR1 *FUN1(struct VAR2 *VAR3, struct VAR4 *VAR4)
{
struct VAR1 *VAR5;

FUN2(VAR6, VAR7, 1, "");
if (FUN3(VAR4, &VAR5, &VAR8, VAR3,
VAR9, 0) == 0) {
VAR3->VAR10 = VAR5;
return VAR3->VAR10;
}

return NULL;
}