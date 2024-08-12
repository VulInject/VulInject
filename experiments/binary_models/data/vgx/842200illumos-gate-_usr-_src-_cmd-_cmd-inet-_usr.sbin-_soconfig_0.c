static int
FUN1(char *VAR1)
{
char VAR2[VAR3];
char VAR4[VAR3];
int VAR5;
char *VAR6[20];
VAR7 *VAR8;
int VAR9 = 0;
int VAR10 = 0;

VAR8 = fopen(VAR1, "");
if (VAR8 == NULL) {
FUN2("");
fprintf(VAR11, "");
FUN3();
return (1);
}

while (fgets(VAR2, sizeof (VAR2) - 1, VAR8) != NULL) {
VAR9++;
strcpy(VAR4, VAR2);
VAR5 = FUN4(VAR4, VAR6,
sizeof (VAR6) / sizeof (VAR6[0]));
{
int VAR12;

FUN5("", VAR5);
for (VAR12 = 0; VAR12 < VAR5; VAR12++)
FUN5("", VAR12, VAR6[VAR12]);
}
switch (VAR5) {
case 0:

break;
case 3:
VAR10 += FUN6(VAR6[0], VAR6[1],
VAR6[2], NULL, VAR1, VAR9);
break;
case 4:
VAR10 += FUN6(VAR6[0], VAR6[1],
VAR6[2], VAR6[3], VAR1, VAR9);
break;
default:
VAR10++;
fprintf(VAR11,
FUN7(""), VAR2);
fprintf(VAR11,
FUN7(""), VAR9,
VAR1);
break;
}
}
(void) fclose(VAR8);

if (VAR10 > 0)
return (1);
else
return (0);
}