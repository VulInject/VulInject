static VAR1 *FUN1(const VAR2* VAR3) {
ut32 VAR4 = 0;
VAR5 *VAR6 = NULL;
VAR1 *VAR7 = NULL;
if (!VAR3 || !(VAR7 = malloc (sizeof (VAR1)))) {
return NULL;
}
memset (VAR7, 0, sizeof (VAR1));
ut32 VAR8 = sizeof (VAR9) / sizeof (VAR5);
ut16 VAR10 = VAR3[1] << 8;
VAR10 |= VAR3[0];
VAR7->VAR11 = VAR10;
VAR7->VAR12 = VAR13;
if (VAR10 == 0) {
VAR6 = &VAR9[0];
} else {
for (VAR4 = 1; VAR4 < VAR8; VAR4++) {
VAR6 = &VAR9[VAR4];
ut16 VAR14 = VAR10 & VAR6->VAR15;

if (VAR14 == VAR10) {
break;
}
}
if (VAR4 >= VAR8) {
VAR7->VAR16 = "";
return VAR7;
}
}

if (!FUN2 (VAR6->VAR16, "", 3) && (VAR10 & 0xf00) == 0xf00) {

if (VAR4 > 0 && (VAR4 + 1) < VAR17) {
VAR6 = &VAR9[VAR4 + 1];
}
}
VAR7->VAR18 = VAR6->VAR18;
VAR7->VAR16 = VAR6->VAR16;
VAR7->VAR19 = VAR6->VAR19;
for (VAR4 = 0; VAR4 < VAR6->VAR19; VAR4++) {
VAR7->VAR20[VAR4].VAR21 = (VAR10 & VAR6->VAR20[VAR4].VAR15) >> VAR6->VAR20[VAR4].VAR22;
VAR7->VAR20[VAR4].VAR18 = VAR6->VAR20[VAR4].VAR18;
}
return VAR7;
}