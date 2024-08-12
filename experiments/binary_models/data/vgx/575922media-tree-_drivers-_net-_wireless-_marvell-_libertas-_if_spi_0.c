static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR3)
{
struct VAR4 *VAR5 = VAR2->VAR5;
int VAR6, VAR7;
int VAR8, VAR9 = 0, VAR10 = 0;
const VAR11 *VAR12;
u16 VAR13;

FUN2(VAR14);

VAR10 = FUN3(VAR2, 1, 0);
if (VAR10)
goto VAR15;

VAR10 = FUN4(VAR2, VAR16, 0, 0);
if (VAR10) {
FUN5(VAR5->VAR17,
"",
VAR18);
goto VAR15;
}

VAR13 = 0;
VAR7 = 0;
VAR8 = VAR3->VAR19;
VAR12 = VAR3->VAR20;
while ((VAR6 = FUN6(VAR2, &VAR9))) {
if (VAR6 < 0) {
VAR10 = VAR6;
goto VAR15;
}
if (VAR8 < 0) {

FUN5(VAR5->VAR17,
"");
break;
}
if (VAR9) {

if (++VAR13 > VAR21) {
FUN7("");
VAR10 = -VAR22;
goto VAR15;
}
} else {

VAR8 -= VAR7;
VAR12 += VAR7;
}
if (VAR8 < VAR6) {
memset(VAR2->VAR23, 0, VAR6);
memcpy(VAR2->VAR23, VAR12, VAR8);
} else
memcpy(VAR2->VAR23, VAR12, VAR6);

VAR10 = FUN8(VAR2, VAR24, 0);
if (VAR10)
goto VAR15;
VAR10 = FUN9(VAR2, VAR25,
VAR2->VAR23, VAR6);
if (VAR10)
goto VAR15;
VAR10 = FUN8(VAR2, VAR26 ,
VAR27);
if (VAR10)
goto VAR15;
VAR7 = VAR6;
}
if (VAR8 > VAR7) {
FUN7("");
}


VAR10 = FUN10(VAR2, VAR28,
VAR29);
if (VAR10) {
FUN7("");
goto VAR15;
}

VAR15:
if (VAR10)
FUN7("", VAR10);
FUN11(VAR14, "", VAR10);
return VAR10;
}