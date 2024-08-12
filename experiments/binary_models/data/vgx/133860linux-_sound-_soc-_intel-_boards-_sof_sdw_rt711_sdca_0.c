static int FUN1(struct VAR1 *VAR2)
{
struct property_entry VAR3[VAR4] = {};
struct VAR5 *VAR6;
int VAR7;

if (!FUN2(VAR8))
return 0;

VAR3[0] = FUN3("", FUN2(VAR8));

VAR6 = FUN4(VAR3, NULL);
if (FUN5(VAR6))
return FUN6(VAR6);

VAR7 = FUN7(VAR2, FUN8(VAR6));

FUN9(VAR6);

return VAR7;
}