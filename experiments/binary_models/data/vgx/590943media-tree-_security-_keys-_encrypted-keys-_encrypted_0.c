static int FUN1(struct VAR1 *VAR2,
const char *VAR3, const char *VAR4)
{
struct VAR5 *VAR6;
u8 VAR7[VAR8];
const VAR9 *VAR10;
VAR9 *VAR11;
const char *VAR12;
unsigned int VAR13;
size_t VAR14;
size_t VAR15;
int VAR16;

VAR13 = FUN2(VAR2->VAR17, VAR18);
VAR15 = (VAR19 + 1 + VAR13 + VAR8) * 2;
if (strlen(VAR4) != VAR15)
return -VAR20;

VAR12 = VAR4 + (2 * VAR19) + 2;
VAR16 = FUN3(VAR2->VAR21, VAR4, VAR19);
if (VAR16 < 0)
return -VAR20;
VAR16 = FUN3(VAR2->VAR22, VAR12,
VAR13);
if (VAR16 < 0)
return -VAR20;

VAR11 = VAR2->VAR3 + VAR2->VAR23;
VAR16 = FUN3(VAR11, VAR12 + (VAR13 * 2),
VAR8);
if (VAR16 < 0)
return -VAR20;

VAR6 = FUN4(VAR2, &VAR10, &VAR14);
if (FUN5(VAR6))
return FUN6(VAR6);

VAR16 = FUN7(VAR2, VAR3, VAR10, VAR14);
if (VAR16 < 0) {
FUN8("", VAR16);
goto VAR24;
}

VAR16 = FUN9(VAR7, VAR25, VAR10, VAR14);
if (VAR16 < 0)
goto VAR24;

VAR16 = FUN10(VAR2, VAR7, sizeof VAR7);
if (VAR16 < 0)
FUN8("", VAR16);
VAR24:
FUN11(&VAR6->VAR26);
FUN12(VAR6);
return VAR16;
}