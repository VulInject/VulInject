VAR1 *
FUN1(l_int32      VAR2,
l_int32      VAR3,
l_int32      VAR4,
l_int32      VAR5,
const char  *VAR6)
{
l_int32    VAR7, VAR8, VAR9, VAR10;
l_float32  VAR11;
VAR1  *VAR12;
VAR13      *VAR14;

if (VAR2 < 1)
return (VAR1 *)FUN2("", VAR15, NULL);
if (VAR3 < 1)
return (VAR1 *)FUN2("", VAR15, NULL);
if (VAR4 < 0 || VAR4 >= VAR2)
return (VAR1 *)FUN2("", VAR15, NULL);
if (VAR5 < 0 || VAR5 >= VAR3)
return (VAR1 *)FUN2("", VAR15, NULL);

VAR12 = FUN3(VAR2, VAR3);
FUN4(VAR12, VAR4, VAR5);
VAR14 = FUN5(VAR6, "");
VAR7 = FUN6(VAR14);
if (VAR7 != VAR3 * VAR2) {
FUN7(&VAR12);
FUN8(&VAR14);
FUN9("", VAR3, VAR2, VAR7);
return (VAR1 *)FUN2("", VAR15, NULL);
}

VAR10 = 0;
for (VAR8 = 0; VAR8 < VAR2; VAR8++) {
for (VAR9 = 0; VAR9 < VAR3; VAR9++) {
FUN10(VAR14, VAR10, &VAR11);
FUN11(VAR12, VAR8, VAR9, VAR11);
VAR10++;
}
}

FUN8(&VAR14);
return VAR12;
}