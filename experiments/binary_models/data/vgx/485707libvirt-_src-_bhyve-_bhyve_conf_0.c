struct VAR1 *
FUN1(void)
{
struct VAR1 *VAR2;

if (FUN2() < 0)
return NULL;

if (!(VAR2 = FUN3(VAR3)))
return NULL;

VAR2->VAR4 = FUN4(VAR5 "");

return VAR2;
}