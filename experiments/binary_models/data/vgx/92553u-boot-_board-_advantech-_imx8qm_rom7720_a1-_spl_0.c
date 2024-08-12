int FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;


for (VAR3 = 0; VAR3 < VAR5; VAR3++) {
switch (VAR3) {
case 0:
VAR4 = FUN2(-1, VAR6, VAR7);
if (VAR4 != VAR8)
return VAR4;

FUN3(VAR9, FUN4(VAR9));
FUN5(0);
VAR10[VAR3].VAR11 = FUN6(VAR12);
break;
case 1:
VAR4 = FUN2(-1, VAR13, VAR7);
if (VAR4 != VAR8)
return VAR4;
VAR4 = FUN2(-1, VAR14, VAR7);
if (VAR4 != VAR8)
return VAR4;

FUN3(VAR15, FUN4(VAR15));
FUN5(2);
VAR10[VAR3].VAR11 = FUN6(VAR16);
FUN7(VAR17, "");
FUN8(VAR17);
break;
default:
FUN9(""
"", VAR3 + 1);
return 0;
}
VAR4 = FUN10(VAR2, &VAR10[VAR3]);
if (VAR4) {
FUN9("", VAR3);
return VAR4;
}
}

return 0;
}