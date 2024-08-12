int
FUN1(virCryptoCipher VAR1,
VAR2 *VAR3,
size_t VAR4,
VAR2 *VAR5,
size_t VAR6,
VAR2 *VAR7,
size_t VAR8,
VAR2 **VAR9,
VAR10 *VAR11)
{
switch (VAR1) {
case VAR12:
if (VAR4 != 32) {
FUN2(VAR13,
FUN3(""),
VAR4);
return -1;
}

if (VAR6 != 16) {
FUN2(VAR13,
FUN3(""),
VAR6);
return -1;
}


return FUN4(VAR14,
VAR3, VAR4, VAR5, VAR6,
VAR7, VAR8,
VAR9, VAR11);

case VAR15:
case VAR16:
break;
}

FUN2(VAR13,
FUN3(""), VAR1);
return -1;
}