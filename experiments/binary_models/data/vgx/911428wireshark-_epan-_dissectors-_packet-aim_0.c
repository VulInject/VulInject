static int
FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5,
VAR6 *VAR7, const VAR8 *VAR9)
{
guint16 VAR10;
guint16 VAR11;
int VAR12 = 0;
const VAR8 *VAR13;
const char *VAR14;
VAR15 *VAR16;
VAR6 *VAR17;


VAR10 = FUN2(VAR2, VAR5);


VAR13 = VAR9;
while (VAR13[VAR12].VAR10) {
if (VAR13[VAR12].VAR10 == VAR10) {

break;
}
VAR12++;
}



VAR11 = FUN2(VAR2, VAR5+2);

if (VAR13[VAR12].VAR14 != NULL)
VAR14 = VAR13[VAR12].VAR14;
else
VAR14 = "";

VAR17 = FUN3(VAR7, VAR2, VAR5, VAR11 + 4,
VAR18, NULL, "", VAR14);

FUN4(VAR17, VAR19, VAR2, VAR5, 2,
VAR10, "", VAR14, VAR10);
VAR5 += 2;

FUN5(VAR17, VAR20, VAR2, VAR5, 2, VAR11);
VAR5 += 2;

FUN6(VAR17, VAR2, VAR5, VAR11, VAR21, &VAR16, "");

if (VAR13[VAR12].VAR22) {
VAR13[VAR12].FUN7(VAR16, VAR10, FUN8(VAR2, VAR5, VAR11), VAR4);
}

VAR5 += VAR11;


return VAR5;
}