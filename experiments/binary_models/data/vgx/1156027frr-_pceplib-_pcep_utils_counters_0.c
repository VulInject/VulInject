bool FUN1(struct VAR1 *VAR2)
{
if (VAR2 == NULL || VAR2->VAR3 == NULL) {
FUN2(
VAR4,
"",
VAR5);
return false;
}

int VAR6 = 0;
for (; VAR6 <= VAR2->VAR7; VAR6++) {
struct VAR8 *VAR8 = VAR2->VAR3[VAR6];
if (VAR8 != NULL) {
FUN3(VAR9, VAR8);
}
}

FUN3(VAR9, VAR2->VAR3);
FUN3(VAR9, VAR2);

return true;
}