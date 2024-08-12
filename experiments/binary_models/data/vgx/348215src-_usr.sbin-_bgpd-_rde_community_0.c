static void
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
int VAR5;
int VAR6;

if (VAR2->VAR7 + 1 > VAR2->VAR8) {
struct VAR3 *new;
int VAR9 = VAR2->VAR8 + 8;

if ((new = FUN2(VAR2->VAR10, VAR9,
sizeof(struct VAR3))) == NULL)
FUN3(VAR11);
memset(new + VAR2->VAR8, 0, 8 * sizeof(struct VAR3));
VAR2->VAR10 = new;
VAR2->VAR8 = VAR9;
}


for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
VAR6 = FUN4(VAR2->VAR10 + VAR5, VAR4);
if (VAR6 == 0) {

return;
} else if (VAR6 > 0) {

memmove(VAR2->VAR10 + VAR5 + 1,
VAR2->VAR10 + VAR5,
(VAR2->VAR7 - VAR5) * sizeof(*VAR4));
break;
}
}


VAR2->VAR10[VAR5] = *VAR4;
VAR2->VAR7++;
}