static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6)
{
const VAR7 * const *VAR8 = (const VAR7 * const *)VAR4->VAR9;
const int VAR10 = VAR4->VAR11[VAR2->VAR12];
const int VAR13 = VAR4->VAR11[VAR2->VAR14];
const int VAR15 = VAR4->VAR11[VAR6];
const int VAR16 = VAR5->VAR11[0];
const int VAR17 = VAR2->VAR17;
const int VAR18 = VAR2->VAR12, VAR19 = VAR2->VAR14;
const int VAR20 = VAR2->VAR21[VAR19];
const int VAR22 = VAR2->VAR23[VAR18];
const VAR7 *VAR24 = VAR8[VAR18];
const VAR7 *VAR25 = VAR8[VAR19];
const VAR7 *VAR26 = VAR8[VAR6];
const int VAR27 = VAR2->VAR27;
const int VAR28 = VAR2->VAR28;
VAR7 **VAR29 = VAR5->VAR9;
VAR7 *VAR30 = VAR29[VAR18];
VAR7 *VAR31 = VAR29[VAR19];
VAR7 *VAR32 = VAR29[VAR6];
VAR7 *VAR33 = VAR29[1];
VAR7 *VAR34 = VAR29[2];
const int VAR35 = VAR2->VAR35;
const int VAR36 = VAR2->VAR36;
int VAR37, VAR38, VAR39;

for (VAR39 = 0; VAR39 < 4 && VAR29[VAR39]; VAR39++)
for (VAR37 = 0; VAR37 < VAR5->VAR40 ; VAR37++)
memset(VAR29[VAR39] + VAR37 * VAR5->VAR11[VAR39],
(VAR2->VAR41 == VAR42 || VAR2->VAR41 == VAR43) && VAR39 == VAR2->VAR6 ? 0 : VAR2->VAR44[VAR39], VAR5->VAR45);

switch (VAR2->VAR41) {
case VAR43:
case VAR42:
case VAR46:
for (VAR37 = 0; VAR37 < VAR20; VAR37++) {
const int VAR47 = VAR37 * VAR10;
const int VAR48 = VAR37 * VAR13;
const int VAR49 = VAR37 * VAR15;
for (VAR38 = 0; VAR38 < VAR22; VAR38++) {
const int VAR12 = VAR24[VAR47 + VAR38];
const int VAR14 = VAR25[VAR48 + VAR38];
const int VAR50 = VAR26[VAR49 + VAR38];
const int VAR51 = VAR14 * VAR16 + VAR12;

if (VAR50 < VAR35 || VAR50 > VAR36)
continue;

VAR32[VAR51] = FUN2(VAR32[VAR51] + VAR17, 255);
}
}
break;
case VAR52:
if (VAR2->VAR53) {
for (VAR37 = 0; VAR37 < VAR20; VAR37++) {
const int VAR54 = VAR37 * VAR10;
const int VAR55 = VAR37 * VAR13;
const int VAR49 = VAR37 * VAR15;
for (VAR38 = 0; VAR38 < VAR22; VAR38++) {
const int VAR12 = VAR24[VAR54 + VAR38];
const int VAR14 = VAR25[VAR55 + VAR38];
const int VAR50 = VAR26[VAR49 + VAR38];
const int VAR51 = VAR14 * VAR16 + VAR12;

if (VAR50 < VAR35 || VAR50 > VAR36)
continue;

if (!VAR32[VAR51])
VAR32[VAR51] = FUN3(128 - VAR12) + FUN3(128 - VAR14);
VAR30[VAR51] = VAR12;
VAR31[VAR51] = VAR14;
}
}
} else {
for (VAR37 = 0; VAR37 < VAR20; VAR37++) {
const int VAR54 = VAR37 * VAR10;
const int VAR55 = VAR37 * VAR13;
const int VAR49 = VAR37 * VAR15;
for (VAR38 = 0; VAR38 < VAR22; VAR38++) {
const int VAR12 = VAR24[VAR54 + VAR38];
const int VAR14 = VAR25[VAR55 + VAR38];
const int VAR50 = VAR26[VAR49 + VAR38];
const int VAR51 = VAR14 * VAR16 + VAR12;

if (VAR50 < VAR35 || VAR50 > VAR36)
continue;

if (!VAR32[VAR51])
VAR32[VAR51] = FUN2(VAR12 + VAR14, 255);
VAR30[VAR51] = VAR12;
VAR31[VAR51] = VAR14;
}
}
}
break;
case VAR56:
for (VAR37 = 0; VAR37 < VAR20; VAR37++) {
const int VAR54 = VAR37 * VAR10;
const int VAR55 = VAR37 * VAR13;
const int VAR49 = VAR37 * VAR15;
for (VAR38 = 0; VAR38 < VAR22; VAR38++) {
const int VAR12 = VAR24[VAR54 + VAR38];
const int VAR14 = VAR25[VAR55 + VAR38];
const int VAR50 = VAR26[VAR49 + VAR38];
const int VAR51 = VAR14 * VAR16 + VAR12;

if (VAR50 < VAR35 || VAR50 > VAR36)
continue;

VAR32[VAR51] = FUN2(255, VAR32[VAR51] + VAR17);
VAR30[VAR51] = VAR12;
VAR31[VAR51] = VAR14;
}
}
break;
case VAR57:
for (VAR37 = 0; VAR37 < VAR4->VAR40; VAR37++) {
const int VAR47 = (VAR37 >> VAR28) * VAR10;
const int VAR48 = (VAR37 >> VAR28) * VAR13;
const int VAR49 = VAR37 * VAR15;
for (VAR38 = 0; VAR38 < VAR4->VAR45; VAR38++) {
const int VAR12 = VAR24[VAR47 + (VAR38 >> VAR27)];
const int VAR14 = VAR25[VAR48 + (VAR38 >> VAR27)];
const int VAR50 = VAR26[VAR49 + VAR38];
const int VAR51 = VAR14 * VAR16 + VAR12;

if (VAR50 < VAR35 || VAR50 > VAR36)
continue;

VAR32[VAR51] = FUN4(VAR50, VAR32[VAR51]);
VAR30[VAR51] = VAR12;
VAR31[VAR51] = VAR14;
}
}
break;
default:
FUN5(0);
}

FUN6(VAR2, VAR5);

if (VAR29[3]) {
for (VAR37 = 0; VAR37 < VAR5->VAR40; VAR37++) {
for (VAR38 = 0; VAR38 < VAR5->VAR45; VAR38++) {
int VAR51 = VAR37 * VAR16 + VAR38;

if (VAR32[VAR51])
VAR29[3][VAR51] = 255;
}
}
}

if (VAR2->VAR41 == VAR46 && VAR2->VAR53 &&
(VAR2->VAR58[0] != 128 || VAR2->VAR58[1] != 128)) {
for (VAR37 = 0; VAR37 < VAR5->VAR40; VAR37++) {
for (VAR38 = 0; VAR38 < VAR5->VAR45; VAR38++) {
const int VAR51 = VAR37 * VAR16 + VAR38;
if (VAR32[VAR51]) {
VAR33[VAR51] = VAR2->VAR58[0];
VAR34[VAR51] = VAR2->VAR58[1];
}
}
}
} else if (VAR2->VAR41 == VAR46 && !VAR2->VAR53) {
for (VAR37 = 0; VAR37 < VAR5->VAR40; VAR37++) {
for (VAR38 = 0; VAR38 < VAR5->VAR45; VAR38++) {
const int VAR51 = VAR37 * VAR16 + VAR38;
if (VAR32[VAR51]) {
VAR30[VAR51] = FUN7(VAR32[VAR51] + VAR32[VAR51] * VAR2->VAR59[0]);
VAR31[VAR51] = FUN7(VAR32[VAR51] + VAR32[VAR51] * VAR2->VAR59[1]);
}
}
}
} else if (VAR2->VAR41 == VAR42) {
for (VAR37 = 0; VAR37 < VAR5->VAR40; VAR37++) {
for (VAR38 = 0; VAR38 < VAR5->VAR45; VAR38++) {
if (!VAR32[VAR37 * VAR5->VAR11[VAR6] + VAR38]) {
VAR30[VAR37 * VAR5->VAR11[VAR18] + VAR38] = VAR38;
VAR31[VAR37 * VAR5->VAR11[VAR19] + VAR38] = VAR37;
VAR32[VAR37 * VAR5->VAR11[VAR6] + VAR38] = 128;
}
}
}
} else if (VAR2->VAR41 == VAR43) {
for (VAR37 = 0; VAR37 < VAR5->VAR40; VAR37++) {
for (VAR38 = 0; VAR38 < VAR5->VAR45; VAR38++) {
if (!VAR32[VAR37 * VAR5->VAR11[VAR6] + VAR38]) {
VAR30[VAR37 * VAR5->VAR11[VAR18] + VAR38] = VAR38;
VAR31[VAR37 * VAR5->VAR11[VAR19] + VAR38] = VAR37;
VAR32[VAR37 * VAR5->VAR11[VAR6] + VAR38] = 128 * VAR60 - FUN8(VAR37 - 128, VAR38 - 128);
}
}
}
}
}