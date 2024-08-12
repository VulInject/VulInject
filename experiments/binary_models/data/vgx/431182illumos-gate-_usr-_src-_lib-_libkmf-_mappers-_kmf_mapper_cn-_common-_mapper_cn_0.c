void
FUN1(KMF_HANDLE_T VAR1)
{
void *VAR2;

if ((VAR2 = FUN2(VAR1)) != NULL)
free(VAR2);
FUN3(VAR1, NULL);
}