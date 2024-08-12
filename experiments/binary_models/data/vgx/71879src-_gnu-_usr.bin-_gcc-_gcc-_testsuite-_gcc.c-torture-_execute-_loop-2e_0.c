int main ()
{
void *VAR1;
int *VAR2[40];
__SIZE_TYPE__ VAR3;


if (sizeof(VAR3) == sizeof(int))
VAR3 = (VAR4) VAR5;
else if (sizeof(VAR3) == sizeof(long))
VAR3 = (VAR4) VAR6;
else if (sizeof(VAR3) == sizeof(long long))
VAR3 = (VAR4) VAR7;
else
return 0;


VAR3 &= -32;


VAR1 = (void *)VAR3;


VAR2[39] = 0;
FUN1 (VAR1, VAR2);
if (VAR2[39] != (int *)VAR1 + 39)
FUN2 ();

return 0;
}