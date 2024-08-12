FUN1 (symbol_flags VAR1, namelist VAR2)
{
VAR3[VAR4].VAR1 = VAR1;
VAR3[VAR4].VAR2 = VAR2;
VAR4++;
if (VAR4 >= VAR5)
FUN2 ("");
VAR3[VAR4].VAR2 = NULL; 
}