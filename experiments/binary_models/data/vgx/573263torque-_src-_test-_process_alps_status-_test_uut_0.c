FUN1(VAR1)
{
struct pbsnode  VAR2;
const char     *VAR3 = (char *)"";
struct VAR4 *VAR5;

VAR2.VAR6 = new FUN2();

VAR5 = FUN3(&VAR2, VAR3);
FUN4(VAR5 == NULL, "");

}
VAR7




FUN1(VAR8)
{
struct pbsnode  VAR2;
const char     *VAR9 = "";
const char     *VAR10 = "";
struct VAR4 *VAR11;

VAR2.FUN5("");
VAR2.VAR6 = new FUN2();

VAR12 = 0; 
VAR11 = FUN6(VAR9, &VAR2, &VAR2);
FUN4(VAR11 != NULL, "");
FUN4(VAR11->VAR13 != 0, "");

VAR12 = 0; 
VAR11 = FUN6(VAR10, &VAR2, &VAR2);
FUN4(VAR11 == &VAR2, "");

}
VAR7




FUN1(VAR14)
{
const char *VAR15 = "";
VAR16 = 0;
VAR17 = 0;
VAR18 = 0;

FUN4(FUN7(strdup(VAR15)) == 0, "");
FUN4(VAR17 == 1);
FUN4(VAR18 == 1);
}
VAR7




FUN1(VAR19)
{
struct pbsnode  VAR2;
const char     *VAR3 = "";
struct VAR4 *VAR20;
extern int      VAR21;
int             VAR22 = VAR21;;

VAR20 = FUN8(&VAR2, VAR3);
FUN4(VAR20 != NULL, "");
FUN4(VAR20->VAR2 == &VAR2, "");
FUN4(VAR20->VAR23 == VAR24, "");


VAR20 = FUN8(&VAR2, VAR3);
FUN4(VAR20 == NULL, "");
FUN4(VAR22 + 2 <= VAR21);
}
VAR7



FUN1(VAR25)
{
VAR26::VAR27<VAR26::VAR28> VAR29;
int                      VAR30;
int                      VAR31 = 0;

while (VAR32[VAR31] != NULL)
VAR29.FUN9(VAR32[VAR31++]);

VAR30 = FUN10((char *)"", VAR29);
FUN4(VAR30 == 0, "");
}
VAR7



FUN1(VAR33)
{
struct pbsnode VAR34;

VAR34.FUN5("");

FUN4(FUN11(&VAR34, "") == 0, "");
FUN4(FUN11(&VAR34, "") == 0, "");
FUN4(FUN11(&VAR34, "") == 0, "");
}
VAR7



VAR35 *FUN12(void)
{
VAR35 *VAR36 = FUN13("");
VAR37 *VAR38 = FUN14("");