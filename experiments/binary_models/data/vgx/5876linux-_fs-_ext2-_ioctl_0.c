long FUN1(struct VAR1 *VAR2, unsigned int VAR3, unsigned long VAR4)
{
struct VAR5 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = FUN3(VAR5);
unsigned short VAR8;
int VAR9;

FUN4 ("", VAR3, VAR4);

switch (VAR3) {
case VAR10:
return FUN5(VAR5->VAR11, (int VAR12 *) VAR4);
case VAR13: {
__u32 VAR14;

if (!FUN6(&VAR15, VAR5))
return -VAR16;
VAR9 = FUN7(VAR2);
if (VAR9)
return VAR9;
if (FUN8(VAR14, (int VAR12 *) VAR4)) {
VAR9 = -VAR17;
goto VAR18;
}

FUN9(VAR5);
VAR5->VAR19 = FUN10(VAR5);
VAR5->VAR11 = VAR14;
FUN11(VAR5);

FUN12(VAR5);
VAR18:
FUN13(VAR2);
return VAR9;
}
case VAR20:
if (FUN14(VAR5->VAR21, VAR22)
&& FUN15(VAR5->VAR23)
&& VAR7->VAR24) {
VAR8 = VAR7->VAR24->VAR25.VAR26;
return FUN5(VAR8, (int VAR12 *)VAR4);
}
return -VAR27;
case VAR28: {

if (!FUN14(VAR5->VAR21, VAR22) ||!FUN15(VAR5->VAR23))
return -VAR27;

if (!FUN6(&VAR15, VAR5))
return -VAR29;

if (FUN8(VAR8, (int VAR12 *)VAR4))
return -VAR17;

VAR9 = FUN7(VAR2);
if (VAR9)
return VAR9;

if (VAR8 > VAR30)
VAR8 = VAR30;



FUN16(&VAR7->VAR31);
if (!VAR7->VAR24)
FUN17(VAR5);

if (VAR7->VAR24){
struct VAR32 *VAR33 = &VAR7->VAR24->VAR25;
VAR33->VAR26 = VAR8;
} else {
VAR9 = -VAR34;
}

FUN18(&VAR7->VAR31);
FUN13(VAR2);
return VAR9;
}
default:
return -VAR27;
}
}