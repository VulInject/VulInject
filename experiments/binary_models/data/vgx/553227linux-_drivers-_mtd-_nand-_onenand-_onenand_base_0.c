static int FUN1(struct VAR1 *VAR2, loff_t VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *this = VAR2->VAR7;
int VAR8, VAR9 = 0, VAR10;
int VAR11 = 0, VAR12;
VAR13 *VAR14;
size_t VAR15 = VAR5->VAR16;
const VAR13 *VAR17 = VAR5->VAR14;
unsigned int VAR18 = VAR5->VAR18;

VAR3 += VAR5->VAR19;

FUN2("", VAR20, (unsigned int)VAR3,
(int)VAR15);


VAR5->VAR21 = 0;

if (VAR18 == VAR22)
VAR10 = VAR2->VAR23;
else
VAR10 = VAR2->VAR10;

VAR8 = VAR3 & (VAR2->VAR10 - 1);

if (FUN3(VAR8 >= VAR10)) {
FUN4(VAR24 "",
VAR20);
return -VAR25;
}


if (FUN3(VAR8 + VAR15 > VAR10)) {
FUN4(VAR24 "",
VAR20);
return -VAR25;
}

VAR14 = this->VAR26;

VAR12 = FUN5(this) ? VAR27 : VAR28;


while (VAR11 < VAR15) {
int VAR29 = FUN6(int, VAR10, VAR15 - VAR11);

FUN7();

this->FUN8(VAR2, VAR30, VAR3, VAR2->VAR10);


memset(VAR14, 0xff, VAR2->VAR10);
if (VAR18 == VAR22)
FUN9(VAR2, VAR14, VAR17, VAR8, VAR29);
else
memcpy(VAR14 + VAR8, VAR17, VAR29);
this->FUN10(VAR2, VAR31, VAR14, 0, VAR2->VAR10);

if (FUN5(this)) {

memset(this->VAR32, 0xff, VAR2->VAR33);
this->FUN10(VAR2, VAR34,
this->VAR32, 0, VAR2->VAR33);
}

this->FUN8(VAR2, VAR12, VAR3, VAR2->VAR10);

FUN11(VAR2, VAR3, 0);
if (FUN12(this)) {
FUN13(this);
FUN11(VAR2, VAR3 + this->VAR33, 0);
}

VAR9 = this->FUN14(VAR2, VAR35);
if (VAR9) {
FUN4(VAR24 "", VAR20, VAR9);
break;
}

VAR9 = FUN15(VAR2, VAR14, VAR3);
if (VAR9) {
FUN4(VAR24 "",
VAR20, VAR9);
break;
}

VAR11 += VAR29;
if (VAR11 == VAR15)
break;

VAR3 += VAR2->VAR33;
VAR17 += VAR29;
VAR8 = 0;
}

VAR5->VAR21 = VAR11;

return VAR9;
}