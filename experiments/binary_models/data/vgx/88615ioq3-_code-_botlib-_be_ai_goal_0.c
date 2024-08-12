void FUN1(int VAR1)
{
if (VAR1 <= 0 || VAR1 > VAR2)
{
VAR3.FUN2(VAR4, "", VAR1);
return;
} 
if (!VAR5[VAR1])
{
VAR3.FUN2(VAR4, "", VAR1);
return;
} 
FUN3(VAR1);
FUN4(VAR5[VAR1]);
VAR5[VAR1] = NULL;
}