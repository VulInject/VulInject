int
FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
int VAR5;
long *VAR6;
size_t VAR7;

if (VAR2->VAR8 == VAR9) {
VAR10 = VAR11;
return (-1);
}

VAR7 = FUN2(VAR4) + sizeof (long);

VAR7 = ((VAR7 - 1) / sizeof (long) + 1) * sizeof (long);

VAR6 = malloc(VAR7);
if (VAR6 == NULL)
return (-1);

VAR6[0] = VAR12;

(void) memcpy(&VAR6[1], VAR4, FUN2(VAR4));

if (write(VAR2->VAR13, VAR6, VAR7) != VAR7)
VAR5 = -1;
else
VAR5 = 0;

free(VAR6);

return (VAR5);
}