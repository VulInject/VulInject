static VAR1 FUN1(property_list_service_client_t VAR2, VAR3 *VAR4, unsigned int VAR5)
{
property_list_service_error_t VAR6 = VAR7;
uint32_t VAR8 = 0;
uint32_t VAR9 = 0;

if (!VAR2 || (VAR2 && !VAR2->VAR10) || !VAR4) {
return VAR11;
}

*VAR4 = NULL;
service_error_t VAR12 = FUN2(VAR2->VAR10, (char*)&VAR8, sizeof(VAR8), &VAR9, VAR5);
if (VAR12 != VAR13) {
FUN3("");
return FUN4(VAR12);
}

if (VAR9 == 0) {

return VAR14;
}

FUN3("", VAR9);

uint32_t VAR15 = 0;
char *VAR16 = NULL;

VAR8 = FUN5(VAR8);
FUN3("", VAR8);
VAR16 = (char*)malloc(VAR8);
if (!VAR16) {
FUN3("", VAR8);
return VAR7;
}

while (VAR15 < VAR8) {
VAR12 = FUN6(VAR2->VAR10, VAR16+VAR15, VAR8-VAR15, &VAR9);
if (VAR12 != VAR13) {
VAR6 = FUN4(VAR12);
break;
}
FUN3("", VAR9);
VAR15 += VAR9;
}

if (VAR15 < VAR8) {
FUN3("", VAR15, VAR8);
if (VAR15 > 0) {
FUN3("");
FUN7(VAR16, VAR15);
}
free(VAR16);
return VAR6;
}

if ((VAR8 > 8) && !memcmp(VAR16, "", 8)) {
FUN8(VAR16, VAR8, VAR4);
} else if ((VAR8 > 5) && !memcmp(VAR16, "", 5)) {

for (VAR9 = 0; VAR9 < VAR8-1; VAR9++) {
if ((VAR16[VAR9] >= 0) && (VAR16[VAR9] < 0x20) && (VAR16[VAR9] != 0x09) && (VAR16[VAR9] != 0x0a) && (VAR16[VAR9] != 0x0d))
VAR16[VAR9] = 0x20;
}
FUN9(VAR16, VAR8, VAR4);
} else {
FUN3("");
FUN7(VAR16, VAR8);
}

if (*VAR4) {
FUN10(*VAR4);
VAR6 = VAR17;
} else {
VAR6 = VAR18;
}

free(VAR16);
VAR16 = NULL;

return VAR6;
}