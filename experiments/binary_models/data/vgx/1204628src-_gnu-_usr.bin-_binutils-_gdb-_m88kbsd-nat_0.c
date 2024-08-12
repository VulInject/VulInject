FUN1 (const struct VAR1 *VAR1,
void *VAR2, int VAR3)
{
char *VAR4 = VAR2;
int VAR5;

for (VAR5 = 0; VAR5 < VAR6; VAR5++)
{
if (VAR3 == -1 || VAR3 == VAR5)
FUN2 (VAR1, VAR5, VAR4 + VAR5 * 4);
}
}