static void
FUN1(int VAR1, Datum VAR2)
{
int			VAR3;

for (VAR3 = 0; VAR3 < VAR4; VAR3++)
FUN2(VAR5[VAR3]);
free(VAR5);

for (VAR3 = 0; VAR3 < VAR4; VAR3++)
FUN2(FUN3(VAR6 + VAR3));
}