void FUN1(VAR1 *VAR2) {
VAR3 *VAR4 = FUN2(VAR2->VAR5,VAR2->argv[1]);
struct VAR6 *VAR7;
int VAR8 = 0, VAR9;

if (VAR4 == NULL) {

VAR4 = FUN3();
FUN4(VAR2->VAR5,VAR2->argv[1],VAR4);
VAR8++;
} else {
if (FUN5(VAR2,VAR4) != VAR10) return;
VAR4 = FUN6(VAR2->VAR5,VAR2->argv[1],VAR4);
}

for (VAR9 = 2; VAR9 < VAR2->argc; VAR9++) {
int VAR11 = FUN7(VAR4, (unsigned char*)VAR2->argv[VAR9]->VAR12,
FUN8(VAR2->argv[VAR9]->VAR12));
switch(VAR11) {
case 1:
VAR8++;
break;
case -1:
FUN9(VAR2,VAR13);
return;
}
}
VAR7 = VAR4->VAR12;
if (VAR8) {
FUN10(VAR2,VAR2->VAR5,VAR2->argv[1]);
FUN11(VAR14,"",VAR2->argv[1],VAR2->VAR5->VAR15);
VAR16.VAR17 += VAR8;
FUN12(VAR7);
}
FUN13(VAR2, VAR8 ? VAR18.VAR19 : VAR18.VAR20);
}