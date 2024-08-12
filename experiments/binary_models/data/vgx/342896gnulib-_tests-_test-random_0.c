FUN1 (initstate, char *, (unsigned int, char *, VAR1));
FUN1 (setstate, char *, (char *));
FUN1 (random, long, (void));



int
main ()
{
char VAR2[128];
unsigned int VAR3;
unsigned int VAR4 = 0;

initstate (FUN2 (NULL), VAR2, sizeof VAR2);
for (VAR3 = 0; VAR3 < 1000; VAR3++)
{
long VAR5 = random ();
FUN3 (0 <= VAR5);
if (VAR6 / 2 < VAR5)
++VAR4;
}


return !VAR4;
}