static inline unsigned
FUN1(char *VAR1, unsigned VAR2, unsigned VAR3)
{
struct VAR4 *VAR5 = (struct VAR4 *)(VAR1 + VAR2);
struct VAR4 *VAR6 =
(struct VAR4 *)(VAR1 + (VAR2&VAR3));
while ((char *)VAR6 < (char *)VAR5) {
if (VAR6->VAR7 == 0)
break;
VAR6 = FUN2(VAR6);
}
return (char *)VAR6 - VAR1;
}