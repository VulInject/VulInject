static void
FUN1(
int VAR1,
struct VAR2 *VAR2
)
{
register struct VAR3 *VAR4;

if (VAR1 >= VAR5) {
FUN2(VAR6,
"",
VAR1, VAR5);
return;
}
if (!VAR7[VAR1]) {
FUN2(VAR6,
"", VAR1);
return;
}


VAR4 = VAR8[VAR1];
FUN3(&VAR4->VAR9);
VAR7[VAR1] = 0;
}