VAR1 *
FUN1(virArch VAR2,
virCPUType VAR3,
virNodeInfoPtr VAR4,
VAR5 *VAR6)
{
struct VAR7 *VAR8;
FUN2(VAR1) VAR9 = NULL;

FUN3("",
FUN4(VAR2), FUN5(VAR3), VAR4,
VAR6);

if (!(VAR8 = FUN6(VAR2)))
return NULL;

VAR9 = FUN7();

switch (VAR3) {
case VAR10:
VAR9->VAR2 = VAR2;
VAR9->VAR3 = VAR3;
break;

case VAR11:
if (VAR4) {
FUN8(VAR12,
FUN9(""),
FUN5(VAR3));
return NULL;
}
VAR9->VAR3 = VAR3;
break;

case VAR13:
case VAR14:
FUN8(VAR12,
FUN9(""),
FUN5(VAR3));
return NULL;
}

if (VAR4) {
VAR9->VAR15 = VAR4->VAR15;
VAR9->VAR16 = 1;
VAR9->VAR17 = VAR4->VAR17;
VAR9->VAR18 = VAR4->VAR18;
}


if (VAR8->VAR19) {
if (VAR8->FUN10(VAR9, VAR6) < 0 && !VAR4)
return NULL;
} else if (VAR4) {
FUN3("",
FUN4(VAR2));
} else {
FUN8(VAR20,
FUN9(""),
FUN4(VAR2));
return NULL;
}

return FUN11(&VAR9);
}