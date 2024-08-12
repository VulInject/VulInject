VAR1
FUN1(VAR2 *VAR3)
{
uint64_t	VAR4;
struct	timespec	VAR5;

if (VAR3 == 0)
{
return(VAR6);
}
FUN2(VAR7, &VAR5);
VAR4 = VAR5.VAR8;
VAR4 *= 1000000;
VAR4 += (VAR5.VAR9/1000);

if (VAR5.VAR9 % 1000 > 500)
VAR4++;

*VAR3 = VAR4;

return(VAR10);
}