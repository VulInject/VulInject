static inline unsigned
FUN1(struct VAR1 *VAR2, char *VAR3,
unsigned VAR4, unsigned VAR5)
{
struct VAR6 *VAR7 = (struct VAR6*)(VAR3 + VAR4);
struct VAR6 *VAR8 = (struct VAR6*)(VAR3 + (VAR4&VAR5));
while ((char*)VAR8 < (char*)VAR7)
VAR8 = FUN2(VAR2, VAR8);
return (char *)VAR8 - VAR3;
}