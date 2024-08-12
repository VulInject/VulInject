static void FUN1(void *VAR1, char *VAR2, unsigned short VAR3) {
struct VAR4 *VAR5 = VAR1;
VAR6 *VAR7 = VAR5->VAR8;
if (!VAR7 || VAR7 != VAR9 || VAR5 != VAR9[0].VAR5) return;
if (VAR7->VAR10) return;


if (VAR7->VAR11 == NULL) {
VAR7->VAR11 = FUN2(VAR12);
if (!VAR7->VAR11) goto VAR13; 
VAR7->VAR14 = 0;
}

int16_t VAR15 = 0;
do {
if (VAR7->VAR14 == VAR12) goto VAR13; 


uint16_t VAR16 = VAR12 - VAR7->VAR14;
if (VAR16 > VAR3) VAR16 = VAR3;
FUN3(VAR7->VAR11 + VAR7->VAR14, VAR2, VAR16);
VAR2 += VAR16;
VAR3 -= VAR16;
VAR7->VAR14 += VAR16;



if (VAR7->VAR17 < 0 && VAR7->VAR14 > 0) {

VAR15 = FUN4(VAR7);

if (VAR15 > 0) {
FUN5(VAR7->VAR11, VAR7->VAR11 + VAR15, VAR7->VAR14-VAR15);
VAR7->VAR17 = 0;
VAR7->VAR14 -= VAR15;


if (VAR7->VAR18 == 0) {
VAR7->VAR14 = 0;
if (VAR7->VAR11) FUN6(VAR7->VAR11);
VAR7->VAR11 = NULL;
(*VAR7->VAR19)(VAR7);
return;
}
}

} else if (VAR7->VAR17 >= 0 && VAR7->VAR14 > 0 && VAR7->VAR19) {

VAR15 = (*VAR7->VAR19)(VAR7);
if (VAR15 > 0) {
FUN5(VAR7->VAR11, VAR7->VAR11 + VAR15, VAR7->VAR14-VAR15);
VAR7->VAR17 += VAR15;
VAR7->VAR14 -= VAR15;
}

} else {
VAR15 = 0;
}




if (VAR15 < 0) {
VAR7->VAR10 = true;
return;
}
} while (VAR3 > 0 || VAR15 > 0);

return;

VAR13:
FUN7(VAR7);
}