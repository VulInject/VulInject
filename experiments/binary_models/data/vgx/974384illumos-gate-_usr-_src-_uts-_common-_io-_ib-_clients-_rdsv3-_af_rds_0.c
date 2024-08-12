int
FUN1(sock_lower_handle_t VAR1, VAR2 *VAR3,
struct VAR4 *VAR5, VAR6 *VAR7)
{
struct VAR8 *VAR9 = (struct VAR8 *)VAR1;
struct VAR10 *VAR11 = FUN2(VAR9);
int VAR12;

FUN3("", "", VAR11);
VAR12 = FUN4(VAR11, VAR3, VAR5, VAR3->VAR13, VAR5->VAR14);

FUN3("", "", VAR11, VAR12);

if (VAR12 < 0) {
return (-VAR12);
}

return (0);
}