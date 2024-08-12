int
FUN1(void)
{
int	VAR1;

VAR1 = FUN2(&VAR2);

FUN3(VAR3, int, VAR1);

if (VAR1)
return (VAR1);

FUN4(&VAR4);


(void) FUN5(VAR5);
FUN6(VAR6);

FUN7();
FUN8();
return (0);
}