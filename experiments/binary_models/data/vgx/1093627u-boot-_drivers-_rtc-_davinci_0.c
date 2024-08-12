static int FUN1(struct VAR1 *VAR2, uint VAR3,
VAR4 *VAR5, uint VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
VAR9 *VAR10 = (VAR9 *)VAR5;
unsigned int VAR11;
int VAR12;

if (VAR6 & 3)
return -VAR13;

for (VAR12 = 0; VAR12 < VAR6 / 4; VAR12++) {
VAR11 = VAR14 + VAR3 + (VAR12 * 4);
if (VAR11 >= VAR15)
return -VAR13;

VAR10[VAR12] = FUN3(VAR8, VAR11);
}

return 0;
}