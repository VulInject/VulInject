int FUN1(char *VAR1, int VAR2)
{
struct VAR3 *VAR4;
char VAR5[80];
int VAR6 = 0;
VAR1[0] = '';

FUN2(&VAR7);
FUN3(VAR4, &VAR8, VAR9) {
int VAR10;

sprintf(VAR5, "", VAR4->VAR11, VAR4->VAR12);
VAR10 = strlen(VAR5);
if (VAR6 + VAR10 > VAR2)
break;
VAR6 += VAR10;
strcat(VAR1, VAR5);
}
FUN4(&VAR7);

return VAR6;
}