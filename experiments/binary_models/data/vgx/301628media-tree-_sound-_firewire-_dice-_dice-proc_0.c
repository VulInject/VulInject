static void FUN1(char *VAR1, unsigned int VAR2)
{
unsigned int VAR3;

for (VAR3 = 0; VAR3 < VAR2; VAR3 += 4)
FUN2((VAR4 *)(VAR1 + VAR3));

for (VAR3 = 0; VAR3 < VAR2 - 2; ++VAR3) {
if (VAR1[VAR3] == '')
return;
if (VAR1[VAR3] == '' && VAR1[VAR3 + 1] == '') {
VAR1[VAR3 + 2] = '';
return;
}
}
VAR1[VAR2 - 1] = '';
}