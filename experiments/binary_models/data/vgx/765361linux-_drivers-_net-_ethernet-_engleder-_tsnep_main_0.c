static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = VAR2->VAR5->VAR4;
int VAR6;

memset(VAR2->VAR7, 0, sizeof(VAR2->VAR7));

for (VAR6 = 0; VAR6 < VAR8; VAR6++) {
if (VAR2->VAR9[VAR6]) {
FUN2(VAR4, VAR10, VAR2->VAR9[VAR6],
VAR2->VAR11[VAR6]);
VAR2->VAR9[VAR6] = NULL;
VAR2->VAR11[VAR6] = 0;
}
}
}