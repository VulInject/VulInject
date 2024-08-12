static int
FUN1(const struct VAR1 *VAR2,
uint64_t VAR3, VAR4 *VAR5)
{
bool VAR6 = (VAR3 == VAR7);

switch (VAR2->VAR8) {
case 1:
*VAR5 = VAR9;
return 0;

case 2:
*VAR5 = VAR6 ? VAR10
: VAR11;
return 0;

case 3:
*VAR5 = VAR6 ? VAR12
: VAR13;
return 0;

default:
return -VAR14;
}
}