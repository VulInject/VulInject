VAR1
FUN1(VAR2     *VAR3,
VAR1  *VAR4,
VAR1  *VAR5)
{
png_uint_32  VAR6, VAR7;
png_structp  VAR8;
png_infop    VAR9;

if (VAR4) *VAR4 = 0;
if (VAR5) *VAR5 = 0;
if (!VAR3)
return FUN2("", VAR10, 1);
if (!VAR4 || !VAR5)
return FUN2("", VAR10, 1);


if ((VAR8 = FUN3(VAR11,
(VAR12)NULL, NULL, NULL)) == NULL)
return FUN2("", VAR10, 1);
if ((VAR9 = FUN4(VAR8)) == NULL) {
FUN5(&VAR8, (VAR13)NULL, (VAR13)NULL);
return FUN2("", VAR10, 1);
}


if (FUN6(FUN7(VAR8))) {
FUN5(&VAR8, &VAR9, (VAR13)NULL);
return FUN2("", VAR10, 1);
}


FUN8(VAR3);
FUN9(VAR8, VAR3);
FUN10(VAR8, VAR9);

VAR6 = FUN11(VAR8, VAR9);
VAR7 = FUN12(VAR8, VAR9);
*VAR4 = (VAR1)((VAR14)VAR6 / 39.37 + 0.5);  
*VAR5 = (VAR1)((VAR14)VAR7 / 39.37 + 0.5);

FUN5(&VAR8, &VAR9, NULL);
FUN8(VAR3);
return 0;
}