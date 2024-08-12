static void FUN1(const char *VAR1[],
struct dpni_statistics VAR2)
{
VAR3 *VAR4;
int VAR5;

VAR4 = (VAR3 *)&VAR2;
for (VAR5 = 0; VAR5 < VAR6; VAR5++) {
if (strcmp(VAR1[VAR5], "") == 0)
break;
FUN2("", VAR1[VAR5], *VAR4);
VAR4++;
}
}