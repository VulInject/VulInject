int FUN1(struct VAR1 *VAR1, void *VAR2,
struct VAR3 *VAR4)
{
switch (VAR4->VAR5) {
case 0:
if (VAR4->VAR6 >= FUN2(VAR7))
return -VAR8;
*VAR4 = VAR7[VAR4->VAR6];
return 0;
case 1:
if (VAR4->VAR6 >= FUN2(VAR9))
return -VAR8;
*VAR4 = VAR9[VAR4->VAR6];
return 0;
default:
return -VAR8;
}
}