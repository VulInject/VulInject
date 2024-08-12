int
FUN1(int *VAR1, u_int VAR2, void *VAR3, VAR4 *VAR5, void *VAR6,
size_t VAR7, struct VAR8 *VAR9)
{
struct kmembuckets VAR10;
struct kmemstats VAR11;
int VAR12;
int VAR13, VAR14;

if (VAR2 != 2 && VAR1[0] != VAR15 &&
VAR1[0] != VAR16)
return (VAR17);		

switch (VAR1[0]) {
case VAR15:

if (VAR18 == 0) {
VAR18 = 1;
memset(VAR19, 0, sizeof(VAR19));
for (VAR14 = 0, VAR13 = VAR20; VAR13 < VAR20 + 16; VAR13++) {
snprintf(VAR19 + VAR14,
sizeof VAR19 - VAR14,
"", (VAR21)(1<<VAR13));
VAR14 += strlen(VAR19 + VAR14);
}

if (VAR14)
VAR19[VAR14 - 1] = '';
}
return (FUN2(VAR3, VAR5, VAR6, VAR19));

case VAR22:
FUN3(&VAR23);
memcpy(&VAR10, &VAR24[FUN4(VAR1[1])], sizeof(VAR10));
FUN5(&VAR23);
memset(&VAR10.VAR25, 0, sizeof(VAR10.VAR25));
return (FUN6(VAR3, VAR5, VAR6, &VAR10, sizeof(VAR10)));
case VAR26:
if ((VAR1[1] < 0) || (VAR1[1] >= VAR27))
return (VAR28);
FUN3(&VAR23);
memcpy(&VAR11, &VAR29[VAR1[1]], sizeof(VAR11));
FUN5(&VAR23);
return (FUN6(VAR3, VAR5, VAR6, &VAR11, sizeof(VAR11)));
return (VAR30);
case VAR16:
VAR12 = FUN7(&VAR31, VAR32|VAR33);
if (VAR12)
return (VAR12);
if (VAR34 == NULL) {
int VAR35;


for (VAR35 = 0, VAR13 = 0; VAR13 < VAR27; VAR13++) {
if (VAR36[VAR13])
VAR35 += strlen(VAR36[VAR13]);
VAR35++;
}
VAR34 = malloc(VAR35 + VAR27, VAR37,
VAR38|VAR39);
for (VAR14 = 0, VAR13 = 0; VAR13 < VAR27; VAR13++) {
snprintf(VAR34 + VAR14,
VAR35 + VAR27 - VAR14,
"", VAR36[VAR13] ? VAR36[VAR13] : "");
VAR14 += strlen(VAR34 + VAR14);
}

if (VAR14)
VAR34[VAR14 - 1] = '';


for (VAR13 = 0; VAR13 < VAR35; VAR13++)
if (VAR34[VAR13] == '')
VAR34[VAR13] = '';
}
FUN8(&VAR31);
return (FUN2(VAR3, VAR5, VAR6, VAR34));
return (VAR30);
default:
return (VAR30);
}

}