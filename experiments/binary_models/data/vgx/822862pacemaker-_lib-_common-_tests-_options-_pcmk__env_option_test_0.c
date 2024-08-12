static void
FUN1(void **VAR1)
{

char VAR2[VAR3 - 4];
char VAR4[VAR3];

for (int VAR5 = 0; VAR5 < VAR3 - 5; VAR5++) {
VAR2[VAR5] = '';
}
VAR2[VAR3 - 5] = '';

VAR6 = true;


snprintf(VAR4, VAR3, "", VAR2);
FUN2(VAR7, VAR8, VAR4);
FUN3(VAR7, "");
FUN4(FUN5(VAR2), "");

VAR6 = false;
}