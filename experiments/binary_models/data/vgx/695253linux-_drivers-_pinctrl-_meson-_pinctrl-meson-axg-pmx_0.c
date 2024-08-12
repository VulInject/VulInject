static int FUN1(struct VAR1 *VAR2,
unsigned int VAR3,
struct VAR4 **VAR5)
{
int VAR6;
struct VAR7 *VAR8 = VAR2->VAR9->VAR10;

for (VAR6 = 0; VAR6 < VAR8->VAR11; VAR6++)
if (VAR3 >= VAR8->VAR12[VAR6].VAR13 &&
VAR3 <= VAR8->VAR12[VAR6].VAR14) {
*VAR5 = &VAR8->VAR12[VAR6];
return 0;
}

return -VAR15;
}