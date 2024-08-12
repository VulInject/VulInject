static struct VAR1 *
FUN1(struct VAR1 *VAR2)
{
uint64_t VAR3, VAR4, VAR5, VAR6;
struct VAR1 *VAR7, *VAR8, *new;

VAR3 = (1ull << VAR9);

VAR7 = VAR8 = NULL;

for (; VAR2; VAR2 = VAR2->VAR10) {
VAR4  = (VAR11)VAR2->VAR12;
VAR5 = VAR4+(VAR11)(VAR2->VAR13);
while (VAR4 < VAR5) {
VAR6 = FUN2(VAR4+1, VAR3);
VAR6 = FUN3(VAR5, VAR6);
new = FUN4(sizeof (struct VAR1), VAR14);
new->VAR12 = VAR4;
new->VAR13 = VAR6 - VAR4;
if (VAR7 == NULL)
VAR7 = new;
if (VAR8) {
VAR8->VAR10 = new;
new->VAR15 = VAR8;
}
VAR8 = new;
VAR4 = VAR6;
}
}
return (VAR7);
}