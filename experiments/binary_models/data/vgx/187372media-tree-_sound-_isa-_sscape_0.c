static int FUN1(struct VAR1 *VAR2, unsigned VAR3,
int VAR4, int VAR5, int VAR6)
{
register struct VAR7 *VAR8 = FUN2(VAR2);
struct VAR9 *VAR10;
int VAR11;
int VAR12 = VAR13;

switch (VAR8->VAR14) {
case VAR15:
case VAR16:

if (VAR8->VAR17 != VAR18)
VAR12 = VAR19;
break;

case VAR20:
VAR3 += 4;
break;
default:
break;
}

VAR11 = FUN3(VAR2, VAR3, -1, VAR4, VAR5, VAR6,
VAR12, VAR21, &VAR10);
if (!VAR11) {
unsigned long VAR22;

if (VAR8->VAR14 != VAR20) {

FUN4(VAR10);
FUN5(&VAR10->VAR23, VAR22);
FUN6(VAR10, VAR24, 0x20);
FUN7(&VAR10->VAR23, VAR22);
FUN8(VAR10);

}

VAR11 = FUN9(VAR10, 0);
if (VAR11 < 0) {
FUN10(VAR25 ""
"");
goto VAR26;
}

VAR11 = FUN11(VAR10);
if (VAR11 < 0) {
FUN10(VAR25 ""
"");
goto VAR26;
}
if (VAR10->VAR27 != VAR19) {
VAR11 = FUN12(VAR10, 0);
if (VAR11 < 0) {
FUN10(VAR25 ""
"");
goto VAR26;
}
}

if (VAR8->VAR14 != VAR20) {
VAR11 = FUN13(VAR2,
FUN14(&VAR28, VAR10));
if (VAR11 < 0) {
FUN10(VAR25 ""
"");
goto VAR26;
}
}

VAR8->VAR10 = VAR10;
}

VAR26:
return VAR11;
}