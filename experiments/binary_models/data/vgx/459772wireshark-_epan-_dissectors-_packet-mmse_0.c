static VAR1
FUN1(VAR2 *VAR3, guint VAR4, VAR1 *VAR5, VAR6 *VAR7)
{
guint        VAR8;

VAR8 = FUN2(VAR3, VAR4++);
if (VAR8 < 31)
*VAR5 = 1;
else {                      
VAR8 = FUN3(VAR3, VAR4, VAR5, VAR7, &VAR9);
(*VAR5)++;
}


FUN4(VAR3, VAR4, VAR8);
return VAR8;
}