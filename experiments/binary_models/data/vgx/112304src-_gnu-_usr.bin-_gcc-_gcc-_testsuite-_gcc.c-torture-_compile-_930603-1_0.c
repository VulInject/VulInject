union VAR1 *VAR2, FUN1();

FUN2()
{
union u VAR3 = FUN1();

VAR2[0] = *VAR3.VAR4;
VAR2[1] = FUN1();
}