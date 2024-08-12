static void
FUN1(zoneid_t VAR1, void *VAR2)
{
struct VAR3 *VAR4 = VAR2;

if (VAR4 == NULL)
return;
if (VAR4->VAR5 != NULL)
FUN2(VAR4->VAR5);
FUN3(VAR4->VAR6);
FUN4(VAR4->VAR7);
FUN5(VAR4, sizeof (*VAR4));
}