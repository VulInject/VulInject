VAR1 *
FUN1()
{
VAR1 *VAR2 = NULL;
uid_t VAR3 = FUN2();
uid_t VAR4 = FUN3();
if (VAR2 == NULL)
VAR2 = FUN4();

FUN5(VAR4, VAR3);
if (VAR2 == NULL)
VAR2 = FUN6();
FUN5(VAR3, VAR4);

if (VAR2 == NULL)
VAR2 = FUN7();
return VAR2;
}