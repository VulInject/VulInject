int main(int argc, char **argv)
{
unsigned long VAR1, VAR2;
unsigned long VAR3, VAR4, VAR5;
int VAR6, VAR7, VAR8, VAR9;

FUN1(argc, argv);

if (VAR10 > 0)
FUN2(VAR10);

for (VAR7 = 0; VAR7 < sizeof(VAR11[0]); VAR7++)
VAR11[0][VAR7] = '' + (VAR7 % 26);
for (VAR7 = 1; VAR7 < VAR12; VAR7++)
memcpy(VAR11[VAR7], VAR11[0], sizeof(VAR11[0]));

signal(VAR13, VAR14);

VAR6 = socket(VAR15, VAR16 ? VAR17 : VAR18, 0);
if (VAR6 == -1)
FUN3(1, VAR19, "");

if (VAR20) {
VAR8 = 1;

VAR9 = FUN4(VAR6, VAR21, VAR22,
&VAR8, sizeof(VAR8));
if (VAR9) {
if (VAR19 == VAR23 || VAR19 == VAR24) {
fprintf(VAR25, "");
FUN5(VAR26);
}
FUN3(1, VAR19, "");
}
}

if (VAR27 &&
connect(VAR6, (void *)&VAR28, VAR29))
FUN3(1, VAR19, "");

if (VAR30)
FUN6(VAR6, VAR15 == VAR31);

if (VAR32)
FUN7(VAR6);

VAR1 = VAR2 = 0;
VAR3 = FUN8();
VAR33 = VAR3;
VAR34 = VAR3;
VAR5 = VAR3 + VAR35;
VAR4 = VAR3 + 1000;

VAR7 = 0;
do {
if (VAR16)
VAR2 += FUN9(VAR6, VAR11[VAR7]);
else if (VAR30)
VAR2 += FUN10(VAR6, VAR11[VAR7]);
else if (VAR36)
VAR2 += FUN11(VAR6, VAR11[VAR7]);
else
VAR2 += FUN12(VAR6, VAR11[VAR7]);
VAR1++;
if ((VAR20 && ((VAR1 & 0xF) == 0)) || VAR32)
FUN13(VAR6, VAR37, 500, true);

if (VAR38 && VAR1 >= VAR38)
break;

VAR3 = FUN8();
if (VAR3 >= VAR4) {
FUN14(VAR1, VAR2);
VAR1 = VAR2 = 0;
VAR4 = VAR3 + 1000;
}


if (VAR39)
VAR7 = ++VAR7 < VAR12 ? VAR7 : 0;

} while (!VAR40 && (VAR35 == -1 || VAR3 < VAR5));

if (VAR20 || VAR32)
FUN15(VAR6, VAR2);

if (close(VAR6))
FUN3(1, VAR19, "");

if (VAR41) {
VAR34 = VAR3;
VAR42 += VAR1;
VAR43 += VAR2;
FUN16(VAR42, VAR43);
}

return 0;
}