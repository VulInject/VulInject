static void FUN1(VAR1* VAR2)
{
if (!VAR2)
return;

free(VAR2->VAR3);
free(VAR2->VAR4);
free(VAR2);
}