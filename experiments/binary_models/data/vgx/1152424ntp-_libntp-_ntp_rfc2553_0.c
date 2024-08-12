getnameinfo (const struct VAR1 *VAR2, u_int VAR3, char *VAR4,
size_t VAR5, char *VAR6, size_t VAR7, int VAR8)
{
struct VAR9 *VAR10;

if (VAR2->VAR11 != VAR12)
return (VAR13);
VAR10 = gethostbyaddr(
(const char *)&((const struct VAR14 *)VAR2)->VAR15,
4, VAR12);
if (VAR10 == NULL) {
if (VAR16 == VAR17)
return (VAR18);
else
return (VAR19);
}
if (VAR4 != NULL && VAR5 > 0)
FUN1(VAR4, VAR10->VAR20, VAR5);
return (0);
}