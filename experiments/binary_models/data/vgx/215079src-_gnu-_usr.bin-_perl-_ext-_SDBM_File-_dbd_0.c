void
FUN1(int VAR1)
{
int VAR2;
int VAR3 = 0;
int VAR4 = 0;
char VAR5[VAR6];

while ((VAR2 = read(VAR1, VAR5, VAR6)) > 0) {
if (!FUN2(VAR5))
fprintf(VAR7, "", VAR3);
else if (FUN3(VAR5))
VAR4++;
else
FUN4(VAR5);
VAR3++;
}

if (VAR2 == 0)
fprintf(VAR7, "", VAR3, VAR4);
else
FUN5("", VAR3);
}