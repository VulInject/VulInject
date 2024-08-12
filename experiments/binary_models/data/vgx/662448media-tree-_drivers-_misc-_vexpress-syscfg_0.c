static int FUN1(struct VAR1 *VAR2,
int VAR3, bool write, VAR4 *VAR5)
{
struct VAR6 *VAR7 = VAR2->VAR7;
u32 VAR8, VAR9;
int VAR10;
long VAR11;

if (FUN2(VAR3 > VAR2->VAR12))
return -VAR13;

VAR8 = FUN3(VAR7->VAR14 + VAR15);
if (FUN2(VAR8 & VAR16))
return -VAR17;

VAR8 = VAR2->template[VAR3];
VAR8 |= VAR16;
VAR8 |= write ? VAR18 : 0;


if (!write)
*VAR5 = 0xdeadbeef;

FUN4(VAR7->VAR19, "",
VAR2, VAR8, *VAR5);
FUN5(*VAR5, VAR7->VAR14 + VAR20);
FUN5(0, VAR7->VAR14 + VAR21);
FUN5(VAR8, VAR7->VAR14 + VAR15);
FUN6();


VAR10 = 100;
VAR11 = 100;
do {
if (!FUN7()) {
FUN8(VAR22);
FUN9(FUN10(VAR11));
if (FUN11(VAR23))
return -VAR24;
} else {
FUN12(VAR11);
}

VAR9 = FUN3(VAR7->VAR14 + VAR21);
if (VAR9 & VAR25)
return -VAR26;

if (VAR11 > 20)
VAR11 -= 20;
} while (--VAR10 && !(VAR9 & VAR27));
if (FUN13(!VAR10))
return -VAR28;

if (!write) {
*VAR5 = FUN3(VAR7->VAR14 + VAR20);
FUN4(VAR7->VAR19, "", VAR2, *VAR5);
}

return 0;
}