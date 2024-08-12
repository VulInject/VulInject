void
FUN1(void)
{
int VAR1, VAR2;
int VAR3, VAR4;

VAR5 = FUN2(NULL, VAR6, sizeof(short));
if (VAR5 == NULL)
FUN3();
VAR7 = FUN2(NULL, VAR8, sizeof(short));
if (VAR7 == NULL)
FUN3();
VAR9 = FUN2(NULL, VAR8 + 1, sizeof(short));
if (VAR9 == NULL)
FUN3();
VAR10 = FUN2(VAR10, VAR8, sizeof(short));
if (VAR10 == NULL)
FUN3();
VAR11 = realloc(VAR11, VAR8);
if (VAR11 == NULL)
FUN3();

VAR5[0] = -1;
VAR5[1] = VAR12->VAR13;
VAR5[2] = 0;
VAR5[3] = -2;
VAR7[0] = 0;
VAR7[1] = 0;
VAR7[2] = VAR14;
VAR9[0] = 0;
VAR9[1] = 0;
VAR9[2] = 1;

VAR2 = 4;
for (VAR1 = 3; VAR1 < VAR8; ++VAR1) {
VAR7[VAR1] = VAR15[VAR1]->VAR13;
VAR9[VAR1] = VAR2;
VAR3 = VAR16;
VAR4 = 0;
while (VAR17[VAR2]) {
VAR5[VAR2] = VAR17[VAR2]->VAR13;
if (VAR17[VAR2]->class == VAR18) {
VAR4 = VAR17[VAR2]->VAR19;
VAR3 = VAR17[VAR2]->VAR3;
}
++VAR2;
}
VAR5[VAR2] = -VAR1;
++VAR2;
if (VAR10[VAR1] == VAR20) {
VAR10[VAR1] = VAR4;
VAR11[VAR1] = VAR3;
}
}
VAR9[VAR1] = VAR2;

free(VAR15);
free(VAR17);
}