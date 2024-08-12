main ()
{
unsigned VAR1;

for (VAR1 = 0; VAR1 < 10000; VAR1++)
if (FUN1 (VAR1) != VAR1 / 3)
FUN2 ();
FUN3 (0);
}