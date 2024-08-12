static VAR1
FUN1(char *VAR2,
acpi_size VAR3,
struct VAR4 **VAR5)
{
VAR6 *VAR7;
struct acpi_table_header VAR8;
struct VAR4 *VAR9 = NULL;
u32 VAR10;
s32 VAR11;
acpi_status VAR12 = VAR13;



VAR7 = fopen(VAR2, "");
if (VAR7 == NULL) {
fprintf(VAR14, "", VAR2);
return (FUN2(VAR15));
}

FUN3(VAR7, VAR3, VAR16);



VAR11 = fread(&VAR8, 1, sizeof(struct VAR4), VAR7);
if (VAR11 != sizeof(struct VAR4)) {
fprintf(VAR14, "", VAR2);
VAR12 = VAR17;
goto VAR18;
}




if (VAR19) {
if (FUN4(VAR19)) {
if (!FUN4(VAR8.VAR19)) {
fprintf(VAR14,
"",
VAR8.VAR19);
VAR12 = VAR20;
goto VAR18;
}
} else if (!FUN5(VAR19, VAR8.VAR19)) {
fprintf(VAR14,
"",
VAR19, VAR8.VAR19);
VAR12 = VAR20;
goto VAR18;
}
}

VAR10 = FUN6(&VAR8);
if (VAR10 == 0) {
VAR12 = VAR17;
goto VAR18;
}



VAR9 = calloc(1, VAR10);
if (!VAR9) {
fprintf(VAR14,
"",
VAR8.VAR19, VAR10);
VAR12 = VAR21;
goto VAR18;
}

FUN3(VAR7, VAR3, VAR16);

VAR11 = fread(VAR9, 1, VAR10, VAR7);
if (VAR11 != VAR10) {
fprintf(VAR14, "",
VAR8.VAR19);
VAR12 = VAR22;
goto VAR18;
}



(void)FUN7(VAR9);

VAR18:
fclose(VAR7);
*VAR5 = VAR9;
return (VAR12);
}