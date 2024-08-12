int FUN1(struct VAR1 *VAR2,
unsigned long VAR3,
unsigned long VAR4,
int VAR5, int VAR6, int VAR7,
unsigned short VAR8,
unsigned short VAR9,
struct VAR10 **VAR11)
{
struct VAR10 *VAR12;
int VAR13;

VAR13 = FUN2(VAR2, VAR8, VAR9, &VAR12);
if (VAR13 < 0)
return VAR13;

VAR12->VAR5 = -1;
VAR12->VAR6 = -1;
VAR12->VAR7 = -1;

VAR12->VAR14 = FUN3(VAR2->VAR15, VAR3, 4, "");
if (!VAR12->VAR14) {
FUN4(VAR16 "", VAR3);
return -VAR17;
}
VAR12->VAR3 = VAR3;
if ((long)VAR4 >= 0) {
VAR12->VAR18 = FUN3(VAR2->VAR15, VAR4, 8,
"");
if (!VAR12->VAR18) {
FUN4(VAR16
"", VAR4);
return -VAR19;
}
}
VAR12->VAR4 = VAR4;
if (!(VAR9 & VAR20))
if (FUN5(VAR2->VAR15, VAR5, VAR21, 0,
"", (void *) VAR12)) {
FUN4(VAR16 "", VAR5);
return -VAR17;
}
VAR12->VAR5 = VAR5;
VAR2->VAR22 = VAR12->VAR5;
if (!(VAR9 & VAR23) &&
FUN6(VAR2->VAR15, VAR6, "")) {
FUN4(VAR16 "", VAR6);
return -VAR17;
}
VAR12->VAR6 = VAR6;
if (!(VAR9 & VAR24) && VAR6 != VAR7 && VAR7 >= 0 &&
FUN6(VAR2->VAR15, VAR7, "")) {
FUN4(VAR16 "", VAR7);
return -VAR17;
}
if (VAR6 == VAR7 || VAR7 < 0) {
VAR12->VAR25 = 1;
VAR12->VAR7 = VAR12->VAR6;
} else
VAR12->VAR7 = VAR7;

if (VAR8 == VAR26) {
VAR12->VAR27 = 1;
VAR12->VAR8 = VAR28; 
FUN7(VAR12, 1);
}


if (FUN8(VAR12) < 0)
return -VAR19;
FUN9(VAR12);

if (VAR12->VAR8 & VAR29) {
if (VAR12->VAR18 == NULL)
FUN4(VAR16 ""
"");
}


VAR12->VAR30 = VAR31;
VAR12->VAR32 = VAR33;

*VAR11 = VAR12;
return 0;
}