void FUN1(enum omap_plane VAR1, enum omap_channel VAR2)
{
int VAR3;
u32 VAR4;
int VAR5 = 0, VAR6 = 0;

switch (VAR1) {
case VAR7:
VAR3 = 8;
break;
case VAR8:
case VAR9:
case VAR10:
VAR3 = 16;
break;
default:
FUN2();
return;
}

VAR4 = FUN3(FUN4(VAR1));
if (FUN5(VAR11)) {
switch (VAR2) {
case VAR12:
VAR5 = 0;
VAR6 = 0;
break;
case VAR13:
VAR5 = 1;
VAR6 = 0;
break;
case VAR14:
VAR5 = 0;
VAR6 = 1;
break;
case VAR15:
if (FUN5(VAR16)) {
VAR5 = 0;
VAR6 = 2;
} else {
FUN2();
return;
}
break;
case VAR17:
VAR5 = 0;
VAR6 = 3;
break;
default:
FUN2();
return;
}

VAR4 = FUN6(VAR4, VAR5, VAR3, VAR3);
VAR4 = FUN6(VAR4, VAR6, 31, 30);
} else {
VAR4 = FUN6(VAR4, VAR2, VAR3, VAR3);
}
FUN7(FUN4(VAR1), VAR4);
}