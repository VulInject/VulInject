static VAR1
FUN1(const struct VAR2 *VAR3, const in_addr_t VAR4)
{
ifconfig_pool_handle VAR5 = -1;

switch (VAR3->VAR6.VAR7)
{
case VAR8:
{
VAR5 = (VAR4 - VAR3->VAR6.VAR9) >> 2;
break;
}

case VAR10:
{
VAR5 = (VAR4 - VAR3->VAR6.VAR9);
break;
}

default:
FUN2(0);
}

if (VAR5 < 0 || VAR5 >= VAR3->VAR11)
{
VAR5 = -1;
}

return VAR5;
}