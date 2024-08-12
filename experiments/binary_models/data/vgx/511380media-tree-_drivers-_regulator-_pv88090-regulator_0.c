static int FUN1(struct VAR1 *VAR2, int VAR3,
int VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;


for (VAR7 = VAR6->VAR8; VAR7 >= 0; VAR7--) {
if (VAR3 <= VAR6->VAR9[VAR7]
&& VAR4 >= VAR6->VAR9[VAR7]) {
return FUN3(VAR2->VAR10,
VAR6->VAR11,
VAR6->VAR12,
VAR7 << VAR13);
}
}

return -VAR14;
}