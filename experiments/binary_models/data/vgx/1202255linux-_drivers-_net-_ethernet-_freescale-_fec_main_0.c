static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4,
void *VAR5)
{
struct VAR6 *VAR7 = FUN2(VAR2);
int VAR8 = 0;

switch (VAR4->VAR9) {
case VAR10:
*(VAR11 *)VAR5 = VAR7->VAR12;
break;
default:
VAR8 = -VAR13;
break;
}

return VAR8;
}