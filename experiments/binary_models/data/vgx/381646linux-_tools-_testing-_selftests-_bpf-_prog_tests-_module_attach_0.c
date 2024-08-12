static int FUN1(int *VAR1)
{
int VAR2, VAR3;
char VAR4[65];
ssize_t VAR5;

VAR2 = open(VAR6, VAR7);
VAR3 = -VAR8;
if (!FUN2(VAR2, 0, ""))
return VAR3;

VAR5 = read(VAR2, VAR4, sizeof(VAR4) - 1);
VAR3 = -VAR8;
if (!FUN3(VAR5, 0, "")) {
close(VAR2);
return VAR3;
}

VAR4[VAR5] = '';
*VAR1 = FUN4(VAR4, NULL, 0);
close(VAR2);

return 0;
}