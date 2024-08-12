static int FUN1(unsigned int VAR1)
{
struct VAR2 *VAR3;

VAR3 = FUN2(VAR1);
FUN3(VAR1);
FUN4("", VAR1);

if (FUN5(&VAR3->VAR4, &VAR5))
FUN6("", VAR1);
return 0;
}