extern unsigned int FUN1(VAR1 *, int, unsigned int);








int VAR2 = 0;

unsigned int
FUN2(VAR3 *VAR4, int VAR5, uint_t VAR6)
{
VAR1 *VAR7;
ssize_t	VAR8;
int VAR9;
VAR3 *VAR10;
VAR11 *VAR12 = VAR4->VAR13;
ushort_t VAR14 = 0;

if (VAR2)
return (0xffff);
FUN3(VAR12);

if (VAR4->VAR15 == NULL) {

VAR7 = (VAR1 *)(VAR4->VAR16 + VAR5);
if (VAR12->VAR17 & VAR18) {

if ((VAR5 > VAR12->VAR19) ||
VAR4->VAR20 != (VAR21 *)(VAR4->VAR16 +
VAR12->VAR22)) {

VAR12->VAR17 &= ~VAR18;
goto VAR23;
}
FUN3(VAR4->VAR20 == (VAR4->VAR16 + VAR12->VAR22));
VAR14 = *(VAR1 *)VAR12->VAR24.VAR25;
if ((VAR8 = VAR12->VAR19 - VAR5) < 0)
VAR8 = 0;
if (FUN4(VAR8))
goto VAR26;
if (VAR8 && VAR12->VAR19 != VAR12->VAR27 &&
VAR12->VAR22 != VAR12->VAR27) {

VAR6 = FUN1(VAR7, VAR8 >> 1, VAR6);
VAR7 = (VAR1 *)(VAR4->VAR16 +
VAR12->VAR27);
if (FUN4(VAR7)) {
VAR10 = VAR4;
goto VAR28;
}
VAR8 = VAR12->VAR22 - VAR12->VAR27;
} else if (VAR12->VAR22 != VAR12->VAR27) {

if (VAR8)
VAR8 += VAR12->VAR22
- VAR12->VAR27;
else {
VAR7 = (VAR1 *)(VAR4->VAR16 +
VAR12->VAR27);
if (FUN4(VAR7))
goto VAR26;
VAR8 = VAR12->VAR22
- VAR12->VAR27;
}
} else if (VAR8 == 0)
return (VAR14);

if (FUN4(VAR8))
goto VAR26;
VAR6 += VAR14;
} else {

VAR23:
VAR8 = VAR4->VAR20 - (VAR21 *)VAR7;
if (FUN4(VAR8))
goto VAR26;
}
FUN3(FUN5(VAR7));
FUN3(FUN5(VAR8));
return (FUN1(VAR7, VAR8 >> 1, VAR6));
}
if (VAR12->VAR17 & VAR18)
VAR14 = *(VAR1 *)VAR12->VAR24.VAR25;
VAR26:
VAR10 = 0;
VAR28:
VAR8 = 0;
VAR9 = 0;
for (; ; ) {

VAR7 = (VAR1 *)(VAR4->VAR16 + VAR5);
if (VAR10) {

VAR10 = 0;
VAR8 = 0;
goto VAR29;
} else if (VAR12->VAR17 & VAR18) {

if ((VAR5 > VAR12->VAR19) ||
VAR4->VAR20 != (VAR21 *)(VAR4->VAR16 +
VAR12->VAR22)) {

VAR12->VAR17 &= ~VAR18;
goto VAR30;
}
FUN3(VAR4->VAR20 == (VAR4->VAR16 + VAR12->VAR22));
if ((VAR8 = VAR12->VAR19 - VAR5) < 0)
VAR8 = 0;
if (VAR8 && VAR12->VAR19 != VAR12->VAR27) {

VAR10 = VAR4;
} else {

int VAR31;
VAR29:
VAR31 = FUN4(VAR12->VAR27 -
VAR12->VAR19);
if (VAR9 == -1) {

VAR6 += ((VAR14 << 8) & 0xffff)
| (VAR14 >> 8);
if (VAR31)
VAR9 = 0;
} else {
VAR6 += VAR14;
if (VAR31)
VAR9 = -1;
}
if (VAR12->VAR22 != VAR12->VAR27) {

if (VAR8)
VAR8 += VAR12->VAR22
- VAR12->VAR27;
else {
VAR7 = (VAR1 *)(VAR4->VAR16 +
VAR12->VAR27);
VAR8 = VAR12->VAR22 -
VAR12->VAR27;
}
}
}
} else {

VAR30:
VAR8 = VAR4->VAR20 - (VAR21 *)VAR7;
}

VAR4 = VAR4->VAR15;
if (VAR8 > 0 && VAR9 == -1) {

VAR6 += *(VAR21 *)VAR7 << 8;
VAR6 += *(VAR21 *)VAR7;
VAR7 = (VAR1 *)((char *)VAR7 + 1);
VAR8--;
VAR9 = 0;
}
if (VAR8 > 0) {
if (FUN5(VAR7)) {
VAR6 = FUN1(VAR7, VAR8>>1, VAR6);
VAR7 += VAR8>>1;

if (FUN4(VAR8)) {
VAR6 += *(VAR21 *)VAR7;
VAR6 += *(VAR21 *)VAR7 << 8;
VAR9 = -1;
}
} else {
ushort_t VAR32;
VAR6 += *(VAR21 *)VAR7;
VAR6 += *(VAR21 *)VAR7 << 8;
VAR8--;
VAR7 = (VAR1 *)(1 + (VAR33)VAR7);


VAR32 = FUN1(VAR7, VAR8>>1, 0);
VAR6 += ((VAR32 << 8) & 0xffff) | (VAR32 >> 8);
VAR7 += VAR8>>1;

if (FUN4(VAR8)) {
VAR6 += *(VAR21 *)VAR7 << 8;
VAR6 += *(VAR21 *)VAR7;
}
else
VAR9 = -1;
}
}

VAR5 = 0;
if (! VAR10) {
for (; ; ) {
if (VAR4 == 0) {
goto VAR34;
}
if (FUN6(VAR4))
break;
VAR4 = VAR4->VAR15;
}
VAR12 = VAR4->VAR13;
if (VAR12->VAR17 & VAR18)
VAR14 = *(VAR1 *)VAR12->VAR24.VAR25;
} else
VAR4 = VAR10;
}
VAR34:

VAR6 = (VAR6 & 0xFFFF) + (VAR6 >> 16);
VAR6 = (VAR6 & 0xFFFF) + (VAR6 >> 16);
FUN7(VAR35, VAR36,
"", "", 1, VAR6);
return (VAR6);
}