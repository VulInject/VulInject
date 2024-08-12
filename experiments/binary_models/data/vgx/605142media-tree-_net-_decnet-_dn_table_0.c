static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR2->VAR5;
struct VAR6 *VAR7;
int VAR8 = 0;

VAR9 = 0;
for(VAR7 = VAR4->VAR10; VAR7; VAR7 = VAR7->VAR11) {
int VAR12;
int VAR13 = 0;
for(VAR12 = VAR7->VAR14-1; VAR12 >= 0; VAR12--)
VAR13 += FUN2(&VAR7->VAR15[VAR12], VAR7->VAR16, VAR4);
VAR7->VAR17 -= VAR13;
VAR8 += VAR13;
}

return VAR8;
}