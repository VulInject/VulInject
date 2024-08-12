VAR1
FUN1(const char *VAR2, VAR3 *VAR4)
{
int	VAR5;
VAR6	*VAR7;

VAR7 = FUN2(VAR2, &VAR5);
if (VAR7 == NULL)
return (VAR8);

if (VAR5 != VAR9) {
free(VAR7);
return (VAR8);
}

(void) memcpy(VAR4->VAR10, VAR7, VAR5);
free(VAR7);
return (VAR11);
}