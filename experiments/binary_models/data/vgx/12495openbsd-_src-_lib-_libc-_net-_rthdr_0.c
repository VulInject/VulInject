int
FUN1(const void *VAR1)
{
struct VAR2 *VAR3 = (struct VAR2 *)VAR1;
struct VAR4 *VAR5;
int VAR6;

switch (VAR3->VAR7) {
case VAR8:
VAR5 = (struct VAR4 *)VAR1;


if ((VAR5->VAR9 % 2) != 0 ||
(VAR6 = (VAR5->VAR9 >> 1)) < VAR5->VAR10)
return (-1);

return (VAR6);
default:
return (-1);	
}
}