char *FUN1(const char *VAR1)
{
char *VAR2 = NULL;
size_t VAR3;

VAR3 = strlen(VAR1) + 1;

if ((VAR2 = (char *)VAR4->FUN2(VAR3, VAR5)))
{
memmove(VAR2, VAR1, VAR3);
}
return VAR2;
}