static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR5;
int VAR6;
int VAR7;
struct VAR8 *VAR9, *VAR10, *VAR11;
struct VAR12 *VAR13 =
FUN2(&VAR2->VAR14, sizeof(struct VAR12),
VAR15);
struct VAR16 *VAR14 = &VAR2->VAR14;

if (!VAR13)
return -VAR17;

VAR9 = FUN3(VAR2->VAR14.VAR18,
"", 0);
if (!VAR9) {
FUN4(&VAR2->VAR14, "");
return -VAR19;
}
for (VAR7 = 0; VAR7 < VAR4->VAR20; VAR7++) {
if (VAR21[VAR7].VAR22)
continue;
VAR21[VAR7].VAR23 = VAR9;
}

VAR4->VAR14 = VAR14;

VAR10 = FUN3(VAR2->VAR14.VAR18,
"", 0);
if (!VAR10) {
FUN4(&VAR2->VAR14,
"");
return -VAR19;
}
for (VAR7 = 0; VAR7 < VAR4->VAR20; VAR7++) {
if (VAR21[VAR7].VAR24)
continue;
VAR21[VAR7].VAR25 = VAR10;
}

VAR11 = FUN3(VAR2->VAR14.VAR18,
"", 0);
if (!VAR11) {
FUN4(&VAR2->VAR14,
"");
return -VAR19;
}
VAR21[VAR26].VAR25
= VAR11;

VAR6 = FUN5(VAR4, "");
if (VAR6) {
FUN4(&VAR2->VAR14, "", VAR6);
return VAR6;
}

VAR13->VAR27 =
FUN6(VAR14->VAR18, "", 0);
if (FUN7(VAR13->VAR27)) {
VAR6 = FUN8(VAR14, VAR13->VAR27,
"");
if (VAR6)
FUN9(&VAR2->VAR14, "",
VAR28, VAR6);
FUN10(VAR13->VAR27, 0);
}

VAR13->VAR29 =
FUN6(VAR14->VAR18, "", 0);
if (FUN7(VAR13->VAR29)) {
VAR6 = FUN8(VAR14, VAR13->VAR29,
"");
if (VAR6)
FUN9(&VAR2->VAR14, "",
VAR28, VAR6);
FUN10(VAR13->VAR29, 0);
}
FUN11(VAR4, VAR13);

VAR6 = FUN12(&VAR2->VAR14, VAR4);

if (VAR6)
FUN4(&VAR2->VAR14, "",
VAR28, VAR6);
return VAR6;
}