int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR3 *VAR5;
struct VAR6 *VAR7, *VAR8;

if (!FUN2(VAR2))
return 0;

for (VAR5 = VAR4->VAR9; VAR5->VAR9 != VAR4; VAR5 = VAR5->VAR9) {
ino_t VAR10, VAR11;
uint32_t VAR12, VAR13;

FUN3();
VAR7 = FUN4(VAR5, struct VAR6, VAR14);
VAR8 = FUN4(VAR5->VAR9, struct VAR6, VAR14);

if (VAR7->VAR15 != VAR16 && VAR7->VAR15 != VAR17 &&
VAR7->VAR15 != VAR18) {
FUN5(VAR2, "", VAR7->VAR15);
FUN6(VAR2, VAR7->VAR19);
return -VAR20;
}
if (VAR8->VAR15 != VAR16 && VAR8->VAR15 != VAR17 &&
VAR8->VAR15 != VAR18) {
FUN5(VAR2, "", VAR8->VAR15);
FUN6(VAR2, VAR8->VAR19);
return -VAR20;
}

if (VAR7->VAR15 != VAR16 && VAR8->VAR15 == VAR16) {
FUN5(VAR2, "");
goto VAR21;
}

if (VAR7->VAR15 == VAR16 && VAR8->VAR15 != VAR16)
continue;

if (VAR7->VAR15 == VAR16 && VAR8->VAR15 == VAR16) {

if (VAR7->VAR22 < VAR8->VAR22) {
FUN5(VAR2, "");
goto VAR21;
}
continue;
}


VAR10 = FUN7(VAR2, &VAR7->VAR23);
VAR11 = FUN7(VAR2, &VAR8->VAR23);

if (VAR10 < VAR11)
continue;
if (VAR10 > VAR11) {
FUN5(VAR2, "",
(unsigned long)VAR10, (unsigned long)VAR11);
goto VAR21;
}

VAR12 = FUN8(VAR2, &VAR7->VAR23);
VAR13 = FUN8(VAR2, &VAR8->VAR23);

if (VAR12 > VAR13) {
FUN5(VAR2, "",
VAR12, VAR13);
goto VAR21;
}
}

return 0;

VAR21:
FUN9(VAR2, "");
FUN6(VAR2, VAR7->VAR19);
FUN9(VAR2, "");
FUN6(VAR2, VAR8->VAR19);
return -VAR20;
return 0;
}