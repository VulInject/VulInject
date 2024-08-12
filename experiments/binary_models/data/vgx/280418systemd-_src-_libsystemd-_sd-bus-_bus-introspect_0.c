int FUN1(
struct VAR1 *VAR2,
const char *VAR3,
const VAR4 *VAR5) {

const VAR4 *VAR6 = FUN2(VAR5);
const char *VAR7 = "";
int VAR8;

assert(VAR2);
assert(VAR3);

VAR8 = FUN3(VAR2, VAR3);
if (VAR8 < 0)
return VAR8;

for (; VAR5->VAR9 != VAR10; VAR5 = FUN4(VAR6, VAR5)) {



if (VAR5->VAR9 != VAR11 && (VAR5->VAR12 & VAR13))
continue;

switch (VAR5->VAR9) {

case VAR11:
if (VAR5->VAR12 & VAR14)
fputs(""VAR15.VAR16.VAR17.VAR18\""true\"", VAR2->VAR19);
break;

case VAR20:
fprintf(VAR2->VAR19, ""%VAR21\"", VAR5->VAR22.VAR23.VAR24);
if (FUN5(VAR6))
VAR7 = FUN6(VAR5->VAR22.VAR23.VAR7);
FUN7(VAR2, FUN6(VAR5->VAR22.VAR23.VAR25), &VAR7, "");
FUN7(VAR2, FUN6(VAR5->VAR22.VAR23.VAR26), &VAR7, "");
FUN8(VAR2, VAR5->VAR9, VAR5->VAR12);
fputs("", VAR2->VAR19);
break;

case VAR27:
case VAR28:
fprintf(VAR2->VAR19, ""%VAR21\""%VAR21\""%VAR21\"",
VAR5->VAR22.VAR29.VAR24,
VAR5->VAR22.VAR29.VAR25,
VAR5->VAR9 == VAR28 ? "" : "");
FUN8(VAR2, VAR5->VAR9, VAR5->VAR12);
fputs("", VAR2->VAR19);
break;

case VAR30:
fprintf(VAR2->VAR19, ""%VAR21\"", VAR5->VAR22.signal.VAR24);
if (FUN5(VAR6))
VAR7 = FUN6(VAR5->VAR22.signal.VAR7);
FUN7(VAR2, FUN6(VAR5->VAR22.signal.VAR25), &VAR7, NULL);
FUN8(VAR2, VAR5->VAR9, VAR5->VAR12);
fputs("", VAR2->VAR19);
break;
}

}

return 0;
}