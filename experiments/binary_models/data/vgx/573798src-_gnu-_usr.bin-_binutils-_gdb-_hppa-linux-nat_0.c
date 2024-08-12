FUN1 (VAR1 *VAR2, int VAR3)
{
int VAR4;

for (VAR4 = 0; VAR4 < sizeof (VAR5) / sizeof (VAR5[0]); VAR4++)
{
int VAR6 = VAR5[VAR4];

if (VAR3 == -1 || VAR3 == VAR6)
{
FUN2(VAR7, VAR6, &(*VAR2)[VAR4]);
}
}
}