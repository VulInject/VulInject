static int FUN1(void *VAR1, int VAR2, int *VAR3)
{
FUN2(VAR1 != NULL);
FUN2(VAR3 != NULL);
if (VAR2 == 0) {
VAR2 = VAR4;
} 
*VAR3 = FUN3(VAR1, VAR2) > 0 ? VAR5 : VAR6;
return VAR7;
}