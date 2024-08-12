void
FUN1(struct VAR1 *VAR2)
{
struct VAR1 *VAR3, *VAR4;
int VAR5;

VAR5 = FUN2();
if (VAR6 == 0) {
VAR2->VAR7 = 0;
FUN3(&VAR8, VAR2, VAR9);
} else {
for (VAR3 = FUN4(&VAR8);
(VAR4 = FUN5(VAR3, VAR9)) != NULL; VAR3 = VAR4)
if (VAR4->VAR7 - VAR3->VAR7 > 1)
break;
VAR2->VAR7 = VAR3->VAR7 + 1;
FUN6(VAR3, VAR2, VAR9);
}
VAR6++;
FUN7(VAR5);

FUN8(VAR10, "");
}