static int
FUN1(struct VAR1 *VAR2, size_t VAR3)
{
VAR4 *VAR5 = VAR2->VAR6;
struct VAR7 *VAR8;
uint_t VAR9;

if (VAR5->VAR10 != NULL || VAR3 < sizeof (struct VAR7))
return (0);	

VAR9 = VAR3 / sizeof (struct VAR7);
VAR3 = VAR9 * sizeof (struct VAR7);

if ((VAR8 = malloc(VAR3)) == NULL)
return (-1);

if (read(VAR2->VAR11, VAR8, VAR3) != VAR3) {
FUN2("");
free(VAR8);
return (-1);
}

VAR5->VAR10 = VAR8;
VAR5->VAR12 = VAR9;
return (0);
}