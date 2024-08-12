int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
VAR5 *VAR6;
char VAR7[VAR8] = VAR9;
struct VAR1 *VAR10;
char VAR11[VAR8] = VAR9;
int VAR12, VAR13 = 0;
uint64_t VAR14 = 0;

strcat(VAR7, "");
strcat(VAR7, VAR2->VAR15);

VAR6 = FUN2(VAR7);
if (VAR6 == NULL)
return -1;

strcat(VAR11, "");
strcat(VAR11, VAR2->VAR15);
strcat(VAR11, "");
FUN3(VAR11, VAR2->VAR16, VAR17);
if (VAR2->VAR18)
VAR2->VAR19 = VAR2->VAR18->VAR19 + 1;
VAR13 = FUN4(VAR2, &VAR14);
if (VAR13 == 0)
VAR2->VAR20 = 1;
VAR13 = FUN5(VAR2, &VAR14);
if (VAR13 == 0)
VAR2->VAR21 = 1;

while ((VAR4 = FUN6(VAR6)) != NULL) {
struct stat VAR22;

if (strcmp(VAR4->VAR23, "") == 0 || strcmp(VAR4->VAR23, "") == 0)
continue;

if (FUN7(VAR4->VAR23, &VAR22) != 0 || !FUN8(VAR22.VAR24))
if (FUN9(FUN10(VAR6), VAR4->VAR23, &VAR22, 0) < 0)
continue;

if (FUN11(VAR4->VAR23, "", 11) != 0)
continue;

VAR10 = calloc(1, sizeof(struct VAR1));
if (VAR10 == NULL)
return -1;
for (VAR12 = 0; VAR12 < VAR25; VAR12++) {
if (VAR2->VAR26[VAR12] == NULL) {
VAR2->VAR26[VAR12] = VAR10;
break;
}
if (VAR12 == VAR25 - 1) {
free(VAR10);
fprintf(VAR27, "",
VAR25);
return -1;
}
}
strcpy(VAR10->VAR15, VAR2->VAR15);
strcat(VAR10->VAR15, "");
strcat(VAR10->VAR15, VAR4->VAR23);
VAR10->VAR18 = VAR2;
if (VAR2->VAR19 >= VAR28) {
fprintf(VAR27, "",
VAR28);
VAR13 = -1;
break;
}
FUN1(VAR10);
}
FUN12(VAR6);
return VAR13;
}