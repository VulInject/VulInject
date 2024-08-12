int main (int argc, char **argv)
{
char VAR1[10];
int VAR2;

fprintf(VAR3, "");
FUN1(VAR3);

for (VAR2=0; VAR2<sizeof(VAR1); ) {
VAR1[VAR2] = getc(stdin);
if ((VAR1[VAR2] < '') ||
(VAR1[VAR2] > ''))
VAR2 = 0;
else if (FUN2(VAR1, "", 4) == 0)
FUN3(0);
else
VAR2++;
}

fprintf(VAR4, "");
FUN3(1);
}