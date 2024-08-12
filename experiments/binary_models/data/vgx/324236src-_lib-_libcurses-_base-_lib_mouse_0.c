static bool
FUN1(VAR1 *VAR2)

{
int VAR3;
bool VAR4 = VAR5;
VAR6 *VAR7 = VAR2->VAR8;

FUN2(VAR9, (""));

if (VAR2->VAR10 == VAR11) {
unsigned char VAR12[4];
mmask_t VAR13;
size_t VAR14;
int VAR15;


for (VAR14 = 0; VAR14 < 3; VAR14 += (VAR16) VAR15) {


VAR15 = read(FUN3(VAR2) >= 0 ? FUN3(VAR2) : VAR2->VAR17, &VAR12, 3);
VAR15 = read(VAR2->VAR17, VAR12 + VAR14, 3 - VAR14);
if (VAR15 == -1)
break;
}
VAR12[3] = '';

FUN2(VAR18,
("", VAR12));


VAR7->VAR19 = VAR20;


VAR7->VAR21 = 0;
VAR13 = FUN4(VAR7)->VAR21;

VAR7->VAR21 = FUN5(VAR22); \
if (VAR12[0] & 0x40) \
VAR7->VAR21 = FUN6(VAR22)
VAR7->VAR21 = (VAR23) (VAR13 & FUN5(VAR22) \
? VAR24 \
: FUN5(VAR22))

switch (VAR12[0] & 0x3) {
case 0x0:
if (VAR12[0] & 64)
VAR7->VAR21 = FUN5(4);
else
FUN7(1);
break;

case 0x1:
if (VAR12[0] & 64)
VAR7->VAR21 = FUN5(5);
else
FUN7(2);
break;

case 0x2:
FUN7(3);
break;

case 0x3:

if (VAR13 & (VAR25 | VAR26)) {
VAR7->VAR21 = VAR26;
for (VAR3 = 1; VAR3 <= VAR27; ++VAR3) {
if (!(VAR13 & FUN5(VAR3)))
VAR7->VAR21 &= ~FUN6(VAR3);
}
} else {

VAR7->VAR21 = VAR24;
}
break;
}
VAR4 = (VAR7->VAR21 & VAR24) ? VAR28 : VAR5;

if (VAR12[0] & 4) {
VAR7->VAR21 |= VAR29;
}
if (VAR12[0] & 8) {
VAR7->VAR21 |= VAR30;
}
if (VAR12[0] & 16) {
VAR7->VAR21 |= VAR31;
}

VAR7->VAR32 = (VAR12[1] - '') - 1;
VAR7->VAR33 = (VAR12[2] - '') - 1;
FUN2(VAR9,
("",
FUN8(VAR2, VAR7),
(long) FUN9(VAR2, VAR7)));


VAR2->VAR8 = FUN10(VAR7);
return (VAR28);
}

return (VAR4);
}