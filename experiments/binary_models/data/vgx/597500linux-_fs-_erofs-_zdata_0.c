static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
erofs_off_t VAR5,
struct VAR6 **VAR7,
bool VAR8)
{
struct VAR9 *VAR9 = VAR2->VAR9;
struct VAR10 *VAR11 = &VAR2->VAR11;
erofs_off_t VAR12;
int VAR13;

if (VAR8) {
VAR11->VAR14 = VAR5;
VAR13 = FUN2(VAR9, VAR11,
VAR15);
if (VAR13)
return;


if (VAR4) {
loff_t VAR16 = FUN3(VAR4);

VAR12 = FUN4(VAR11->VAR14 + VAR11->VAR17, VAR18);
FUN5(VAR4, VAR16, VAR12 - VAR16);
return;
}
VAR5 = FUN4(VAR5, VAR18);
} else {
VAR5 = FUN4(VAR11->VAR14, VAR18);

if (!VAR11->VAR17)
return;
}

VAR12 = VAR11->VAR14 + VAR11->VAR17 - 1;
while (VAR12 >= VAR5) {
pgoff_t VAR19 = VAR12 >> VAR20;
struct VAR6 *VAR6;

VAR6 = FUN6(VAR9->VAR21, VAR19);
if (VAR6) {
if (FUN7(VAR6)) {
FUN8(VAR6);
} else {
VAR13 = FUN9(VAR2, VAR6, VAR7);
if (VAR13)
FUN10(VAR9->VAR22,
"",
VAR19, FUN11(VAR9)->VAR23);
}
FUN12(VAR6);
}

if (VAR12 < VAR18)
break;
VAR12 = (VAR19 << VAR20) - 1;
}
}