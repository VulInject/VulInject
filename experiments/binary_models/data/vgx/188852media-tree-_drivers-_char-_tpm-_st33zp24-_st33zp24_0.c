static int FUN1(struct VAR1 *VAR2, u8 VAR3, unsigned long VAR4,
VAR5 *VAR6, bool VAR7)
{
struct VAR8 *VAR9 = FUN2(&VAR2->VAR10);
unsigned long VAR11;
int VAR12 = 0;
bool VAR13 = false;
bool VAR14;
u32 VAR15;
u8 VAR16;


VAR16 = FUN3(VAR2);
if ((VAR16 & VAR3) == VAR3)
return 0;

VAR11 = VAR17 + VAR4;

if (VAR2->VAR18 & VAR19) {
VAR15 = VAR9->VAR20;
FUN4(VAR9);
FUN5(VAR9->VAR21);

do {
if (VAR12 == -VAR22 && FUN6(VAR23))
FUN7(VAR24);

VAR4 = VAR11 - VAR17;
if ((long) VAR4 <= 0)
return -1;

VAR12 = FUN8(*VAR6,
VAR15 != VAR9->VAR20,
VAR4);
FUN4(VAR9);
VAR14 = FUN9(VAR2, VAR3,
VAR7, &VAR13);
if (VAR12 >= 0 && VAR14) {
if (VAR13)
return -VAR25;
return 0;
}
} while (VAR12 == -VAR22 && FUN6(VAR23));

FUN10(VAR9->VAR21);

} else {
do {
FUN11(VAR26);
VAR16 = VAR2->VAR27->FUN12(VAR2);
if ((VAR16 & VAR3) == VAR3)
return 0;
} while (FUN13(VAR17, VAR11));
}

return -VAR28;
}