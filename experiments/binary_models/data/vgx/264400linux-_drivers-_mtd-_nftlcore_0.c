static inline VAR1 FUN1(struct VAR2 *VAR3, unsigned VAR4)
{
u16 VAR5;
u16 VAR6 = VAR4 / (VAR3->VAR7 / 512);
struct VAR8 *VAR9 = VAR3->VAR10.VAR9;
unsigned int VAR11;
unsigned long VAR12 = (VAR4 * 512) & (VAR3->VAR7 -1);
size_t VAR13;
int VAR14, VAR15 = 3;
struct nftl_oob VAR16;

do {



VAR5 = VAR17;
VAR11 = VAR3->VAR18[VAR6];
VAR14 = VAR19;
while (VAR11 <= VAR3->VAR5) {
struct nftl_bci VAR20;
size_t VAR13;
unsigned int VAR21;

VAR5 = VAR11;

FUN2(VAR9,
(VAR11 * VAR3->VAR7) + VAR12,
8, &VAR13, (char *)&VAR20);

FUN3("",
VAR4 , VAR11, FUN4(VAR20.VAR22));

VAR21 = VAR20.VAR22 | VAR20.VAR23;
switch(VAR21) {
case VAR24:
return VAR11;

case VAR25:
case VAR26:
case VAR27:
break;
default:

break;
}

if (!VAR14--) {
FUN5(VAR28
"",
VAR6);
return VAR17;
}


VAR11 = VAR3->VAR29[VAR11];
}




VAR11 = FUN6(VAR3, 0);

if (VAR11 == VAR17) {






VAR11 = FUN7(VAR3, VAR17);

if (VAR11 == VAR17) {

FUN3("", VAR6);
VAR11 = FUN6(VAR3, 1);
}
if (VAR11 == VAR17) {

FUN5(VAR28 "");
return VAR17;
}

continue;
}



if (VAR5 != VAR17) {
VAR6 |= 0x8000; 
} else {

VAR3->VAR18[VAR6] = VAR11;
}



VAR3->VAR29[VAR11] = VAR17;


FUN2(VAR9, VAR11 * VAR3->VAR7 + 8, 8,
&VAR13, (char *)&VAR16.VAR30);

VAR16.VAR30.VAR31.VAR32 = VAR16.VAR30.VAR31.VAR33 = FUN8(VAR6);

FUN9(VAR9, VAR11 * VAR3->VAR7 + 8, 8,
&VAR13, (char *)&VAR16.VAR30);


if (VAR5 != VAR17) {

VAR3->VAR29[VAR5] = VAR11;

FUN2(VAR9, (VAR5 * VAR3->VAR7) + 8,
8, &VAR13, (char *)&VAR16.VAR30);

VAR16.VAR30.VAR31.VAR34 = VAR16.VAR30.VAR31.VAR35
= FUN8(VAR11);

FUN9(VAR9, (VAR5 * VAR3->VAR7) + 8,
8, &VAR13, (char *)&VAR16.VAR30);
}

return VAR11;

} while (VAR15--);

FUN5(VAR28 "",
VAR6);
return VAR17;
}