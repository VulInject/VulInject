static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR1 *VAR4;
int VAR5;

VAR4 = FUN2(sizeof(*VAR4), VAR6);
if (VAR4 == NULL) {
FUN3("");
return NULL;
}


VAR4->VAR7 = true;


VAR5 = FUN4(VAR3, VAR4, 0,
&VAR8,
VAR9,
FUN5(VAR9),
VAR10, NULL);
if (VAR5) {
FUN6(VAR4);
VAR4 = NULL;
}

return VAR4;
}