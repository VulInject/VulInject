static int FUN1(struct VAR1 *VAR2, const void *VAR3,
size_t VAR4)
{
void VAR5 *VAR6 = VAR2->VAR7;
const VAR8 *VAR9 = VAR3;
size_t VAR10, VAR11, VAR12;
unsigned long VAR13, VAR14, VAR15, VAR16, VAR17;
unsigned int VAR18, VAR19;
u16 VAR20, VAR21;

VAR21 = (VAR2->VAR22 == VAR23) ? VAR24 :
VAR25;

switch (VAR2->VAR22) {
case VAR23:
case VAR26:
case VAR27:
VAR13 = VAR28;
VAR14 = VAR29;
VAR15 = VAR30;
VAR16 = VAR31;
VAR17 = VAR32;
break;
default:
VAR13 = VAR33;
VAR21 = VAR34;
VAR14 = VAR35;
VAR15 = VAR36;
VAR16 = VAR37;
VAR17 = VAR38;
break;
}

VAR20 = 0;
VAR10 = VAR4 >> 1;
for (VAR18 = 0; VAR18 < VAR10; VAR18++)
VAR20 += FUN2(VAR9[VAR18]);
VAR19 = 0;
do {
VAR10 = VAR4 >> 1;
VAR12 = 0;
while (VAR10) {
VAR11 = (VAR10 > 2048) ? 2048 : VAR10;
VAR10 -= VAR11;
FUN3(VAR6 + VAR14, VAR3 + VAR12, VAR11 << 1);
VAR12 += VAR11 << 1;

FUN4(VAR11, VAR6 + VAR15);
FUN4(0, VAR6 + VAR13);
for (VAR18 = 0; VAR18 < 100; VAR18++) {
if (FUN5(VAR6 + VAR13) == VAR21)
break;
FUN6(10);
}
if (FUN5(VAR6 + VAR13) != VAR21)
return -VAR39;
}
FUN4(0, VAR6 + VAR15);
FUN4(VAR20, VAR6 + VAR16);
FUN4(0, VAR6 + VAR13);
for (VAR18 = 0; VAR18 < 100; VAR18++) {
if (FUN5(VAR6 + VAR13) == VAR21)
break;
FUN6(10);
}
VAR19++;
} while ((FUN7(VAR6 + VAR17) != 1) && (VAR19 < 3));
if (FUN7(VAR6 + VAR17) != 1)
return -VAR39;

FUN4(0, VAR6 + VAR13);
for (VAR18 = 0; VAR18 < 600; VAR18++) {
if (FUN5(VAR6 + VAR40) == VAR41)
break;
FUN6(10);
}
if (FUN5(VAR6 + VAR40) != VAR41)
return -VAR39;

if (FUN8(VAR2)) {
if (VAR2->VAR42 == VAR43) {	
FUN4(0x3800, VAR6 + VAR44);
FUN4(0x3900, VAR6 + VAR45);
FUN4(28499, VAR6 + VAR46);
} else {
FUN4(0x3200, VAR6 + VAR44);
FUN4(0x3400, VAR6 + VAR45);
FUN4(19999, VAR6 + VAR46);
}
}
FUN4(1, VAR6 + VAR47);
FUN4(0, VAR6 + VAR40);
for (VAR18 = 0; VAR18 < 500; VAR18++) {
if (FUN5(VAR6 + VAR40) == VAR41)
break;
FUN6(10);
}
if (FUN5(VAR6 + VAR40) != VAR41)
return -VAR39;

if (FUN8(VAR2)) {
VAR12 = FUN5(VAR6 + VAR48);
if (VAR12 <= 0)
return -VAR39;
VAR2->VAR49 = VAR12 * 8;
FUN4(VAR12, VAR6 + VAR50);
FUN4(0, VAR6 + VAR40);
for (VAR18 = 0; VAR18 < 600; VAR18++) {
if (FUN5(VAR6 + VAR40) == VAR41)
break;
FUN6(10);
}
if (FUN5(VAR6 + VAR40) != VAR41)
return -VAR39;
}
VAR2->VAR51 = VAR6 + VAR52;
VAR2->VAR53 = VAR6 + VAR54;
VAR2->VAR55 = VAR6 + VAR56;

return 0;
}