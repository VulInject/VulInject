VAR1 FUN1(jsonsl_t VAR2,
struct VAR3 *VAR4,
const char *VAR5,
size_t VAR6,
VAR7 *VAR8)
{
struct VAR3 *VAR9;
jsonsl_jpr_t VAR10 = NULL;


VAR11 *VAR12, *VAR13;
size_t VAR14, VAR15, VAR16;

if (!VAR2->VAR17) {
*VAR8 = VAR18;
return NULL;
}

VAR13 = VAR2->VAR17 + (VAR2->VAR19 * (VAR4->VAR20-1));
VAR12 = VAR13 + VAR2->VAR19;


if (*VAR13 == 0) {
*VAR12 = 0;
*VAR8 = VAR18;
return NULL;
}

VAR9 = VAR2->VAR21 + VAR4->VAR20 - 1;

if (VAR9->VAR22 == VAR23) {
VAR6 = (VAR11) VAR9->VAR24;
}

*VAR12 = 0;
VAR16 = 0;
memset(VAR12, 0, sizeof(int) * VAR2->VAR19);

for (VAR15 = 0; VAR15 <  VAR2->VAR19; VAR15++) {
VAR14 = VAR13[VAR15];
if (VAR14) {
jsonsl_jpr_t VAR25 = VAR2->VAR26[VAR14-1];
*VAR8 = FUN2(VAR25,
VAR9->VAR22,
VAR9->VAR20,
VAR5, VAR6);
if (*VAR8 == VAR27) {
VAR10 = VAR25;
*VAR12 = 0;
return VAR10;
} else if (*VAR8 == VAR28) {
VAR12[VAR16] = VAR15+1;
VAR16++;
}
} else {
break;
}
}
if (!*VAR12) {
*VAR8 = VAR18;
}
return NULL;
}