static VAR1
FUN1(VAR2 *VAR3, int VAR4)
{
struct VAR5 *VAR6;
struct VAR7 *VAR8;
uint64_t VAR9;
struct VAR10 *VAR11;

assert(VAR3->VAR12 == VAR13 && VAR3->VAR14 == VAR15);



VAR6 = (struct VAR5 *)((char *)VAR3 + VAR3->VAR16 -
sizeof (struct VAR5));

assert(VAR6->VAR17 == VAR18);


if (VAR6->VAR19 >= sizeof (VAR6->VAR20)) {
if (VAR21 & VAR22)
FUN2("");
return (VAR23);
}
VAR6->VAR20[VAR6->VAR19] = 0;

VAR8 = FUN3(VAR6->VAR20);
if (VAR8 == NULL) {
if (VAR21 & VAR22)
FUN2(""
"", VAR6->VAR20);
return (VAR23);
}


VAR11 = (VAR4 == VAR24) ? VAR8->VAR25 : VAR8->VAR26;
if (VAR11 == NULL) {
if (VAR21 & VAR22)
FUN2(""
"", FUN4(VAR4), VAR8->VAR27);
return (VAR23);
}

VAR9 = VAR11->VAR28;
VAR11->VAR28 = FUN5(VAR3->VAR29);
VAR8->VAR30 = VAR11->VAR28;

if (VAR21 & VAR22) {
FUN2(""
"", VAR8->VAR27,
FUN4(VAR4), VAR9, VAR8->VAR30);
}


if ((VAR9 ^ VAR11->VAR28) & VAR31) {
FUN6(VAR8);
if (VAR11->VAR28 & VAR31)
FUN7(VAR8);
}


if ((VAR9 ^ VAR11->VAR28) != VAR32) {
struct VAR10 *VAR33;

VAR33 = FUN8(VAR11);
if (VAR33 != NULL)
VAR33->VAR28 = VAR11->VAR28;
return (VAR23);
}

return (VAR34);
}