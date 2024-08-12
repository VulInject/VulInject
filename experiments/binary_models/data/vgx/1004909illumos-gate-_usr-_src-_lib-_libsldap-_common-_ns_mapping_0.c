static int
FUN1(VAR1 ***VAR2,
int *VAR3, int *VAR4, VAR1 *VAR5)
{
VAR1	**VAR6;

if (*VAR2 == NULL) {
*VAR3 = 0;
*VAR4 = VAR7;
*VAR2 = (VAR1 **)
calloc(*VAR4, sizeof (VAR1 *));
if (*VAR2 == NULL)
return (-1);
} else if (*VAR3+1 >= *VAR4) {
*VAR4 += VAR7;
VAR6 = (VAR1 **)
realloc((void *)(*VAR2),
*VAR4 * sizeof (VAR1 *));
if (VAR6 == NULL)
return (-1);
else
*VAR2 = VAR6;
}
(*VAR2)[*VAR3] = VAR5;
(*VAR3)++;
(*VAR2)[*VAR3] = NULL;
return (0);
}