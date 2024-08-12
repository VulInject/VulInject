int
FUN1(VAR1 *this, int VAR2, int VAR3)
{
const VAR4 *VAR5;
uint32_t VAR6;
int VAR7;
int VAR8, VAR9, VAR10, VAR11;
nid_t VAR12;

VAR7 = 0;

if (this->VAR13.VAR14 > 0 && VAR2 < this->VAR13.VAR14 &&
VAR2 >= 0) {
this->VAR13.VAR15 = VAR2;
VAR5 = &this->VAR13.VAR16[this->VAR13.VAR15];
VAR6 = this->VAR17[VAR5->VAR18[0]].VAR19.VAR20.VAR6;
VAR8 = 0;
if (VAR6 & VAR21)
VAR8++;
if (VAR6 & VAR22)
VAR8++;
if (VAR6 & VAR23)
VAR8++;
if (VAR6 & VAR24)
VAR8++;
if ((VAR6 & VAR25) &&
!(this->VAR17[VAR5->VAR18[0]].VAR26 & VAR27))
VAR8++;
if (VAR8 == 0) {
FUN2("",
FUN3(this->VAR28), VAR6);
return -1;
}
VAR7 += VAR5->VAR29 * VAR8;
}

if (this->VAR30.VAR14 > 0 && VAR3 < this->VAR30.VAR14 &&
VAR3 >= 0) {
this->VAR30.VAR15 = VAR3;
VAR5 = &this->VAR30.VAR16[this->VAR30.VAR15];
VAR6 = this->VAR17[VAR5->VAR18[0]].VAR19.VAR20.VAR6;
VAR8 = 0;
if (VAR6 & VAR21)
VAR8++;
if (VAR6 & VAR22)
VAR8++;
if (VAR6 & VAR23)
VAR8++;
if (VAR6 & VAR24)
VAR8++;
if ((VAR6 & VAR25) &&
!(this->VAR17[VAR5->VAR18[0]].VAR26 & VAR27))
VAR8++;
if (VAR8 == 0) {
FUN2("",
FUN3(this->VAR28), VAR6);
return -1;
}
VAR7 += VAR5->VAR29 * VAR8;
}

if (VAR7 == 0) {
FUN4(("", FUN3(this->VAR28)));
return -1;
}

if (this->VAR31 != NULL)
free(this->VAR31, VAR32, 0);
this->VAR33 = 0;
this->VAR31 = FUN5(VAR7, sizeof(struct VAR34),
VAR32, VAR35 | VAR36);
if (this->VAR31 == NULL) {
FUN2("",
FUN3(this->VAR28), VAR37);
return VAR38;
}


if (this->VAR13.VAR14 > 0) {
VAR5 = &this->VAR13.VAR16[this->VAR13.VAR15];
for (VAR9 = 0; VAR9 < VAR5->VAR29; VAR9++) {
VAR10 = 0;
VAR6 = ~0;
if (this->VAR17[VAR5->VAR18[0]].VAR26 &
VAR27)
VAR6 &= ~(VAR25);
for (VAR11 = 0; VAR11 <= VAR9; VAR11++) {
VAR12 = VAR5->VAR18[VAR11];
VAR10 += FUN6(&this->VAR17[VAR12]);
VAR6 &= this->VAR17[VAR12].VAR19.VAR20.VAR6;
}
FUN7(this, VAR10, VAR6,
VAR39);
}
}


if (this->VAR30.VAR14 > 0) {
VAR5 = &this->VAR30.VAR16[this->VAR30.VAR15];
for (VAR9 = 0; VAR9 < VAR5->VAR29; VAR9++) {
VAR10 = 0;
VAR6 = ~0;
if (this->VAR17[VAR5->VAR18[0]].VAR26 &
VAR27)
VAR6 &= ~(VAR25);
for (VAR11 = 0; VAR11 <= VAR9; VAR11++) {
VAR12 = VAR5->VAR18[VAR11];
VAR10 += FUN6(&this->VAR17[VAR12]);
VAR6 &= this->VAR17[VAR12].VAR19.VAR20.VAR6;
}
FUN7(this, VAR10, VAR6,
VAR40);
}
}

return 0;
}