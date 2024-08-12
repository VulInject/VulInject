int
FUN1(void)
{
struct clockinfo VAR1;
int VAR2[2];
size_t VAR3;

VAR2[0] = VAR4;
VAR2[1] = VAR5;
VAR3 = sizeof(VAR1);
if (FUN2(VAR2, 2, &VAR1, &VAR3, NULL, 0) == -1)
return (0);

return (VAR1.VAR6);
}