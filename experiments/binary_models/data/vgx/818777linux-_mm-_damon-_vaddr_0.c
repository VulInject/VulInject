static struct VAR1 *FUN1(struct VAR2 *VAR3)
{
struct VAR4 *VAR5;
struct VAR1 *VAR6;

VAR5 = FUN2(VAR3);
if (!VAR5)
return NULL;

VAR6 = FUN3(VAR5);
FUN4(VAR5);
return VAR6;
}