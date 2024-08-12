FUN1 (rtx VAR1)
{
enum rtx_code VAR2;
VAR2 = FUN2 (VAR1, NULL);
if (VAR2 == VAR3)
return VAR4;
else
return FUN3 (VAR2,
FUN4 (VAR1), FUN5 (VAR1, 0),
FUN5 (VAR1, 1));
}