void	 FUN1(void *, VAR1, int *, int *, int *);
int	 FUN2(void *, VAR1);
VAR2 FUN3(void *, VAR1, int);
void	 FUN4(void *, VAR1, int, VAR2);
int	 FUN5(void *, struct VAR3 *);

int	 FUN6(struct VAR3 *, VAR4 *);
int	 FUN7(struct VAR3 *, VAR4 *);
int	 FUN8(struct VAR3 *, int,
VAR4 *);
const char *FUN9(void *, VAR4);
void	*FUN10(void *, VAR4, int,
struct VAR5 *VAR6, int (*)(void *), void *, char *);
void	 FUN11(void *, void *);

void
FUN12(struct VAR7 *VAR8, struct VAR7 *VAR9, void *VAR10)
{
struct VAR11 *VAR12 = (struct VAR11 *)VAR9;
struct VAR13 *VAR14 = VAR10;
uint32_t VAR15[2];
VAR16 *VAR17;
int VAR18, VAR19, VAR20, VAR21;
char VAR22[32];
int VAR23;

VAR12->VAR24 = VAR14->VAR25;
VAR12->VAR26 = VAR14->VAR27;
VAR12->VAR28 = VAR14->VAR29;

VAR12->VAR30 = FUN13(VAR12->VAR28, "",
VAR14->VAR31);
VAR12->VAR32 = FUN13(VAR12->VAR28, "",
VAR14->VAR33);
VAR12->VAR34 = VAR14->VAR31;
VAR12->VAR35 = VAR14->VAR33;

VAR21 = FUN14(VAR12->VAR28, "");
if (VAR21 <= 0 || (VAR21 % sizeof(VAR16)) ||
(VAR21 / sizeof(VAR16)) % (VAR12->VAR30 +
VAR12->VAR34 + VAR12->VAR32)) {
FUN15("");
return;
}

VAR17 = malloc(VAR21, VAR36, VAR37);
FUN16(VAR12->VAR28, "", VAR17,
VAR21);

VAR20 = (VAR21 / sizeof(VAR16)) /
(VAR12->VAR30 + VAR12->VAR34 + VAR12->VAR32);
VAR12->VAR38 = FUN17(VAR20,
sizeof(struct VAR39), VAR36, VAR37);
VAR12->VAR40 = VAR20;

for (VAR18 = 0, VAR19 = 0; VAR18 < VAR20; VAR18++) {
VAR12->VAR38[VAR18].VAR41 = VAR17[VAR19++];
VAR12->VAR38[VAR18].VAR42 = VAR17[VAR19++];
VAR12->VAR38[VAR18].VAR43 = VAR17[VAR19++];
VAR12->VAR38[VAR18].VAR44 = VAR17[VAR19++];
if (VAR12->VAR34 == 2) {
VAR12->VAR38[VAR18].VAR44 <<= 32;
VAR12->VAR38[VAR18].VAR44 |= VAR17[VAR19++];
}
VAR12->VAR38[VAR18].VAR45 = VAR17[VAR19++];
if (VAR12->VAR32 == 2) {
VAR12->VAR38[VAR18].VAR45 <<= 32;
VAR12->VAR38[VAR18].VAR45 |= VAR17[VAR19++];
}
}

free(VAR17, VAR36, VAR21);

FUN15("");


snprintf(VAR12->VAR46, sizeof(VAR12->VAR46),
"", VAR12->VAR47.VAR48);
snprintf(VAR12->VAR49, sizeof(VAR12->VAR49),
"", VAR12->VAR47.VAR48);
snprintf(VAR12->VAR50, sizeof(VAR12->VAR50),
"", VAR12->VAR47.VAR48);
VAR12->VAR51 = FUN18(VAR12->VAR46, 0, 255,
VAR52, NULL, 0, VAR53 | VAR54);
VAR12->VAR55 = FUN18(VAR12->VAR49, 0, 0xffffffff,
VAR52, NULL, 0, VAR53 | VAR54);
VAR12->VAR56 = FUN18(VAR12->VAR50, 0, (VAR57)-1,
VAR52, NULL, 0, VAR53 | VAR54);


if (FUN16(VAR12->VAR28, "", VAR15,
sizeof(VAR15)) != sizeof(VAR15) ||
VAR15[0] >= 32 || VAR15[1] >= 32) {
VAR15[0] = 0;
VAR15[1] = 31;
}
FUN19(VAR12->VAR51, VAR15[0],
VAR15[1] - VAR15[0] + 1, VAR53);


FUN19(VAR12->VAR56, VAR58[0],
VAR58[1], VAR59);
FUN19(VAR12->VAR55, VAR60[0],
VAR60[1], VAR59);

for (VAR23 = FUN20(VAR12->VAR28); VAR23 != 0; VAR23 = FUN21(VAR23)) {
if (FUN14(VAR23, "") <= 0)
continue;
FUN22(VAR23, "", VAR22, sizeof(VAR22));
if (strcmp(VAR22, "") == 0)
continue;
VAR12->VAR61++;
}

if (!VAR12->VAR61)
return;

VAR12->VAR62 = FUN17(VAR12->VAR61,
sizeof(struct VAR63), VAR52, VAR37);

VAR18 = 0;
for (VAR23 = FUN20(VAR12->VAR28); VAR23 != 0; VAR23 = FUN21(VAR23)) {
if (FUN14(VAR23, "") <= 0)
continue;
FUN22(VAR23, "", VAR22, sizeof(VAR22));
if (strcmp(VAR22, "") == 0)
continue;
FUN23(VAR12, &VAR12->VAR62[VAR18++], VAR23);
}
}