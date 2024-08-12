static VAR1 *FUN1(void)
{
VAR1 *VAR2 = NULL;

VAR2 = FUN2();

if (FUN3(VAR3, VAR4, VAR2) < 0)
goto VAR5;


FUN4(VAR2, &VAR6);


FUN5(VAR2, VAR7);

return VAR2;
VAR5:
FUN6(&VAR2);
return VAR2;
}