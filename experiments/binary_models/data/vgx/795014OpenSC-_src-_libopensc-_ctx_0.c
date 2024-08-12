static int FUN1(VAR1 *VAR2)
{
struct VAR3 *VAR4;
VAR5 **VAR6;
int VAR7, VAR8, VAR9;

for (VAR7 = 0; VAR2->VAR10[VAR7] != NULL; VAR7++) {
VAR6 = FUN2(VAR2->VAR11, VAR2->VAR10[VAR7], "", NULL);
if (!VAR6)
continue;
for (VAR8 = 0; VAR6[VAR8] != NULL; VAR8++) {
VAR5 *VAR12 = VAR6[VAR8];
char *VAR13 = VAR12->VAR14->VAR15;
const VAR16 *VAR17;
struct sc_atr_table VAR18;
const char *VAR19;

VAR4 = NULL;

if (strlen(VAR13) < 4)
continue;


VAR19 = FUN3(VAR12, "", "");


for (VAR9 = 0; VAR2->VAR20[VAR9] != NULL; VAR9++) {
VAR4 = VAR2->VAR20[VAR9];
if (!strcmp(VAR19, VAR4->VAR21))
break;
VAR4 = NULL;
}

if (!VAR4)
continue;

memset(&VAR18, 0, sizeof(struct VAR22));
VAR18.VAR13 = VAR13;
VAR18.VAR23 = (char *) FUN3(VAR12, "", NULL);
VAR18.VAR14 = (char *) FUN3(VAR12, "", NULL);
VAR18.VAR24 = FUN4(VAR12, "", VAR25);
VAR17 = FUN5(VAR12, "");
while (VAR17 != NULL) {
unsigned int VAR26 = 0;

if (!VAR17->VAR15) {
VAR17 = VAR17->VAR27;
continue;
}

if (!strcmp(VAR17->VAR15, ""))
VAR26 = VAR28;
else if (!strcmp(VAR17->VAR15, ""))
VAR26 = VAR29;
else if (sscanf(VAR17->VAR15, "", &VAR26) != 1)
VAR26 = 0;

VAR18.VAR26 |= VAR26;
VAR17 = VAR17->VAR27;
}
VAR18.VAR30 = VAR12;
FUN6(VAR2, VAR4, &VAR18);
}
free(VAR6);
}
return VAR31;
}