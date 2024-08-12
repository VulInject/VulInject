static struct VAR1 *FUN1(gfp_t VAR2)
{
struct VAR1 *VAR3;
VAR3 = FUN2(VAR4, VAR2);
if (!VAR3)
return NULL;
VAR3->VAR5 = 1;
FUN3(&VAR3->VAR6);
return VAR3;
}