void *
FUN1(int VAR1, size_t VAR2)
{
void	*VAR3;

if ((VAR3 = malloc(VAR2)) == NULL)
FUN2("", VAR1,
"",
VAR2);
return (VAR3);
}