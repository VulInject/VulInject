static VAR1 FUN1(int VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
irqreturn_t VAR6 = VAR7;
int VAR8;

if (VAR5->VAR9)
do {
int VAR10;

VAR10 = FUN2(VAR5->VAR9);
if (!VAR10)
break;


VAR5->VAR11.VAR12 = FUN3(VAR5->VAR13[0]->VAR14);
VAR8 = FUN4(VAR5, VAR12);
if (VAR8)
goto VAR15;

VAR6 = VAR16;


} while (VAR5->VAR17 == 1);

do {
u32 VAR18, VAR19;
bool VAR20 = false;

VAR8 = FUN5(VAR5);
if (VAR8)
goto VAR15;

VAR18 = FUN6(VAR21,
VAR5->VAR11.VAR22) &
FUN6(VAR23,
VAR5->VAR11.VAR22);

if (!(VAR18)) {
FUN7(&VAR5->VAR24);
return VAR6;
}


VAR19 = VAR18 &
VAR25;
if (VAR19) {
VAR8 = FUN8(VAR5->VAR26,
VAR27,
VAR21,
~VAR19);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR28) {
VAR8 = FUN4(VAR5, VAR29, &VAR20);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR30) {
VAR8 = FUN4(VAR5, VAR12);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR31) {
VAR8 = FUN4(VAR5, VAR32);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR33) {
VAR8 = FUN4(VAR5, VAR34);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR35) {
VAR8 = FUN4(VAR5, VAR36);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR37) {
VAR8 = FUN4(VAR5, VAR38);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR39) {
VAR8 = FUN4(VAR5, VAR40);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR41) {
VAR8 = FUN4(VAR5, VAR42, VAR20);
if (VAR8)
goto VAR15;
}

if (VAR18 & VAR43) {
VAR8 = FUN4(VAR5, VAR44);
if (VAR8)
goto VAR15;
}


if (VAR18 & VAR45 ||
VAR5->VAR46.VAR47 > VAR48) {
VAR8 = FUN4(VAR5, VAR49);
if (VAR8)
goto VAR15;


if (VAR5->VAR46.VAR47 == VAR50) {
FUN7(&VAR5->VAR24);
return VAR16;
}
}

VAR6 = VAR16;
} while (1);

VAR15:
FUN7(&VAR5->VAR24);

FUN9(VAR5->VAR51, "",
VAR8, VAR5->VAR11.VAR22);
FUN10(VAR5);
FUN11(VAR5);
FUN12(VAR5);

return VAR6;
}