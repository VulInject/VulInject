static int FUN1(struct VAR1 *VAR2,
int VAR3,
struct VAR4 *VAR5,
u16 VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR9 = VAR8->VAR9;
int VAR10 = VAR8->VAR10;
u32 VAR11;

VAR11 = FUN3(VAR9, FUN4(VAR10, VAR3));


if (VAR6 == VAR12 || VAR6 == VAR13) {
switch (FUN5(VAR11)) {
case VAR14:
FUN6(VAR5, VAR15);
break;
case VAR16:
FUN6(VAR5, VAR17);
break;
}
}

if (VAR6 == VAR12 || VAR6 == VAR18) {
switch (FUN7(VAR11)) {
case VAR19:
FUN6(VAR5, VAR15);
break;
case VAR20:
FUN6(VAR5, VAR21);
FUN6(VAR5, VAR22);
break;
case VAR23:
FUN6(VAR5, VAR24);
break;
}

switch (FUN8(VAR11)) {
case VAR25:
FUN6(VAR5, VAR15);
break;
case VAR26:
FUN6(VAR5, VAR21);
FUN6(VAR5, VAR22);
break;
case VAR27:
FUN6(VAR5, VAR24);
break;
}
}

if (VAR6 == VAR12 || VAR6 == VAR28) {
switch (FUN9(VAR11)) {
case VAR29:
FUN6(VAR5, VAR15);
break;
case VAR30:
FUN6(VAR5, VAR24);
break;
case VAR31:
FUN6(VAR5, VAR32);
break;
case VAR33:
FUN6(VAR5, VAR21);
FUN6(VAR5, VAR22);
break;
}

switch (FUN10(VAR11)) {
case VAR34:
FUN6(VAR5, VAR15);
break;
case VAR35:
FUN6(VAR5, VAR24);
break;
case VAR36:
FUN6(VAR5, VAR32);
break;
case VAR37:
FUN6(VAR5, VAR21);
FUN6(VAR5, VAR22);
break;
case VAR38:

break;
}
}

if (VAR6 != VAR13 && VAR6 != VAR18 &&
VAR6 != VAR28) {
switch (FUN11(VAR11)) {
case VAR39:

FUN6(VAR5, VAR15);
break;
}
}
return 0;
}