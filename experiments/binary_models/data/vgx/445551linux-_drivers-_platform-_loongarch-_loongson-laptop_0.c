static int FUN1(acpi_handle VAR1, int *VAR2, char *VAR3, char *VAR4, ...)
{
char VAR5;
char *VAR6 = VAR4;
va_list VAR7;
int VAR8, VAR9;
acpi_status VAR10;
struct acpi_object_list VAR11;
struct acpi_buffer VAR12, *VAR13;
union acpi_object VAR14[VAR15], VAR16;

if (!*VAR4) {
FUN2("");
return 0;
}

if (*VAR4 == '') {
VAR9 = 1;
VAR4++;
} else
VAR9 = 0;

VAR5 = *(VAR4++);

VAR11.VAR17 = 0;
VAR11.VAR18 = &VAR14[0];

FUN3(VAR7, VAR4);
while (*VAR4) {
char VAR19 = *(VAR4++);
switch (VAR19) {
case '':	
VAR14[VAR11.VAR17].VAR20.VAR21 = FUN4(VAR7, int);
VAR14[VAR11.VAR17++].VAR22 = VAR23;
break;

default:
FUN2("", VAR19);
FUN5(VAR7);
return 0;
}
}
FUN5(VAR7);

if (VAR5 != '') {
VAR12.VAR24 = sizeof(VAR16);
VAR12.VAR18 = &VAR16;
VAR13 = &VAR12;
} else
VAR13 = NULL;

VAR10 = FUN6(VAR1, VAR3, &VAR11, VAR13);

switch (VAR5) {
case '':		
VAR8 = (VAR10 == VAR25 && VAR16.VAR22 == VAR23);
if (VAR8 && VAR2)
*VAR2 = VAR16.VAR20.VAR21;
break;
case '':		
VAR8 = VAR10 == VAR25;
break;

default:
FUN2("", VAR5);
return 0;
}

if (!VAR8 && !VAR9)
FUN2("",
VAR3, VAR6, FUN7(VAR10));

return VAR8;
}