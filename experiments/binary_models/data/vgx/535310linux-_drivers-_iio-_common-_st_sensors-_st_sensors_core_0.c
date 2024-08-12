}
FUN1(VAR1, VAR2);

static int FUN2(struct VAR3 *VAR4,
unsigned int VAR5, int *VAR6)
{
int VAR7, VAR8 = -VAR9;

for (VAR7 = 0; VAR7 < VAR10; VAR7++) {
if (VAR4->VAR5.VAR11[VAR7].VAR12 == 0)
return VAR8;

if (VAR4->VAR5.VAR11[VAR7].VAR12 == VAR5) {
*VAR6 = VAR7;
VAR8 = 0;
break;
}
}

return VAR8;
}