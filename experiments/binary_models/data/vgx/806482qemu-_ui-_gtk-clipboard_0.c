static void FUN1(VAR1 *VAR2,
VAR3 *VAR4,
gpointer VAR5)
{
VAR6 *VAR7 = VAR5;
QemuClipboardSelection VAR8 = FUN2(VAR7, VAR2);
VAR9 *VAR10;

if (VAR7->VAR11[VAR8]) {

return;
}


switch (VAR4->VAR12.VAR13) {
case VAR14:
VAR10 = FUN3(&VAR7->VAR15, VAR8);
if (FUN4(VAR2)) {
VAR10->VAR16[VAR17].VAR18 = true;
}

FUN5(VAR10);
FUN6(VAR10);
break;
default:
FUN7(&VAR7->VAR15, VAR8);
VAR7->VAR11[VAR8] = false;
break;
}
}