static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5,
ptrdiff_t VAR6, int VAR7)
{
int VAR8, VAR9 = 0;
VAR3 *VAR10 = VAR5 + VAR6;
const vector unsigned char VAR11 =
(const vector unsigned char) FUN2(0);
const vector unsigned short VAR12 =
(const vector unsigned short) FUN3(2);
vector unsigned char VAR13, VAR14;
vector unsigned char VAR15 = FUN4(0, VAR5);
vector unsigned char VAR16 = FUN5(VAR15, FUN2(1));
vector unsigned char VAR17, VAR18, VAR19;
vector unsigned short VAR20, VAR21, VAR22, VAR23;
vector unsigned short VAR24, VAR25;
vector unsigned int VAR26 = (vector unsigned int) FUN6(0);
vector signed int VAR27;


vector unsigned char VAR28  = FUN7(0,  VAR5);
vector unsigned char VAR29  = FUN7(16, VAR5);
vector unsigned char VAR30  = FUN8(VAR28, VAR29, VAR15);
vector unsigned char VAR31 = FUN8(VAR28, VAR29, VAR16);

vector unsigned short VAR32  =
(vector unsigned short) FUN9(VAR11, VAR30);
vector unsigned short VAR33  =
(vector unsigned short) FUN10(VAR11, VAR30);
vector unsigned short VAR34 =
(vector unsigned short) FUN9(VAR11, VAR31);
vector unsigned short VAR35 =
(vector unsigned short) FUN10(VAR11, VAR31);
vector unsigned short VAR36 = FUN5(VAR32, VAR34);
vector unsigned short VAR37 = FUN5(VAR33, VAR35);
vector unsigned short VAR38, VAR39;

for (VAR8 = 0; VAR8 < VAR7; VAR8++) {

VAR17  = FUN7(0, VAR4);

VAR28  = FUN7(0, VAR10);
VAR29  = FUN7(16, VAR10);
VAR18  = FUN8(VAR28, VAR29, VAR15);
VAR19 = FUN8(VAR28, VAR29, VAR16);




VAR21  = (vector unsigned short) FUN9(VAR11, VAR18);
VAR20  = (vector unsigned short) FUN10(VAR11, VAR18);
VAR23 = (vector unsigned short) FUN9(VAR11, VAR19);
VAR22 = (vector unsigned short) FUN10(VAR11, VAR19);


VAR38 = FUN5(VAR21, VAR23);
VAR39 = FUN5(VAR20, VAR22);

VAR24 = FUN11(FUN5(FUN5(VAR36, VAR38), VAR12), VAR12);
VAR25 = FUN11(FUN5(FUN5(VAR37, VAR39), VAR12), VAR12);


VAR13 = FUN12(VAR24, VAR25);


VAR14 = FUN13(FUN14(VAR17, VAR13), FUN15(VAR17, VAR13));


VAR26 = FUN16(VAR14, VAR26);

VAR4 += VAR6;
VAR10 += VAR6;

VAR36 = VAR38;
VAR37 = VAR39;
}

VAR27 = FUN17((vector signed int) VAR26, (vector signed int) VAR11);
VAR27 = FUN18(VAR27, 3);
FUN19(VAR27, 0, &VAR9);

return VAR9;
}