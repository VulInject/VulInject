static struct VAR1 *FUN1(struct VAR2 *VAR2,
struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR1 *VAR1;

VAR6 = FUN2(VAR2);
if (!VAR6)
return NULL;
VAR1 = FUN3(VAR6, VAR4);
FUN4(VAR2);
return VAR1;
}