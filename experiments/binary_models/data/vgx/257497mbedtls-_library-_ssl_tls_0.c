int FUN1(VAR1 *VAR2,
const unsigned char *VAR3,
const unsigned char *VAR4)
{
const unsigned char *VAR5 = VAR3;
size_t VAR6 = 0;
const unsigned char *VAR7;
uint16_t VAR8;
uint32_t VAR9 = 0;

FUN2(VAR5, VAR4, 2);
VAR6 = FUN3(VAR5, 0);
VAR5 += 2;

memset(VAR2->VAR10->VAR11, 0,
sizeof(VAR2->VAR10->VAR11));

FUN2(VAR5, VAR4, VAR6);
VAR7 = VAR5 + VAR6;
while (VAR5 < VAR7) {
FUN2(VAR5, VAR7, 2);
VAR8 = FUN3(VAR5, 0);
VAR5 += 2;
FUN4(4, ("",
VAR8,
FUN5(VAR8)));
if (VAR2->VAR12 == VAR13 &&
(!(FUN6(VAR2, VAR8) &&
FUN7(VAR2, VAR8)))) {
continue;
}

FUN4(4, ("",
FUN5(VAR8)));

if (VAR9 + 1 < VAR14) {
VAR2->VAR10->VAR11[VAR9] = VAR8;
VAR9 += 1;
}
}

if (VAR5 != VAR4) {
FUN4(1,
(""));
FUN8(VAR15,
VAR16);
return VAR16;
}

if (VAR9 == 0) {
FUN4(3, (""));
FUN8(VAR17,
VAR18);
return VAR18;
}

VAR2->VAR10->VAR11[VAR9] = VAR19;
return 0;
}