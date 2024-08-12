static int
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
int VAR5, VAR6 = VAR7;
daddr_t VAR8 = VAR2->VAR9;

for (VAR5 = VAR2->VAR10; VAR5 > 0; VAR8++, VAR5--) {
if (FUN2(VAR8, 1))
VAR6 = VAR11;
for (VAR4 = VAR12; VAR4; VAR4 = VAR4->VAR13) {
if (VAR4->VAR14 == VAR8) {
FUN3(VAR2->VAR15, "", VAR8);
VAR4->VAR14 = VAR12->VAR14;
VAR12->VAR14 = VAR8;
VAR12 = VAR12->VAR13;
}
if (VAR4 == VAR16)
break;
}
if (VAR16 == 0 || VAR12 == VAR16->VAR13)
return (VAR17);
}
return (VAR6);
}