int
FUN1()
{
int VAR1;

VAR1 = FUN2(&VAR2);
if (VAR1 != 0) {
return (VAR1);
}

FUN3();
return (VAR1);
}