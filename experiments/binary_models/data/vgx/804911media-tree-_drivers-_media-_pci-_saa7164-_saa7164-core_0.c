static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
struct VAR4 *VAR5;
struct VAR6 *VAR7;
struct VAR8 *VAR9;
int VAR10, VAR11;

if (VAR12 == 0)
return 0;

FUN2(VAR9, &VAR13) {
VAR5 = FUN3(VAR9, struct VAR4, VAR14);
FUN4(VAR2, "", VAR5->VAR15, VAR5);


VAR7 = &VAR5->VAR16;
FUN5(&VAR7->VAR17);

FUN4(VAR2, "",
VAR7->VAR18, FUN6(VAR7->VAR18));

FUN4(VAR2, "",
VAR7->VAR19, FUN6(VAR7->VAR19));

FUN4(VAR2, "",
VAR7->VAR20, FUN6(VAR7->VAR20));

FUN4(VAR2, "",
VAR7->VAR21, FUN6(VAR7->VAR21));
VAR11 = 0;
FUN4(VAR2, "");
FUN4(VAR2, "");
for (VAR10 = 0; VAR10 < VAR7->VAR22; VAR10++) {
if (VAR11 == 0)
FUN4(VAR2, "", VAR10);

FUN4(VAR2, "", FUN7(VAR7->VAR23 + VAR10));

if (++VAR11 == 16) {
FUN4(VAR2, "");
VAR11 = 0;
}
}

VAR11 = 0;
FUN4(VAR2, "");
FUN4(VAR2, "");
for (VAR10 = 0; VAR10 < VAR7->VAR24; VAR10++) {
if (VAR11 == 0)
FUN4(VAR2, "", VAR10);

FUN4(VAR2, "", FUN7(VAR7->VAR25 + VAR10));

if (++VAR11 == 16) {
FUN4(VAR2, "");
VAR11 = 0;
}
}

FUN8(&VAR7->VAR17);

}

return 0;
}