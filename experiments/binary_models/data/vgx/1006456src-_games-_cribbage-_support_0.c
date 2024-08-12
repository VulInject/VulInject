int
FUN1(int *VAR1, int VAR2)
{
bool VAR3;

VAR3 = (VAR1 == &VAR4);
if (VAR2 != 0) {
FUN2(VAR5[(int)VAR3], '', VAR3);
VAR5[(int)VAR3] = *VAR1;
*VAR1 += VAR2;
FUN2(*VAR1, VAR6, VAR3);
FUN3();
}
return (*VAR1 >= VAR7);
}