static void FUN1(struct VAR1 *VAR2, int VAR3)
{
int VAR4, VAR5 = 0;
struct VAR6 *VAR7 = NULL;
char VAR8[12];

FUN2(VAR2);

FUN3(!VAR2);
VAR7 = FUN4(VAR2);
FUN3(!VAR7);

FUN5(VAR7->VAR9);


FUN6(VAR7);

FUN7(VAR7);


FUN8(!FUN9(&VAR7->VAR10));

FUN10(&VAR7->VAR11);

FUN11(VAR7);

FUN12(VAR7);


FUN13(VAR7);

FUN14(VAR7);

FUN15(VAR2);

FUN16(VAR7);


if (VAR7->VAR12) {
VAR4 = FUN17(VAR7, 1);
if (VAR4 < 0) {
FUN18(VAR4);
return;
}
}

if (VAR7->VAR13 != VAR14)
FUN19(VAR7);

if (VAR7->VAR12)
FUN20(VAR7, 1);

FUN21(VAR7);


if (!VAR3 && !FUN22(VAR7) && VAR7->VAR15 &&
!FUN23(VAR7))
VAR5 = 1;

if (VAR7->VAR12)
FUN24(VAR7, VAR5);

FUN25(&VAR7->VAR16);
FUN5(VAR7->VAR17);

if (VAR5)
FUN26(VAR7->VAR15, strlen(VAR7->VAR15));

FUN27(&VAR7->VAR18, VAR19);

if (FUN22(VAR7))
snprintf(VAR8, sizeof(VAR8), "");
else
snprintf(VAR8, sizeof(VAR8), "", VAR7->VAR20);

FUN28(VAR21 "",
VAR7->VAR22, VAR8);

FUN29(VAR7);
FUN30(VAR7);
VAR2->VAR23 = 0;
VAR2->VAR24 = NULL;
}