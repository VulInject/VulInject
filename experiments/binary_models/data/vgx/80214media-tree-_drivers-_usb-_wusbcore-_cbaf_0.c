static int FUN1(struct VAR1 *VAR1)
{
int VAR2;
struct VAR3 *VAR4 = &VAR1->VAR5->VAR4;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
size_t VAR10;
void *VAR11, *VAR12;
int VAR13 = 0, VAR14 = 0;

VAR2 = FUN2(
VAR1->VAR15, FUN3(VAR1->VAR15, 0),
VAR16,
VAR17 | VAR18 | VAR19,
0, VAR1->VAR5->VAR20->VAR21.VAR22,
VAR1->VAR23, VAR1->VAR24, VAR25);
if (VAR2 < 0) {
FUN4(VAR4, "",
VAR2);
return VAR2;
}

VAR7 = VAR1->VAR23;
if (VAR2 < sizeof(*VAR7)) {
FUN4(VAR4, ""
"",
(VAR26)VAR2, sizeof(*VAR7));
return VAR2;
}

VAR10 = FUN5(VAR7->VAR27);
if (VAR2 < VAR10) {
FUN4(VAR4, ""
"",
(VAR26)VAR10, sizeof(*VAR7));
return VAR2;
}

VAR11 = VAR1->VAR23 + sizeof(*VAR7);
VAR12 = VAR1->VAR23 + VAR10;
FUN6(VAR4, "",
VAR7->VAR28, VAR10);

while (VAR11 < VAR12) {
u16 VAR29, VAR30;
u32 VAR31;
const char *VAR32;

VAR9 = VAR11;

if (VAR12 - VAR11 < sizeof(*VAR9)) {
FUN4(VAR4, ""
"",
VAR12 - VAR11, sizeof(*VAR9));
break;
}

VAR29 = FUN5(VAR9->VAR33);
VAR30 = FUN5(VAR9->VAR34);
VAR31 = FUN7(VAR9->VAR35);
VAR32 = "";

switch (VAR29) {
case VAR36:

switch (VAR30) {
case VAR37:
VAR32 = "";
VAR13 = 1;
break;
case VAR38:

VAR32 = "";
VAR14 = 1;
break;
}
break;
}

FUN6(VAR4, ""
"",
VAR9->VAR39, VAR29,
VAR30, (VAR26)VAR31, VAR32);

VAR11 += sizeof(*VAR9);
}

if (!VAR13) {
FUN4(VAR4, ""
"");
return -VAR40;
}
if (!VAR14) {
FUN4(VAR4, "");
return -VAR40;
}

return 0;
}