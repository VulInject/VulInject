void
FUN1(char *VAR1)
{

if (++VAR2 >= VAR3 - 1) {

VAR2 = 1;
}
if (strlen(VAR1) >= VAR4 - (2 * VAR5))
VAR1[VAR4 - (2 * VAR5) - 1] = '';
move(VAR2, (2 * VAR5));
FUN2(VAR1);
FUN3();
move(VAR2 + 1, (2 * VAR5));
FUN3();
}