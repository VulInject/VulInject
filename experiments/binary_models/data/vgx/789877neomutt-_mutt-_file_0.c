int FUN1(VAR1 **VAR2)
{
if (!VAR2 || !*VAR2)
return 0;

int VAR3 = fclose(*VAR2);
*VAR2 = NULL;
return VAR3;
}