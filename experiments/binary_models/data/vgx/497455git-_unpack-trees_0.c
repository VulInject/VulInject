static int FUN1(struct VAR1 *VAR2,
const char *VAR3, size_t VAR4)
{
int VAR5;
struct VAR6 *VAR7 = VAR2->VAR8;
struct VAR9 *VAR10 = VAR7->VAR11;
int VAR12 = VAR2->VAR13;

for (VAR5 = VAR7->VAR14; VAR5 < VAR10->VAR15; VAR5++) {
const struct VAR16 *VAR17 = VAR10->VAR18[VAR5];
const char *VAR19, *VAR20;
int VAR21, VAR22;

if (VAR17->VAR23 & VAR24) {

if (VAR5 == VAR7->VAR14)
++VAR7->VAR14;
continue;
}
if (!FUN2(VAR17, VAR2)) {

if (VAR2->VAR25) {
if (FUN3(VAR17->VAR26, VAR2->VAR25,
VAR2->VAR13) > 0)
break;
}
continue;
}
VAR19 = VAR17->VAR26 + VAR12;
VAR20 = strchr(VAR19, '');
if (VAR20)
VAR22 = VAR20 - VAR19;
else
VAR22 = FUN4(VAR17) - VAR12;
VAR21 = FUN5(VAR3, VAR4, VAR19, VAR22);

if (!VAR21)
return VAR20 ? -2 - VAR5 : VAR5;
if (0 < VAR21)
continue; 

if (VAR4 < VAR22 && !memcmp(VAR19, VAR3, VAR4) &&
VAR19[VAR4] < '')
continue; 
break;
}
return -1;
}