static void FUN1(void)
{
int VAR1, VAR2 = 0;
struct VAR3 *VAR4 = FUN2();
struct VAR5 *VAR6;
struct VAR7 *VAR8;
struct VAR9 *VAR10;

VAR4->VAR11 = VAR12->VAR11;

switch (VAR4->VAR4) {
case VAR13:
VAR6 = FUN3(VAR4, VAR14, VAR15);
if (!VAR6)
return;
FUN4(VAR6, "",
VAR4->VAR16, VAR4->VAR17);
if (VAR4->VAR11 != VAR18)
FUN4(VAR6, "", VAR4->VAR11);
if (VAR4->VAR19 != VAR20)
FUN4(VAR6, "",
(VAR4->VAR19 == VAR21 ?
"" : ""),
VAR4->VAR22);
FUN4(VAR6,
"",
VAR4->argv[0],
VAR4->argv[1],
VAR4->argv[2],
VAR4->argv[3],
VAR4->VAR23);
FUN5(VAR6);
FUN6(VAR6, VAR4->VAR24);
FUN7(VAR6);
break;
case VAR25:
FUN8(VAR4);
break;
default:
FUN9();
break;
}

for (VAR8 = VAR4->VAR8; VAR8; VAR8 = VAR8->VAR26) {

VAR6 = FUN3(VAR4, VAR14, VAR8->VAR27);
if (!VAR6)
continue; 

switch (VAR8->VAR27) {

case VAR28: {
struct VAR29 *VAR30 = (void *)VAR8;

FUN4(VAR6, "", VAR30->VAR31);
FUN10(VAR6, "", &VAR30->VAR32.VAR33);
FUN10(VAR6, "", &VAR30->VAR32.VAR34);
FUN4(VAR6, "", VAR30->VAR32.VAR35);
FUN10(VAR6, "", &VAR30->VAR36.VAR33);
FUN10(VAR6, "", &VAR30->VAR36.VAR34);
FUN10(VAR6, "", &VAR30->VAR36.VAR37);
FUN10(VAR6, "", &VAR30->VAR36.VAR38);
FUN10(VAR6, "", &VAR30->VAR39.VAR33);
FUN10(VAR6, "", &VAR30->VAR39.VAR34);
FUN10(VAR6, "", &VAR30->VAR39.VAR37);
FUN10(VAR6, "", &VAR30->VAR39.VAR38);
FUN4(VAR6, "",
FUN11(&VAR40,
VAR30->VAR32.VAR41));
break; }

}
FUN7(VAR6);
}

if (VAR4->VAR27)
FUN12(VAR4, &VAR2);

if (VAR4->VAR42[0] >= 0) {
VAR6 = FUN3(VAR4, VAR14, VAR43);
if (VAR6) {
FUN4(VAR6, "",
VAR4->VAR42[0], VAR4->VAR42[1]);
FUN7(VAR6);
}
}

if (VAR4->VAR44) {
VAR6 = FUN3(VAR4, VAR14, VAR45);
if (VAR6) {
FUN4(VAR6, "");
FUN13(VAR6, (void *)VAR4->VAR46,
VAR4->VAR44);
FUN7(VAR6);
}
}

for (VAR8 = VAR4->VAR47; VAR8; VAR8 = VAR8->VAR26) {
struct VAR48 *VAR30 = (void *)VAR8;

for (VAR1 = 0; VAR1 < VAR30->VAR49; VAR1++)
if (FUN14(VAR4, VAR30->VAR50[VAR1],
VAR30->VAR51[VAR1],
VAR30->VAR52[VAR1],
VAR30->VAR53[VAR1],
VAR30->VAR54[VAR1],
VAR30->VAR55[VAR1]))
VAR2 = 1;
}

if (VAR4->VAR50 &&
FUN14(VAR4, VAR4->VAR50,
VAR4->VAR51, VAR4->VAR52,
VAR4->VAR53,
VAR4->VAR54, VAR4->VAR55))
VAR2 = 1;

if (VAR4->VAR56.VAR57 && VAR4->VAR56.VAR58) {
VAR6 = FUN3(VAR4, VAR14, VAR59);
if (VAR6) {
FUN15(VAR6, "", &VAR4->VAR56);
FUN7(VAR6);
}
}

VAR1 = 0;
FUN16(VAR10, &VAR4->VAR60, VAR61) {
if (VAR10->VAR62)
continue;
FUN17(VAR4, VAR10, NULL, VAR1++, &VAR2);
}

if (VAR4->VAR4 == VAR13)
FUN18();


VAR6 = FUN3(VAR4, VAR14, VAR63);
if (VAR6)
FUN7(VAR6);
if (VAR2)
FUN19("");
}