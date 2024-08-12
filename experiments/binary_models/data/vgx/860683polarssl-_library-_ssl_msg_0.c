int FUN1(VAR1 *VAR2,
int VAR3,
int VAR4)
{
int VAR5 = VAR6;
const size_t VAR7 = VAR2->VAR8 - 4;
const unsigned char VAR9 = VAR2->VAR10[0];

FUN2(2, (""));


if (VAR2->VAR11 != VAR12          &&
VAR2->VAR11 != VAR13) {
FUN2(1, (""));
return VAR14;
}


if (!(VAR2->VAR11 == VAR12 &&
VAR9          == VAR15) &&
VAR2->VAR16 == NULL) {
FUN2(1, (""));
return VAR14;
}

if (VAR2->VAR17->VAR18 == VAR19 &&
VAR2->VAR16 != NULL &&
VAR2->VAR16->VAR20 == VAR21) {
FUN2(1, (""));
return VAR14;
}


if (VAR2->VAR8 > VAR22) {
FUN2(1, (""
"" VAR23
"" VAR23,
VAR2->VAR8,
(VAR24) VAR22));
return VAR14;
}


if (VAR2->VAR11 == VAR12) {
VAR2->VAR10[1] = FUN3(VAR7);
VAR2->VAR10[2] = FUN4(VAR7);
VAR2->VAR10[3] = FUN5(VAR7);


if (VAR2->VAR17->VAR18 == VAR19) {

if (VAR22 - VAR2->VAR8 < 8) {
FUN2(1, (""
"" VAR23 ""
VAR23,
VAR7,
(VAR24) (VAR22 - 12)));
return VAR25;
}

memmove(VAR2->VAR10 + 12, VAR2->VAR10 + 4, VAR7);
VAR2->VAR8 += 8;


if (VAR9 != VAR15) {
FUN6(VAR2->VAR16->VAR26, VAR2->VAR10, 4);
++(VAR2->VAR16->VAR26);
} else {
VAR2->VAR10[4] = 0;
VAR2->VAR10[5] = 0;
}


memset(VAR2->VAR10 + 6, 0x00, 3);
memcpy(VAR2->VAR10 + 9, VAR2->VAR10 + 1, 3);
}


if (VAR9 != VAR15 && VAR3 != 0) {
VAR5 = VAR2->VAR16->FUN7(VAR2, VAR2->VAR10,
VAR2->VAR8);
if (VAR5 != 0) {
FUN8(1, "", VAR5);
return VAR5;
}
}
}


if (VAR2->VAR17->VAR18 == VAR19 &&
!(VAR2->VAR11 == VAR12 &&
VAR9          == VAR15)) {
if ((VAR5 = FUN9(VAR2)) != 0) {
FUN8(1, "", VAR5);
return VAR5;
}
} else
{
if ((VAR5 = FUN10(VAR2, VAR4)) != 0) {
FUN8(1, "", VAR5);
return VAR5;
}
}

FUN2(2, (""));

return 0;
}