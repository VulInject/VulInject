char *FUN1(const VAR1 *VAR2)
{
const char *VAR3;
const char *VAR4;
const char *VAR5;

if (VAR2 == NULL)
return NULL;

FUN2(VAR2, &VAR3, &VAR4, &VAR5);
return FUN3(VAR3, VAR4, VAR5);
}