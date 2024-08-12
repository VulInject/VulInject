main ()
{
float VAR1 = 1.0 / 0.0;
int VAR2 = FUN1 (VAR1);

if (VAR2 == 0)
FUN2 ();

FUN3 ("", VAR2);
return 0;
}