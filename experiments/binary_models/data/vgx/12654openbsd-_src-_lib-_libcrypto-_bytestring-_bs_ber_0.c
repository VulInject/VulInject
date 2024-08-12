static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, char VAR5,
char VAR6, unsigned int VAR7)
{
if (VAR7 > VAR8)
return 0;

while (FUN2(VAR2) > 0) {
CBS VAR9;
unsigned int VAR10;
size_t VAR11;
VAR3 *VAR12, VAR13;

if (!FUN3(VAR2, &VAR9, &VAR10,
&VAR11))
return 0;

VAR12 = VAR4;

if (FUN2(&VAR9) == VAR11) {
if (FUN4(VAR11, &VAR9))
return VAR6;

if (VAR11 > 0 &&
FUN5(&VAR9)[VAR11 - 1] == 0x80) {

const char VAR14 = (VAR10 & 0xc0)
== 0x80;
char VAR15 =
FUN6(VAR10);


if (VAR14 &&
(VAR10 & VAR16)) {
CBS VAR17, VAR18;
unsigned int VAR19;
size_t VAR20;

FUN7(&VAR17, FUN5(VAR2),
FUN2(VAR2));
if (!FUN3(
&VAR17, &VAR18,
&VAR19, &VAR20))
return 0;

if (FUN2(&VAR18) >
VAR20 &&
FUN6(VAR19))
VAR15 = 1;
}

if (!VAR5) {
unsigned int VAR21 = VAR10;

if (VAR15)
VAR21 &=
~VAR16;

if (!FUN8(VAR4,
&VAR13, VAR21))
return 0;

VAR12 = &VAR13;
}

if (!FUN1(VAR2, VAR12,
VAR15,
1 , VAR7 + 1))
return 0;

if (VAR12 != VAR4 && !FUN9(VAR4))
return 0;

continue;
}
}

if (!VAR5) {
if (!FUN8(VAR4, &VAR13, VAR10))
return 0;

VAR12 = &VAR13;
}

if (!FUN10(&VAR9, VAR11))
return 0;

if (VAR10 & VAR16) {
if (!FUN1(&VAR9, VAR12,
0 ,
0 , VAR7 + 1))
return 0;
} else {
if (!FUN11(VAR12, FUN5(&VAR9),
FUN2(&VAR9)))
return 0;
}

if (VAR12 != VAR4 && !FUN9(VAR4))
return 0;
}

return VAR6 == 0;
}