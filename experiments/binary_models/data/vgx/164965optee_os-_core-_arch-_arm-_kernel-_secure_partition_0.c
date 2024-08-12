static VAR1 FUN1(struct VAR2 *VAR3,
const void *VAR4)
{
int VAR5 = 0;
int VAR6 = 0;
VAR7 *VAR8 = NULL;
TEE_Result VAR9 = VAR10;


VAR5 = FUN2(VAR4, 0,
"");
if (VAR5 < 0)
return VAR10;

FUN3(VAR6, VAR4, VAR5) {
uint64_t VAR11 = 0;
uint32_t VAR12 = 0;
uint64_t VAR13 = 0;
uint32_t VAR14 = 0;
uint32_t VAR15 = 0;
uint32_t VAR16 = 0;
size_t VAR17 = 0;
vaddr_t VAR18 = 0;

VAR8 = NULL;


if (!FUN4(VAR4, VAR6, "",
&VAR11)) {
VAR18 = VAR3->VAR19.VAR20 + VAR11;
} else {

continue;
}

if (!FUN4(VAR4, VAR6, "", &VAR13)) {
FUN5("");
return VAR21;
}


if (FUN6(VAR4, VAR6, "", &VAR14)) {
FUN5("");
return VAR21;
}

if (FUN7(VAR14, VAR22, &VAR17))
return VAR23;


if (FUN6(VAR4, VAR6, "", &VAR12)) {
FUN5("");
return VAR21;
}


switch (VAR12 & VAR24) {
case VAR25:
VAR16 = VAR26;
break;
case VAR27:
VAR16 = VAR28;
break;
case VAR29:
VAR16 = VAR30;
break;
default:
FUN5("");
return VAR21;
}

VAR9 = FUN6(VAR4, VAR6, "", &VAR15);
if (VAR9 != VAR10 && VAR9 != VAR31) {
FUN5("");
return VAR21;
}


if (VAR12 & VAR32) {
FUN5("");
return VAR21;
}

if (VAR15 & VAR33) {

struct VAR34 *VAR35 = NULL;
unsigned int VAR36 = 0;

VAR8 = FUN8(&VAR37, VAR17);
if (!VAR8)
return VAR38;

VAR13 = FUN9(VAR8);

VAR35 = FUN10(VAR14,
VAR39, true);
if (!VAR35) {
VAR9 = VAR38;
goto VAR40;
}

VAR9 = FUN11(VAR35, &VAR36, VAR13, VAR14);
if (VAR9) {
FUN12(VAR35);
goto VAR40;
}

VAR9 = FUN13(&VAR3->VAR19, &VAR18, VAR17, VAR16, 0, VAR35, 0);
FUN12(VAR35);
if (VAR9)
goto VAR40;
} else {

VAR9 = FUN14(&VAR3->VAR19, VAR18, VAR17, VAR16);
if (VAR9)
return VAR9;
}
}

return VAR10;

VAR40:
FUN15(VAR8);
return VAR9;
}