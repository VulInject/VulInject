static void FUN1(struct VAR1 *VAR2)
{
for(;;) {
struct VAR3 *VAR4;
int VAR5 = FUN2(VAR6);

if(VAR5 & (VAR7|VAR8|VAR9) || !(VAR5 & VAR10))
return;

if (FUN3(VAR11, VAR12))
return;

FUN4(FUN2(VAR13));

if(!VAR14) {
if(VAR15!=VAR16) {
FUN5(VAR17, VAR2,
""
"");
}


if(!(FUN6(0) & VAR18)) {
FUN5(VAR17, VAR2,
"");
continue;
}

VAR14 = FUN7(&VAR19, VAR20, FUN6(0) & 0x3f);

if (!VAR14) {
FUN8(VAR2);
FUN5(VAR17, VAR2,
""
"",
VAR20, FUN6(0) & 0x3f);
continue;
}

VAR4 = FUN9(VAR14);
VAR4->VAR21 = FUN6(0);
VAR4->VAR22 &= ~VAR23;

VAR24=0;


continue;
}

VAR4 = FUN9(VAR14);
VAR4->VAR21 = FUN6(0);

switch (FUN6(0)) {
case VAR25:
if (!VAR26)
FUN10(VAR27, VAR14,
"");

VAR4->VAR22 |= VAR23;
break;

case VAR28:
VAR4->VAR22 |= VAR29;
break;

case VAR30:
if (VAR31==1) {
FUN10(VAR32, VAR14,
""
"");
VAR31=2;	
} else
FUN10(VAR32, VAR14,
"");
break;

case VAR33:
break;

case VAR34:
break;

case VAR35:
if(VAR24<2 || VAR24<FUN6(1)+2) {

continue;
}

switch (FUN6(2)) {
case VAR36:
{
long VAR37;

if (FUN6(1) != 3) {
FUN10(VAR17, VAR14,
"");
break;
}

if (!FUN11(VAR2)->VAR38)
break;

FUN12(VAR39, FUN13(VAR14));
FUN14(&FUN6(0));
FUN12("");

VAR37 = (FUN6(3) * 4 + 49) / 50;

if (VAR40) {

if (VAR37 > 9 || FUN6(4) < 1 || FUN6(4) > 8) {
FUN15(VAR30);
FUN10(VAR32,
VAR14,
"");
break;
}

VAR41 |= ((VAR37 - 2) << 4) + FUN6(4);
} else if (VAR37 <= 9 && FUN6(4) >= 1) {
FUN15(VAR35);
FUN15(3);
FUN15(VAR36);
if (VAR37 < 4) {
VAR37 = 4;
FUN15(50);
} else
FUN15(FUN6(3));

if (FUN6(4) > 8)
FUN6(4) = 8;

FUN15(FUN6(4));

VAR41 |= ((VAR37 - 2) << 4) + FUN6(4);
} else {

FUN10(VAR32,
VAR14,
"");
FUN15(VAR30);
}


VAR31=2;
FUN16(VAR41);
}
break;

case VAR42:
{
int VAR43;

for(VAR43=0; VAR43<8; VAR43++) {
FUN11(VAR2)->VAR44[VAR43]=0;
FUN11(VAR2)->VAR40[VAR43]=0;
}

}
break;

case VAR45:
case VAR46:
case VAR47:
default:
FUN15(VAR30);
break;
}
break;
}

VAR24=0;
}
}