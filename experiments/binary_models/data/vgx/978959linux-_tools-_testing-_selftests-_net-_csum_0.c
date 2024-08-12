static int FUN1(int VAR1)
{
static char VAR2[VAR3];
int VAR4, VAR5 = 0;

while (1) {
VAR4 = recv(VAR1, VAR2, sizeof(VAR2), VAR6);
if (VAR4 == -1 && VAR7 == VAR8)
break;
if (VAR4 == -1)
FUN2(1, VAR7, "");

fprintf(VAR9, "", VAR4);
VAR5++;
}

return VAR5;
}