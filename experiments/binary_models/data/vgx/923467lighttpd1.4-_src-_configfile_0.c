static void FUN1 (VAR1 *VAR2) {
int VAR3  = 1;
int VAR4  = 1;
int VAR5  = 1;
int VAR6  = 1;
int VAR7  = 1;
int VAR8     = 1;
int VAR9      = 0;
int VAR10       = 0;
int VAR11    = 0;
const char *VAR12 = NULL;

for (uint32_t VAR13 = 0; VAR13 < VAR2->VAR14.VAR15->VAR16; ++VAR13) {
VAR17 *VAR18 = &((VAR19 *)VAR2->VAR14.VAR15->VAR20[VAR13])->VAR21;

if (FUN2(VAR18, FUN3("")))
VAR3 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR5 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR4 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR8 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR8 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR8 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR8 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR8 = 0;
else if (0 == FUN4(VAR18->VAR22, "", sizeof("")-1)) {
if (FUN2(VAR18, FUN3(""))) {
if (!VAR9) {
VAR9 = 1;
if (VAR12)
FUN5(VAR2->VAR23, VAR24, VAR25,
""
"", VAR12);
}
}
else if (!VAR9)
VAR10 = 1;

if (FUN2(VAR18, FUN3("")))
VAR6 = 0;
else if (FUN2(VAR18, FUN3("")))
VAR7 = 0;
}
else if (0 == FUN4(VAR18->VAR22, "", sizeof("")-1)) {
if (FUN2(VAR18, FUN3("")))
VAR11 |= 2;
else if (!(VAR11 & 2))
VAR11 |= 1;
}
else if (   0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)
|| 0 == FUN4(VAR18->VAR22, "",
sizeof("")-1)) {
if (NULL == VAR12)
VAR12 = VAR18->VAR22;
}
}



if (!FUN6(VAR2, FUN3(""))
&& !FUN6(VAR2, FUN3(""))) {
if (!VAR3)
FUN7(VAR2, FUN3(""));
VAR3 = 0;
}

if (!FUN6(VAR2, FUN3(""))
&& !FUN6(VAR2, FUN3(""))) {
if (!VAR4)
FUN7(VAR2, FUN3(""));
VAR4 = 0;
}



if (VAR3) {

FUN8(VAR2, FUN3(""));
}



if (VAR4) {
FUN9(VAR2->VAR14.VAR15, FUN3(""));
}

if (VAR5) {
FUN9(VAR2->VAR14.VAR15, FUN3(""));
}

if (VAR8) {
FUN10(VAR2);
}


if (VAR9) {
if (VAR6) {
const char *VAR26;
if (  (VAR26=FUN11(VAR2,FUN3(""),
FUN3("")))
||(VAR26=FUN11(VAR2,FUN3(""),
FUN3("")))
||(VAR26=FUN11(VAR2,FUN3(""),
FUN3(""))))
FUN12(VAR2, FUN3(""), VAR26);
}
if (VAR7) {
if (FUN11(VAR2, FUN3(""),
FUN3("")))
FUN12(VAR2, FUN3(""), "");
}
}

if (VAR10) {
FUN8(VAR2, FUN3(""));
}

if (VAR11 & 1) {
FUN8(VAR2, FUN3(""));
}
}