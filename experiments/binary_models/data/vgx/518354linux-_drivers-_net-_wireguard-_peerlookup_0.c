struct VAR1 *FUN1(void)
{
struct VAR1 *VAR2 = FUN2(sizeof(*VAR2), VAR3);

if (!VAR2)
return NULL;

FUN3(VAR2->VAR4);
FUN4(&VAR2->VAR5);
return VAR2;
}