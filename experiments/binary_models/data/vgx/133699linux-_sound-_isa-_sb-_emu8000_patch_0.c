int
FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6,
const void VAR7 *VAR8, long VAR9)
{
int  VAR10;
int  VAR11;
int  VAR12;
int  VAR13;
int  VAR14, VAR15;
struct VAR16 *VAR17;

VAR17 = VAR2->VAR18;
if (FUN2(!VAR4))
return -VAR19;

if (VAR4->VAR20.VAR21 == 0)
return 0;


if (VAR4->VAR20.VAR22 > VAR4->VAR20.VAR23)
FUN3(VAR4->VAR20.VAR22, VAR4->VAR20.VAR23);


VAR13 = VAR4->VAR20.VAR21;
if (VAR4->VAR20.VAR24 & (VAR25|VAR26))
VAR13 += VAR4->VAR20.VAR23 - VAR4->VAR20.VAR22;
if (VAR4->VAR20.VAR24 & VAR27)
VAR13 += VAR28;

VAR4->VAR29 = FUN4(VAR6, VAR13 * 2);
if (VAR4->VAR29 == NULL) {


return -VAR30;
}

if (VAR4->VAR20.VAR24 & VAR31) {
if (!FUN5(VAR8, VAR4->VAR20.VAR21))
return -VAR32;
} else {
if (!FUN5(VAR8, VAR4->VAR20.VAR21 * 2))
return -VAR32;
}


VAR4->VAR20.VAR33 -= VAR4->VAR20.VAR34;
VAR4->VAR20.VAR22 -= VAR4->VAR20.VAR34;
VAR4->VAR20.VAR23 -= VAR4->VAR20.VAR34;
VAR4->VAR20.VAR34 = 0;


VAR14 = VAR35 + (VAR4->VAR29->VAR12 >> 1);
VAR15 = VAR14;


VAR4->VAR20.VAR13 = VAR13 * 2; 

FUN6(VAR17->VAR17);
VAR11 = FUN7(VAR17, VAR36);
if (VAR11)
return VAR11;


FUN8(VAR17);
FUN9(VAR17, VAR14);




if (! VAR4->VAR29->VAR12) {
for (VAR10 = 0; VAR10 < VAR37; VAR10++) {
FUN10(VAR17, &VAR14, 0);
}
}

VAR12 = 0;
for (VAR10 = 0; VAR10 < VAR4->VAR20.VAR21; VAR10++) {
unsigned short VAR38;

VAR38 = FUN11(VAR8, VAR12, VAR4->VAR20.VAR24);
VAR12++;
FUN10(VAR17, &VAR14, VAR38);


FUN12();

if (VAR10 == VAR4->VAR20.VAR23 &&
(VAR4->VAR20.VAR24 & (VAR25|VAR26)))
{
int VAR39 = VAR4->VAR20.VAR23 - VAR4->VAR20.VAR22;
int VAR40;


for (VAR40 = 1; VAR40 <= VAR39; VAR40++) {
VAR38 = FUN11(VAR8, VAR12 - VAR40, VAR4->VAR20.VAR24);
FUN10(VAR17, &VAR14, VAR38);
}
if (VAR4->VAR20.VAR24 & VAR25) {
VAR4->VAR20.VAR23 += VAR39;
} else {
VAR4->VAR20.VAR22 += VAR39;
VAR4->VAR20.VAR23 += VAR39;
}
VAR4->VAR20.VAR33 += VAR39;
}
}


if (VAR4->VAR20.VAR24 & VAR27) {
for (VAR10 = 0; VAR10 < VAR28; VAR10++) {
FUN10(VAR17, &VAR14, 0);
}
if (VAR4->VAR20.VAR24 & VAR41) {
VAR4->VAR20.VAR22 = VAR4->VAR20.VAR33 + VAR42;
VAR4->VAR20.VAR23 = VAR4->VAR20.VAR33 + VAR43;
}
}


VAR4->VAR20.VAR34 += VAR15;
VAR4->VAR20.VAR33 += VAR15;
VAR4->VAR20.VAR22 += VAR15;
VAR4->VAR20.VAR23 += VAR15;

FUN13(VAR17);
FUN14(VAR17);

return 0;
}