static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4, *VAR5;
struct VAR6 *VAR7, *VAR8;
struct VAR9 *VAR9;
struct VAR10 *VAR11;
struct VAR12 *VAR13;
struct VAR14 *VAR15;
struct VAR16 *VAR17;
long VAR18;
int VAR19;

if (VAR2 == NULL)
return;

VAR13 = VAR2->VAR13;
VAR17 = VAR13->VAR17;
VAR11 = VAR2->VAR20;
VAR9 = VAR2->VAR9;
if (VAR2->VAR21 & VAR22)
goto VAR23;
if (!VAR11)		
goto VAR24;

VAR5 = (struct VAR3 *) FUN2(VAR2->VAR11);
VAR8 = (struct VAR6 *) (VAR5+1);

VAR4 = (struct VAR3 *) VAR11->VAR25;
FUN3(VAR11, sizeof(*VAR4));
VAR7 = (struct VAR6 *) VAR11->VAR25;
FUN3(VAR11, sizeof(*VAR7));
if (VAR7->VAR26 & 0xa9) {	
FUN4("",
VAR8->VAR26, VAR7->VAR26,
VAR17->VAR27, VAR17->VAR28);
VAR24:		if (VAR9)
VAR9->VAR29->VAR30 = -VAR31;
goto VAR23;
}

VAR18 = VAR8->VAR32 << 9;
switch (VAR8->VAR26) {
case VAR33:
case VAR34:
if (VAR11->VAR35 < VAR18) {
FUN4("",
"",
(long) VAR17->VAR27, VAR17->VAR28,
VAR11->VAR35, VAR18);
VAR9->VAR29->VAR30 = -VAR31;
break;
}
if (VAR18 > VAR2->VAR36.VAR37) {
FUN5("",
"",
(long) VAR17->VAR27, VAR17->VAR28,
VAR18, VAR2->VAR36.VAR37);
VAR9->VAR29->VAR30 = -VAR31;
break;
}
FUN6(VAR11, VAR2->VAR9->VAR29, VAR2->VAR36, VAR18);
case VAR38:
case VAR39:
FUN7(&VAR17->VAR40);
VAR15 = FUN8(VAR13, VAR11->VAR41);
if (VAR15)
VAR15->VAR42 = 0;
FUN9(&VAR17->VAR40);
break;
case VAR43:
if (VAR11->VAR35 < 512) {
FUN10("",
"",
(long) VAR17->VAR27, VAR17->VAR28,
VAR11->VAR35);
break;
}
if (FUN11(VAR11))
break;
FUN7(&VAR17->VAR40);
FUN12(VAR17, VAR13, VAR11->VAR25);
FUN9(&VAR17->VAR40);
break;
default:
FUN10("",
VAR8->VAR26,
FUN13(FUN14(&VAR4->VAR44)),
VAR4->VAR45);
}
VAR23:
FUN7(&VAR17->VAR40);
if (VAR13->VAR46 > 0
&& --VAR13->VAR46 > 0
&& VAR13->VAR47 == 0) {
FUN15(VAR17, &VAR19);
if (VAR19 > 0) {
FUN16(VAR13);
VAR13->VAR47++;
}
}

FUN17(VAR2);

if (VAR9 && --VAR9->VAR48 == 0 && VAR9->VAR36.VAR37 == 0)
FUN18(VAR17, VAR9);

FUN9(&VAR17->VAR40);
FUN19(VAR17);
FUN20(VAR11);
}