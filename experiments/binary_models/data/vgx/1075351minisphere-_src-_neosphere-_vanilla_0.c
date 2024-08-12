static bool
FUN1(int VAR1, bool VAR2, intptr_t VAR3)
{
int           VAR4 = VAR5;
ALLEGRO_COLOR VAR6;
int           VAR7;
VAR8*      VAR9;
color_t       VAR10;
int           VAR11;
float         VAR12, VAR13;
float         VAR14, VAR15;
float         VAR16, VAR17;
float         VAR18, VAR19;

FUN2();
VAR9 = FUN3(-1, VAR20);
VAR12 = FUN4(FUN5(0));
VAR13 = FUN4(FUN5(1));
VAR14 = FUN4(FUN5(2));
VAR15 = FUN4(FUN5(3));
VAR16 = FUN4(FUN5(4));
VAR17 = FUN4(FUN5(5));
VAR18 = FUN4(FUN5(6));
VAR19 = FUN4(FUN5(7));
VAR10 = FUN6(8);
if (VAR1 >= 10)
VAR4 = FUN7(9);

if (VAR4 < 0 || VAR4 >= VAR21)
FUN8(VAR22, "", VAR4);

VAR11 = FUN9(VAR9);
VAR7 = FUN10(VAR9);
VAR6 = FUN11(VAR10);
ALLEGRO_VERTEX VAR23[] = {
{ VAR12, VAR13, 0, 0, 0, VAR6 },
{ VAR14, VAR15, 0, VAR11, 0, VAR6 },
{ VAR18, VAR19, 0, 0, VAR7, VAR6 },
{ VAR16, VAR17, 0, VAR11, VAR7, VAR6 }
};
if (FUN12(VAR24))
return false;
FUN13();
FUN14(FUN15(VAR24), VAR4);
FUN16(VAR23, NULL, FUN17(VAR9), 0, 4, VAR25);
return false;
}