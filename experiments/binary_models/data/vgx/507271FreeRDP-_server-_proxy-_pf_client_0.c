static VAR1 FUN1(VAR2* VAR3)
{
VAR4* VAR5;
VAR6* VAR7;

if (!VAR3)
return VAR8;

if (!VAR3->VAR9)
return VAR8;

VAR5 = (VAR4*)VAR3->VAR9;
FUN2(VAR5);
VAR7 = VAR5->VAR7;
FUN2(VAR7);

FUN3(VAR5);
FUN4(VAR5);

return FUN5(VAR5->VAR7->VAR10, VAR11, VAR5->VAR7, VAR5);
}