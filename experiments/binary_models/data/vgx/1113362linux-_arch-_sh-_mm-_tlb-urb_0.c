void FUN1(void)
{
unsigned long VAR1, VAR2;
int VAR3;

FUN2(VAR2);

VAR1 = FUN3(VAR4);
VAR3 = (VAR1 & VAR5) >> VAR6;
VAR1 &= ~VAR5;


FUN4(VAR3++ == VAR7);

VAR3 = VAR3 % VAR7;

VAR1 |= (VAR3 << VAR6);
FUN5(VAR1, VAR4);
FUN6();

FUN7(VAR2);
}