static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5		*VAR6;
struct VAR7	*VAR8;
struct VAR9		*VAR10;
unsigned		VAR11;
int			VAR12;

VAR10 = FUN2(VAR2);
if (!VAR2 || !VAR4 || VAR10->VAR4 || VAR2->VAR13 == VAR14
|| VAR4->VAR15 != VAR16)
return -VAR17;
VAR6 = FUN3(VAR10);
if (!VAR6->VAR18)
return -VAR19;

VAR8 = FUN4(&VAR6->VAR20);
if (!FUN5(VAR8))
return -VAR19;


VAR11 = FUN6(VAR4);


VAR12 = -VAR17;
switch (FUN7(VAR4)) {
case VAR21:
if (strstr(VAR10->VAR10.VAR13, "")
|| strstr(VAR10->VAR10.VAR13, "")) {
goto VAR22;
}
switch (VAR6->VAR20.VAR23) {
case VAR24:
if (VAR11 == 1024)
break;
goto VAR22;
case VAR25:
if (VAR11 == 512)
break;
goto VAR22;
case VAR26:
if (VAR11 == 8 || VAR11 == 16 || VAR11 == 32 || VAR11 == 64)

break;

default:
goto VAR22;
}
break;
case VAR27:
if (strstr(VAR10->VAR10.VAR13, "")) 
goto VAR22;

switch (VAR6->VAR20.VAR23) {
case VAR24:
case VAR25:
if (VAR11 <= 1024)
break;

case VAR26:
if (VAR11 <= 64)
break;

default:
if (VAR11 <= 8)
break;
goto VAR22;
}
break;
case VAR28:
if (strstr(VAR10->VAR10.VAR13, "")
|| strstr(VAR10->VAR10.VAR13, ""))
goto VAR22;

switch (VAR6->VAR20.VAR23) {
case VAR24:
case VAR25:
if (VAR11 <= 1024)
break;

case VAR26:
if (VAR11 <= 1023)
break;

default:
goto VAR22;
}
break;
default:

goto VAR22;
}

VAR2->VAR29 = VAR11;
if (FUN8(VAR2->VAR30)) {
if (!FUN9(VAR4)) {
FUN10(FUN11(VAR6), ""
"", VAR2->VAR13);
return -VAR17;
}
VAR10->VAR31 = 1;
}
VAR10->VAR4 = VAR4;

FUN12(FUN11(VAR6), "",
VAR2->VAR13,
VAR4->VAR32 & 0x0f,
(VAR4->VAR32 & VAR33) ? "" : "",
({ char *VAR34;
switch (FUN7(VAR4)) {
case VAR21:
VAR34 = "";
break;
case VAR28:
VAR34 = "";
break;
case VAR27:
VAR34 = "";
break;
default:
VAR34 = "";
break;
} VAR34; }),
VAR11, VAR10->VAR31 ? "" : "");


VAR10->VAR35 = VAR10->VAR36 = 0;
VAR12 = 0;
VAR22:
return VAR12;
}