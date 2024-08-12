void
FUN1(VAR1 *VAR2, const VAR3 *VAR4, va_list VAR5)
{
int VAR6;
va_list VAR7;

FUN2(VAR7, VAR5);

VAR6 = FUN3(VAR2, VAR4, VAR7);
FUN4(VAR7);
if (VAR6 <= 0)
return;


FUN5(VAR2, VAR6);
VAR6 = FUN3(VAR2, VAR4, VAR5);

FUN6(VAR6 <= 0);
}