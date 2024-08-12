int
FUN1(int VAR1, struct VAR2 *VAR3, struct VAR4 *VAR4)
{
struct vmop_addr_result	 VAR5;

switch (VAR4->VAR6.VAR7) {
case VAR8:
FUN2(VAR4, &VAR5);
memcpy(&VAR5, VAR4->VAR9, sizeof(VAR5));
FUN3(VAR3->VAR10, VAR4, VAR11, -1);
break;
default:
return (-1);
}

return (0);
}