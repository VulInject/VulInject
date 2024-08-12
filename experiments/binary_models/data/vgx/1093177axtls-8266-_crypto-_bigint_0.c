void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
int VAR8, VAR9, VAR10 = VAR7-1;

FUN2(VAR4);
memset(VAR6, 0, VAR7);  

for (VAR8 = 0; VAR8 < VAR4->VAR7; VAR8++)
{
for (VAR9 = 0; VAR9 < VAR11; VAR9++)
{
comp VAR12 = 0xff << (VAR9*8);
int VAR13 = (VAR4->VAR14[VAR8] & VAR12) >> (VAR9*8);
VAR6[VAR10--] = VAR13;

if (VAR10 < 0)
{
goto VAR15;
}
}
}
VAR15:

FUN3(VAR2, VAR4);
}