static int FUN1(VAR1 *VAR2, VAR1 *VAR3,
VAR1 *VAR4, VAR5 *VAR6)
{
VAR7 *VAR8 = FUN2(VAR6->VAR9,
&VAR10);
apr_status_t VAR11;
VAR12 *VAR13 = NULL;
const char *VAR14 = "";

VAR15 = VAR6;
VAR16 = VAR2;

VAR13 = FUN3(VAR14);
if (!VAR13) {
VAR13 = FUN4(VAR14, sizeof(*VAR13));
VAR13->VAR17 = -1;
VAR13->VAR18 = VAR13->VAR19 = VAR13->VAR20 = NULL;
}

if (FUN5(VAR6) == 0) {

FUN6(VAR21, VAR22, 0, VAR6,
FUN7(02710) "");
FUN6(VAR21, VAR22, 0, VAR6,
FUN7(02711) ""
"");
return VAR23;
}

VAR11 = FUN8(&VAR24, NULL,
VAR25, NULL, VAR6, VAR2, 0);
if (VAR11 != VAR26) {
FUN6(VAR21, VAR22, VAR11, VAR6,
FUN7(02712) "");
return VAR23;
}

FUN9(VAR2, (void *)VAR6, VAR27,
VAR28);

if (VAR8->VAR29) {
if (!VAR8->VAR30) {

FUN10(&VAR8->VAR31, VAR2);
FUN11(VAR8->VAR31, "");
VAR8->VAR30 =
FUN12(VAR8->VAR31, 2,
sizeof(VAR32 *));
}
VAR11 = FUN13(VAR8->VAR31,
VAR6, VAR8->VAR29,
VAR8->VAR30);
if (VAR11 != VAR26) {
return VAR23;
}
}

if (VAR8->VAR33 && VAR8->VAR30) {
if (VAR8->VAR33->VAR34 > 0
&& VAR8->VAR30->VAR34 > 0) {
FUN6(VAR21, VAR22, 0, VAR6,
FUN7(02713) ""
"");
return VAR23;
}
}

if (VAR8->VAR33 && VAR8->VAR33->VAR34 > 0) {
VAR35 = VAR8->VAR33;
}
else if (VAR8->VAR30 && VAR8->VAR30->VAR34 > 0) {
VAR35 = VAR8->VAR30;
}
else {
FUN6(VAR21, VAR36, 0, VAR6,
FUN7(02714) ""
"");

if (!VAR8->VAR30) { 
VAR35 = FUN12(VAR2, 1,
sizeof(VAR32 *));
}
}



if (!FUN14()) { 
FUN6(VAR21, VAR36, 0, VAR6,
FUN7(02715) ""
"");
}
else {
VAR11 = FUN15(VAR6, VAR2, VAR35);
if (VAR11 != VAR26) {
FUN6(VAR21, VAR22, VAR11, VAR6,
FUN7(02716) "");
return VAR23;
}
}

if (FUN16(VAR37) != VAR38) {
int VAR39 = FUN17(VAR2, VAR6, VAR13);
if (VAR39 != VAR40) {
return VAR39;
}
}


if (FUN16(VAR37) != VAR38
&& !getenv("")) {
int VAR39 = FUN18(VAR2, VAR6);
if (VAR39 != VAR40) {
return VAR39;
}
}

return VAR40;
}