char *
FUN1(struct VAR1 *VAR2, u_int VAR3, u_int VAR4, u_int VAR5,
struct VAR6 **VAR7, int VAR8, struct VAR9 *VAR10)
{
struct grid_cell	 VAR11;
static struct grid_cell	 VAR12;
const char		*VAR13;
char			*VAR14, VAR15[8192];
size_t			 VAR16, VAR17, VAR18, VAR19;
u_int			 VAR20, VAR21 = 0, VAR22;
const struct VAR23	*VAR24;

if (VAR7 != NULL && *VAR7 == NULL) {
memcpy(&VAR12, &VAR25, sizeof VAR12);
*VAR7 = &VAR12;
}

VAR16 = 128;
VAR14 = xmalloc(VAR16);
VAR17 = 0;

VAR24 = FUN2(VAR2, VAR4);
if (VAR8 & VAR26)
VAR22 = VAR24->VAR27;
else
VAR22 = VAR24->VAR28;
for (VAR20 = VAR3; VAR20 < VAR3 + VAR5; VAR20++) {
if (VAR24 == NULL || VAR20 >= VAR22)
break;
FUN3(VAR2, VAR20, VAR4, &VAR11);
if (VAR11.VAR8 & VAR29)
continue;

if (VAR8 & VAR30) {
FUN4(*VAR7, &VAR11, VAR15, sizeof VAR15,
VAR8, VAR10, &VAR21);
VAR19 = strlen(VAR15);
memcpy(*VAR7, &VAR11, sizeof **VAR7);
} else
VAR19 = 0;

VAR13 = VAR11.VAR13.VAR13;
VAR18 = VAR11.VAR13.VAR18;
if ((VAR8 & VAR31) &&
VAR18 == 1 &&
*VAR13 == '') {
VAR13 = "";
VAR18 = 2;
}

while (VAR16 < VAR17 + VAR18 + VAR19 + 1) {
VAR14 = FUN5(VAR14, 2, VAR16);
VAR16 *= 2;
}

if (VAR19 != 0) {
memcpy(VAR14 + VAR17, VAR15, VAR19);
VAR17 += VAR19;
}
memcpy(VAR14 + VAR17, VAR13, VAR18);
VAR17 += VAR18;
}

if (VAR21) {
FUN6(VAR15, sizeof VAR15, "", "",
VAR8);
VAR19 = strlen(VAR15);
while (VAR16 < VAR17 + VAR18 + VAR19 + 1) {
VAR14 = FUN5(VAR14, 2, VAR16);
VAR16 *= 2;
}
memcpy(VAR14 + VAR17, VAR15, VAR19);
VAR17 += VAR19;
}

if (VAR8 & VAR32) {
while (VAR17 > 0 && VAR14[VAR17 - 1] == '')
VAR17--;
}
VAR14[VAR17] = '';

return (VAR14);
}