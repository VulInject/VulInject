static VAR1
FUN1(struct VAR2 *VAR3, void *VAR4, size_t VAR5)
{
struct VAR6 *VAR7 = (struct VAR6 *)VAR3;
ssize_t VAR8;

while ((VAR8 = read(VAR7->VAR9, VAR4, VAR5)) == -1) {
if (VAR10 == VAR11)
continue;
if (VAR10 != VAR12) {
FUN2("");
VAR7->VAR13.VAR14 = 1;
}
return 0;
}
if (VAR8 == 0) {
FUN3("");
VAR7->VAR13.VAR14 = 1;
return 0;
}
return VAR8;
}