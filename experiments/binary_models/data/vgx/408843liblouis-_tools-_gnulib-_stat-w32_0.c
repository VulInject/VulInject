FUN1 (const VAR1 *VAR2)
{
struct timespec VAR3;

unsigned long long VAR4 =
((unsigned long long) VAR2->VAR5 << 32)
| (unsigned long long) VAR2->VAR6;
if (VAR4 == 0)
{
VAR3.VAR7 = 0;
VAR3.VAR8 = 0;
}
else
{

unsigned long long VAR9 =
VAR4 - (unsigned long long) 134774 * (unsigned long long) 86400 * (unsigned long long) 10000000;
VAR3.VAR7 = VAR9 / (unsigned long long) 10000000;
VAR3.VAR8 = (unsigned long) (VAR9 % (unsigned long long) 10000000) * 100;
}
return VAR3;
}