static int FUN1(char **VAR1)
{
int VAR2;

for (VAR2 = 0; *VAR1; VAR2++) {
VAR1++;
}
return VAR2;
}