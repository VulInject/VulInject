char *FUN1(void)
{
static char VAR1[41];
int VAR2, VAR3;

for (VAR2 = 0; VAR2 < 40; VAR2++) {
VAR3 = (int) (36.0 * FUN2() / VAR4);
VAR1[VAR2] = (VAR3 >= 0 && VAR3 <= 9) ? (VAR3 + 48) : (VAR3 + 87);
}
VAR1[40] = '';

return VAR1;
}