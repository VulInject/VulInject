static int FUN1(unsigned int VAR1)
{
struct VAR2 *VAR3;

FUN2(&VAR4);

VAR3 = FUN3(VAR5, VAR1);
if (VAR3 && VAR3->VAR6) {
FUN4(VAR3->VAR6);
FUN5(VAR3->VAR6);
}

FUN6(&VAR4);
return 0;
}