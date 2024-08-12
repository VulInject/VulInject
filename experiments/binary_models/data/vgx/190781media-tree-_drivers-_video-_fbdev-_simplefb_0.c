static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4)
{
int VAR5, VAR6;

for (VAR5 = 0; VAR5 < VAR2->VAR7; VAR5++) {
if (VAR2->VAR8[VAR5]) {
VAR6 = FUN2(VAR2->VAR8[VAR5]);
if (VAR6) {
FUN3(&VAR4->VAR9,
"",
VAR10, VAR5, VAR6);
FUN4(VAR2->VAR8[VAR5]);
VAR2->VAR8[VAR5] = NULL;
}
}
}
VAR2->VAR11 = true;
}