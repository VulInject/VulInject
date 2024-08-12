static void
FUN1(VAR1 *VAR2,
const struct VAR3 *VAR4,
void *VAR5)
{
struct VAR3 **VAR6 = (struct VAR3**)VAR5;
struct VAR3 *VAR7 = *VAR6;

*VAR7 = *VAR4;
*VAR6 = VAR7+1;
}