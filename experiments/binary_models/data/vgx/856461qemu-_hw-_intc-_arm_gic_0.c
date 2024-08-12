static void FUN1(void *VAR1, hwaddr VAR2,
uint32_t VAR3, MemTxAttrs VAR4)
{
VAR5 *VAR6 = (VAR5 *)VAR1;
int VAR7;
int VAR8;
int VAR9;

VAR9 = FUN2(VAR6);
if (VAR2 < 0x100) {
if (VAR2 == 0) {
if (VAR6->VAR10 && !VAR4.VAR11) {

VAR6->VAR12 = FUN3(VAR6->VAR12, 1, 1, VAR3);
} else if (FUN4(VAR6)) {
VAR6->VAR12 = VAR3 & (VAR13 | VAR14);
} else {
VAR6->VAR12 = VAR3 & VAR13;
}
FUN5("",
VAR6->VAR12 & VAR13 ? "" : "",
VAR6->VAR12 & VAR14 ? "" : "");
} else if (VAR2 < 4) {

} else if (VAR2 >= 0x80) {

if (!(VAR6->VAR10 && !VAR4.VAR11) && FUN4(VAR6)) {

VAR7 = (VAR2 - 0x80) * 8;
if (VAR7 >= VAR6->VAR15) {
goto VAR16;
}
for (VAR8 = 0; VAR8 < 8; VAR8++) {

int VAR17 = (VAR7 < VAR18) ? (1 << VAR9) : VAR19;
if (VAR3 & (1 << VAR8)) {

FUN6(VAR7 + VAR8, VAR17);
} else {

FUN7(VAR7 + VAR8, VAR17);
}
}
}
} else {
goto VAR16;
}
} else if (VAR2 < 0x180) {

VAR7 = (VAR2 - 0x100) * 8;
if (VAR7 >= VAR6->VAR15)
goto VAR16;
if (VAR7 < VAR20) {
VAR3 = 0xff;
}

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR3 & (1 << VAR8)) {
int VAR21 =
(VAR7 < VAR18) ? (1 << VAR9)
: FUN8(VAR7 + VAR8);
int VAR17 = (VAR7 < VAR18) ? (1 << VAR9) : VAR19;

if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

if (!FUN10(VAR7 + VAR8, VAR17)) {
FUN5("", VAR7 + VAR8);
FUN11(VAR7 + VAR8);
}
FUN12(VAR7 + VAR8, VAR17);

if (FUN13(VAR7 + VAR8, VAR21)
&& !FUN14(VAR7 + VAR8)) {
FUN5("", VAR7 + VAR8, VAR21);
FUN15(VAR7 + VAR8, VAR21);
}
}
}
} else if (VAR2 < 0x200) {

VAR7 = (VAR2 - 0x180) * 8;
if (VAR7 >= VAR6->VAR15)
goto VAR16;
if (VAR7 < VAR20) {
VAR3 = 0;
}

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR3 & (1 << VAR8)) {
int VAR17 = (VAR7 < VAR18) ? (1 << VAR9) : VAR19;

if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

if (FUN10(VAR7 + VAR8, VAR17)) {
FUN5("", VAR7 + VAR8);
FUN16(VAR7 + VAR8);
}
FUN17(VAR7 + VAR8, VAR17);
}
}
} else if (VAR2 < 0x280) {

VAR7 = (VAR2 - 0x200) * 8;
if (VAR7 >= VAR6->VAR15)
goto VAR16;
if (VAR7 < VAR20) {
VAR3 = 0;
}

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR3 & (1 << VAR8)) {
if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

FUN15(VAR7 + VAR8, FUN8(VAR7 + VAR8));
}
}
} else if (VAR2 < 0x300) {

VAR7 = (VAR2 - 0x280) * 8;
if (VAR7 >= VAR6->VAR15)
goto VAR16;
if (VAR7 < VAR20) {
VAR3 = 0;
}

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}


if (VAR3 & (1 << VAR8)) {
FUN18(VAR7 + VAR8, VAR19);
}
}
} else if (VAR2 < 0x380) {

if (VAR6->VAR22 != 2) {
goto VAR16;
}

VAR7 = (VAR2 - 0x300) * 8;
if (VAR7 >= VAR6->VAR15) {
goto VAR16;
}


int VAR17 = VAR7 < VAR18 ? (1 << VAR9) : VAR19;

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

if (VAR3 & (1 << VAR8)) {
FUN19(VAR7 + VAR8, VAR17);
}
}
} else if (VAR2 < 0x400) {

if (VAR6->VAR22 != 2) {
goto VAR16;
}

VAR7 = (VAR2 - 0x380) * 8;
if (VAR7 >= VAR6->VAR15) {
goto VAR16;
}


int VAR17 = VAR7 < VAR18 ? (1 << VAR9) : VAR19;

for (VAR8 = 0; VAR8 < 8; VAR8++) {
if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

if (VAR3 & (1 << VAR8)) {
FUN20(VAR7 + VAR8, VAR17);
}
}
} else if (VAR2 < 0x800) {

VAR7 = (VAR2 - 0x400);
if (VAR7 >= VAR6->VAR15)
goto VAR16;
FUN21(VAR6, VAR9, VAR7, VAR3, VAR4);
} else if (VAR2 < 0xc00) {

if (VAR6->VAR23 != 1 || VAR6->VAR22 == VAR24) {
VAR7 = (VAR2 - 0x800);
if (VAR7 >= VAR6->VAR15) {
goto VAR16;
}
if (VAR7 < 29 && VAR6->VAR22 == VAR24) {
VAR3 = 0;
} else if (VAR7 < VAR18) {
VAR3 = VAR19;
}
VAR6->VAR25[VAR7] = VAR3 & VAR19;
}
} else if (VAR2 < 0xf00) {

VAR7 = (VAR2 - 0xc00) * 4;
if (VAR7 >= VAR6->VAR15)
goto VAR16;
if (VAR7 < VAR20)
VAR3 |= 0xaa;
for (VAR8 = 0; VAR8 < 4; VAR8++) {
if (VAR6->VAR10 && !VAR4.VAR11 &&
!FUN9(VAR7 + VAR8, 1 << VAR9)) {
continue; 
}

if (VAR6->VAR22 == VAR24) {
if (VAR3 & (1 << (VAR8 * 2))) {
FUN22(VAR7 + VAR8);
} else {
FUN23(VAR7 + VAR8);
}
}
if (VAR3 & (2 << (VAR8 * 2))) {
FUN24(VAR7 + VAR8);
} else {
FUN25(VAR7 + VAR8);
}
}
} else if (VAR2 < 0xf10) {

goto VAR16;
} else if (VAR2 < 0xf20) {

if (VAR6->VAR22 == VAR24) {
goto VAR16;
}
VAR7 = (VAR2 - 0xf10);

if (!VAR6->VAR10 || VAR4.VAR11 ||
FUN9(VAR7, 1 << VAR9)) {
VAR6->VAR26[VAR7][VAR9] &= ~VAR3;
if (VAR6->VAR26[VAR7][VAR9] == 0) {
FUN18(VAR7, 1 << VAR9);
}
}
} else if (VAR2 < 0xf30) {

if (VAR6->VAR22 == VAR24) {
goto VAR16;
}
VAR7 = (VAR2 - 0xf20);

if (!VAR6->VAR10 || VAR4.VAR11 ||
FUN9(VAR7, 1 << VAR9)) {
FUN15(VAR7, 1 << VAR9);
VAR6->VAR26[VAR7][VAR9] |= VAR3;
}
} else {
goto VAR16;
}
FUN26(VAR6);
return;
VAR16:
FUN27(VAR27,
"", (int)VAR2);
}