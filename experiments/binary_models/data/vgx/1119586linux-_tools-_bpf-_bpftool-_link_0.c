static int FUN1(int VAR1, struct VAR2 *VAR3)
{
struct bpf_prog_info VAR4;
const char *VAR5;
int VAR6;

FUN2(VAR3);

switch (VAR3->VAR7) {
case VAR8:
FUN3("",
(const char *)FUN4(VAR3->VAR9.VAR10));
break;
case VAR11:
VAR6 = FUN5(VAR3->VAR12, &VAR4);
if (VAR6)
return VAR6;

VAR5 = FUN6(VAR4.VAR7);

if (VAR5)
FUN3("", VAR5);
else
FUN3("", VAR4.VAR7);

FUN7(VAR3->VAR13.VAR14);
break;
case VAR15:
FUN3("", (VAR16)VAR3->VAR17.VAR18);
FUN7(VAR3->VAR17.VAR14);
break;
case VAR19:
FUN8(VAR3);
break;
case VAR20:
FUN3("", VAR3->VAR21.VAR22);
FUN7(VAR3->VAR21.VAR14);
break;
default:
break;
}

if (!FUN9(VAR23)) {
struct VAR24 *VAR25;

FUN10(VAR23, VAR25, VAR3->VAR26)
FUN3("", (char *)VAR25->VAR27);
}
FUN11(VAR28, VAR3->VAR26, "");

FUN3("");

return 0;
}