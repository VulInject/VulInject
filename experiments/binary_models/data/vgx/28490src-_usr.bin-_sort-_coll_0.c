static int
FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3,
size_t offset VAR4, bool VAR5)
{
struct VAR6 *VAR7, *VAR8;
wchar_t VAR9[VAR10 + 1], VAR11[VAR10 + 1];
wchar_t VAR12[VAR10 + 1], VAR13[VAR10 + 1];
int VAR14, VAR15, VAR16;
size_t VAR17, VAR18, VAR19, VAR20;
unsigned char VAR21, VAR22;
bool VAR23, VAR24, VAR25, VAR26;

VAR7 = VAR2->VAR27;
VAR8 = VAR3->VAR27;
VAR15 = VAR16 = 0;
VAR19 = VAR20 = 0;
VAR17 = VAR18 = 0;

VAR25 = VAR26 = false;

if (VAR28) {
FUN2(VAR29, VAR7, "", "");
FUN2(VAR29, VAR8, "", "");
}

if (VAR7 == VAR8)
return 0;

if (VAR2->VAR30->VAR31 == VAR32) {

FUN3(VAR7, &VAR15, VAR12, &VAR19, VAR9, &VAR17, &VAR21);
VAR25 = true;
VAR2->VAR30->VAR33.VAR34.VAR35 = FUN4(VAR12, NULL, 10);
if (VAR19 < 1 && VAR17 < 1)
VAR2->VAR30->VAR33.VAR34.VAR36=true;
VAR2->VAR30->VAR33.VAR34.VAR37 = VAR21;
VAR2->VAR30->VAR31 = (VAR2->VAR30->VAR33.VAR34.VAR35 != VAR38) ?
VAR39 : VAR40;
VAR2->VAR30->VAR33.VAR34.VAR41 = (VAR15 < 0) ? true : false;
}

if (VAR3->VAR30->VAR31 == VAR32) {

FUN3(VAR8, &VAR16, VAR13, &VAR20, VAR11, &VAR18, &VAR22);
VAR26 = true;
VAR3->VAR30->VAR33.VAR34.VAR35 = FUN4(VAR13, NULL, 10);
if (VAR20 < 1 && VAR18 < 1)
VAR3->VAR30->VAR33.VAR34.VAR36=true;
VAR3->VAR30->VAR33.VAR34.VAR37 = VAR22;
VAR3->VAR30->VAR31 = (VAR3->VAR30->VAR33.VAR34.VAR35 != VAR38) ?
VAR39 : VAR40;
VAR3->VAR30->VAR33.VAR34.VAR41 = (VAR16 < 0) ? true : false;
}

if (VAR2->VAR30->VAR31 == VAR39 && VAR3->VAR30->VAR31 ==
VAR39) {
unsigned long long VAR35, VAR42;
bool VAR43, VAR44;

VAR23 = VAR2->VAR30->VAR33.VAR34.VAR36;
VAR24 = VAR3->VAR30->VAR33.VAR34.VAR36;

if (VAR23 && VAR24)
return 0;

VAR43 = VAR2->VAR30->VAR33.VAR34.VAR41;
VAR44 = VAR3->VAR30->VAR33.VAR34.VAR41;

if (VAR43 && !VAR44)
return -1;
if (VAR44 && !VAR43)
return 1;

if (VAR23)
return VAR44 ? 1 : -1;
else if (VAR24)
return VAR43 ? -1 : 1;


if (VAR5) {
VAR14 = FUN5(VAR2->VAR30->VAR33.VAR34.VAR37, VAR3->VAR30->VAR33.VAR34.VAR37);
if (VAR14)
return VAR43 ? -VAR14 : VAR14;
}

VAR35 = VAR2->VAR30->VAR33.VAR34.VAR35;
VAR42 = VAR3->VAR30->VAR33.VAR34.VAR35;
if (VAR35 < VAR42)
return VAR43 ? 1 : -1;
else if (VAR35 > VAR42)
return VAR43 ? -1 : 1;
}


if (!VAR25)
FUN3(VAR7, &VAR15, VAR12, &VAR19, VAR9, &VAR17, &VAR21);
if (!VAR26)
FUN3(VAR8, &VAR16, VAR13, &VAR20, VAR11, &VAR18, &VAR22);

VAR23 = ((VAR19 + VAR17) == 0);
VAR24 = ((VAR20 + VAR18) == 0);

if (VAR23 && VAR24)
return 0;


if (VAR15 < 0 && VAR16 >= 0)
return -1;
if (VAR15 >= 0 && VAR16 < 0)
return 1;

if (VAR23)
return (VAR16 < 0) ? +1 : -1;
else if (VAR24)
return (VAR15 < 0) ? -1 : 1;

if (VAR5) {
VAR14 = FUN5(VAR21, VAR22);
if (VAR14)
return (VAR15 < 0) ? -VAR14 : VAR14;
}


if (VAR19 < 1 && VAR20 < 1 && VAR17 < 1 && VAR18 < 1)
return 0;


if (VAR19 < VAR20)
VAR14 = -1;
else if (VAR19 > VAR20)
VAR14 = +1;

else
VAR14 = FUN6(VAR12, VAR13);


if (!VAR14)
VAR14 = FUN6(VAR9, VAR11);

if (!VAR14)
return 0;


if (VAR15 < 0 && VAR16 < 0)
VAR14 = -VAR14;

return VAR14;
}