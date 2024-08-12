static int FUN1(const char *VAR1, struct VAR2 *VAR3)
{
int VAR4, VAR5;
struct VAR6 *VAR7;
char VAR8[VAR9];
char *VAR10 = &VAR8[0];
char *VAR11[VAR12], *VAR13;

if (!VAR1)
return -VAR14;

if (VAR15 == VAR16) {
FUN2("",
VAR16);
return -VAR14;
}

VAR5 = FUN3(VAR1, VAR9);
if (VAR5 == VAR9) {
FUN2(""%VAR17\"",
VAR1, VAR9);
return -VAR14;
}

if (VAR5 == 0) {
FUN4("");
return 0;
}

strcpy(VAR8, VAR1);


if (VAR8[VAR5 - 1] == '')
VAR8[VAR5 - 1] = '';

for (VAR4 = 0; VAR4 < VAR12; VAR4++)
VAR11[VAR4] = FUN5(&VAR10, "");

if (VAR10) {
FUN2(""%VAR17\"", VAR1);
return -VAR14;
}

VAR7 = &VAR6[VAR15];
strcpy(&VAR7->VAR18[0], VAR11[0]);

VAR13 = VAR11[1];
if (VAR13) {
VAR7->VAR19 = FUN6(VAR13);

if (VAR7->VAR19 < 0)
return VAR7->VAR19;
}

VAR13 = VAR11[2];
if (VAR13) {
int VAR20 = FUN7(VAR13, 10, &VAR7->VAR21);

if (VAR20) {
FUN2("",
VAR13);
return -VAR14;
}
}

VAR13 = VAR11[3];
if (VAR13) {
int VAR20 = FUN7(VAR13, 10, &VAR7->VAR22);

if (VAR20) {
FUN2("",
VAR13);
return -VAR14;
}
} else
VAR7->VAR22 = VAR23;

VAR15 += 1;
return 0;
}