}
FUN1(VAR1);


static int FUN2(struct VAR2 *VAR3, char *VAR4,
int VAR5)
{
struct VAR6	*VAR7 = (struct VAR6 *)(VAR3 + 1);
char			*VAR8 = VAR4;
char			*VAR9 = VAR4 + VAR5;
int			 VAR10 = 0;

FUN3(VAR3->VAR11 == VAR12);
VAR10 = FUN4(VAR7, VAR3->VAR13);
if (VAR10 < 0)
return VAR10;

VAR8 += snprintf(VAR8, VAR9 - VAR8, "", VAR7->VAR14);
if (VAR7->VAR15)
VAR8 += snprintf(VAR8, VAR9 - VAR8, "",
VAR7->VAR15);

if (VAR7->VAR16)
VAR8 += snprintf(VAR8, VAR9 - VAR8, "", VAR7->VAR16);

if (VAR7->VAR17) {
char VAR18[VAR19];

FUN5(VAR7->VAR17, VAR18, sizeof(VAR18));
VAR8 += snprintf(VAR8, VAR9 - VAR8, "",
VAR18, VAR7->VAR17);
}

if (VAR7->VAR14 == VAR20) {
struct VAR21 *VAR22 = FUN6(VAR7, 1);

VAR8 += snprintf(VAR8, VAR9 - VAR8, "",
VAR22->VAR23, VAR22->VAR24,
VAR22->VAR25, VAR22->VAR26);
} else {
int VAR27;

for (VAR27 = 0; VAR27 <  VAR7->VAR28; VAR27++) {
VAR8 += snprintf(VAR8, VAR9 - VAR8, "", VAR27,
FUN7(VAR7, VAR27));
}
}
VAR8 += snprintf(VAR8, VAR9 - VAR8, "");

VAR10 = VAR8 - VAR4;
return VAR10;
}