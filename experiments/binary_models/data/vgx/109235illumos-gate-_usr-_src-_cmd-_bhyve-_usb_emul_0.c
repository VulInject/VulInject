struct VAR1 *
FUN1(const char *VAR2)
{
struct VAR1 **VAR3, *VAR4;

FUN2(VAR3, VAR5) {
VAR4 = *VAR3;
if (!strcmp(VAR4->VAR6, VAR2))
return (VAR4);
}

return (NULL);
}