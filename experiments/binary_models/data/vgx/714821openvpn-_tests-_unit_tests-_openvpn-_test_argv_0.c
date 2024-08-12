static void
FUN1(void **VAR1)
{
struct argv VAR2 = FUN2();
struct argv VAR3;

VAR3 = FUN3(&VAR2, VAR4);
FUN4(VAR3.argc, 1);
FUN5(VAR3.argv[0], VAR4);
FUN6(&VAR3);

FUN6(&VAR2);
}