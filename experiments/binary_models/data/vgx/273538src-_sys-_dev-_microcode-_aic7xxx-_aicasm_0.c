void
FUN1(char *VAR1)
{
char VAR2[1024];
VAR3 *VAR4;
struct VAR5 *VAR6;
VAR7 *VAR8;
VAR9 *VAR10;
int *VAR11;
int VAR12;
int VAR13;
int VAR14;
int VAR15;
int VAR16;

VAR12 = 0;
VAR13 = 0;
VAR14 = 1;
VAR16 = 0;
if ((VAR4 = fopen(VAR1, "")) == NULL) {
FUN2(VAR1);
FUN3(NULL, VAR17);
}


for (VAR15 = 0, VAR10 = FUN4(&VAR18);
VAR10 != NULL;
VAR10 = FUN5(VAR10, VAR19))
VAR15++;

VAR11 = NULL;
if (VAR15 != 0) {
VAR11 = (int *)malloc(VAR15 * sizeof(int));

if (VAR11 == NULL)
FUN3("", VAR20);

VAR11[0] = 0; 
VAR15--;




for (VAR10 = FUN4(&VAR18);
VAR10 != NULL && FUN5(VAR10, VAR19) != NULL;
VAR10 = FUN5(VAR10, VAR19), VAR15--) {
int VAR21;

fprintf(VAR22, "", VAR10->VAR23->VAR24);
fprintf(VAR22,
""
"");

while (1) {

VAR21 = getchar();
VAR21 = FUN6(VAR21);

if (VAR21 == '') {
VAR11[VAR15] = 1;
break;
} else if (VAR21 == '') {
VAR11[VAR15] = 0;
break;
}
}
if (FUN7(FUN8(stdin)) == 0)
FUN9(VAR21);
}
fprintf(VAR22, "");
}


VAR8 = FUN10(&VAR25);
for (VAR6 = FUN10(&VAR26);
VAR6 != NULL;
VAR6 = FUN11(VAR6, VAR19), VAR12++) {

if (FUN12(&VAR8, VAR12,
&VAR16, VAR11) == 0) {

continue;
}

while (VAR14 < VAR6->VAR27) {
fgets(VAR2, sizeof(VAR2), VAR4);
fprintf(VAR28, "", VAR2);
VAR14++;
}
fprintf(VAR28, "", VAR13,
VAR6->VAR29.VAR30[0],
VAR6->VAR29.VAR30[1],
VAR6->VAR29.VAR30[2],
VAR6->VAR29.VAR30[3]);
VAR6->VAR29.VAR30[3],
VAR6->VAR29.VAR30[2],
VAR6->VAR29.VAR30[1],
VAR6->VAR29.VAR30[0]);

if (VAR14 == VAR6->VAR27) {
fgets(VAR2, sizeof(VAR2), VAR4);
fprintf(VAR28, "", VAR2);
VAR14++;
} else {
fprintf(VAR28, "");
}
VAR13++;
}

while(fgets(VAR2, sizeof(VAR2), VAR4) != NULL)
fprintf(VAR28, "", VAR2);

fclose(VAR4);
}