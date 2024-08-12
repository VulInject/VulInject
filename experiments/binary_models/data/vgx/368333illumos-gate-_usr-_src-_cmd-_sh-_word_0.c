unsigned int FUN1()
{
unsigned int	VAR1, VAR2;

VAR3:
if ((VAR2 = FUN2()) == VAR4) {
if ((VAR1 = FUN2()) == VAR5) {
FUN3();
goto VAR3;
}
VAR6 = VAR1 | VAR7;
}
return (VAR2);
}