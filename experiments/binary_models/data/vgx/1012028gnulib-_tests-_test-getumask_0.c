FUN1 (VAR1, VAR2, (void));


int
main (void)
{
int VAR3;

VAR3 = FUN2 ();
FUN3 (VAR3 >= 0);



FUN4 (002);

VAR3 = FUN2 ();
FUN3 (VAR3 == 002);

FUN4 (077);

VAR3 = FUN2 ();
FUN3 (VAR3 == 077);


return 0;
}