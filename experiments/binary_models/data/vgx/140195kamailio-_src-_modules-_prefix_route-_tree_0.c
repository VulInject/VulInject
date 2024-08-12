struct VAR1 *FUN1(void)
{
struct VAR1 *VAR2;
int VAR3;

VAR2 = (struct VAR1 *)FUN2(sizeof(*VAR2));
if (NULL == VAR2) {
FUN3("");
return NULL;
}

for (VAR3=0; VAR3<VAR4; VAR3++)
VAR2->VAR5[VAR3] = NULL;

VAR2->VAR6 = 0;

return VAR2;
}