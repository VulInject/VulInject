static int
FUN1(int VAR1, int VAR2)
{
int VAR3;

VAR3 = VAR1 % VAR2;
while (VAR3 != 0) {
VAR1 = VAR2;
VAR2 = VAR3;
VAR3 = VAR1 % VAR2;
}

return VAR2;
}