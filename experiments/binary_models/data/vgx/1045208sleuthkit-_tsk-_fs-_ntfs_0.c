static VAR1
FUN1(VAR2 * VAR3, VAR4 * VAR5,
VAR6 * VAR7, uint32_t VAR8)
{
VAR9 *VAR10 = (VAR9 *) VAR3;
int VAR11;
uint64_t VAR12;




VAR11 = 1;
for (VAR12 = 0; VAR12 < VAR8 && VAR11 == 1; VAR12++) {
if (VAR7[VAR12]) {
VAR11 = 0;
break;
}
}


if (VAR11) {
if (VAR13)
FUN2(VAR14,
"");

memset(VAR5->VAR15, 0, VAR5->VAR16);
VAR5->VAR17 = VAR5->VAR16;
}


else if (VAR7[VAR8 - 1] == 0) {

if (VAR13)
FUN2(VAR14,
"");


FUN3(VAR5);
for (VAR12 = 0; VAR12 < VAR8; VAR12++) {
ssize_t VAR18;

if (VAR7[VAR12] == 0)
break;


VAR18 =
FUN4(VAR10, VAR7[VAR12],
&VAR5->VAR19[VAR5->VAR20], VAR10->VAR21);
if (VAR18 != VAR10->VAR21) {
if (VAR18 >= 0) {
FUN5();
FUN6(VAR22);
}
VAR23
(""
VAR24, VAR7[VAR12]);
return 1;
}
VAR5->VAR20 += VAR10->VAR21;
}

if (FUN7(VAR5)) {
return 1;
}
}


else {
if (VAR13)
FUN2(VAR14,
"");

VAR5->VAR17 = 0;
for (VAR12 = 0; VAR12 < VAR8; VAR12++) {
ssize_t VAR18;


if ((VAR5->VAR17 >= VAR5->VAR16) || (VAR10->VAR21 > VAR5->VAR16 - VAR5->VAR17)) {
FUN5();
FUN6(VAR22);
FUN8(""VAR25 "", VAR5->VAR17);
return 1;
}

VAR18 =
FUN4(VAR10, VAR7[VAR12],
&VAR5->VAR15[VAR5->VAR17], VAR10->VAR21);
if (VAR18 != VAR10->VAR21) {
if (VAR18 >= 0) {
FUN5();
FUN6(VAR22);
}
VAR23
(""
VAR24, VAR7[VAR12]);
return 1;
}
VAR5->VAR17 += VAR10->VAR21;
}
}
return 0;
}