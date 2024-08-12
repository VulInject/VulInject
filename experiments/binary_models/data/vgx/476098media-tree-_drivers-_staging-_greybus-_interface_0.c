static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);
int VAR5;

VAR5 = FUN3(VAR4->VAR6);
if (VAR5)
return VAR5;

VAR5 = FUN4(VAR4->VAR6);
if (VAR5)
goto VAR7;

VAR5 = FUN5(VAR4);
if (VAR5)
return VAR5;


FUN6(VAR8);

VAR5 = FUN7(VAR4, false);
if (VAR5)
return VAR5;

return 0;

VAR7:
FUN8(VAR4->VAR6);

return VAR5;
}