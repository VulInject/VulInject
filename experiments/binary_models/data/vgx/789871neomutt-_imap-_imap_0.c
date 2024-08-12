enum VAR1 FUN1(struct VAR2 *VAR3, bool VAR4, bool close)
{
if (!VAR3)
return -1;

struct VAR5 **VAR6 = NULL;
int VAR7;

struct VAR8 *VAR9 = FUN2(VAR3);
struct VAR10 *VAR11 = FUN3(VAR3);

if (VAR9->VAR12 < VAR13)
{
FUN4(VAR14, "");
return -1;
}


FUN5(VAR3);

enum MxStatus VAR15 = FUN6(VAR3, false);
if (VAR15 == VAR16)
return VAR15;


if (VAR4 && (VAR3->VAR17 & VAR18))
{
VAR7 = FUN7(VAR3, "", "",
VAR19, true, false);
if (VAR7 < 0)
{
FUN8(FUN9(""));
return VAR7;
}

if (VAR7 > 0)
{

for (int VAR20 = 0; VAR20 < VAR3->VAR21; VAR20++)
{
struct VAR5 *VAR22 = VAR3->VAR6[VAR20];
if (!VAR22)
break;
if (VAR22->VAR23 && VAR22->VAR24)
VAR22->VAR25 = false;
}
if (VAR3->VAR26)
{
FUN10(FUN11("",
"", VAR7),
VAR7);
}
}
}

FUN12(VAR9, VAR11);


for (int VAR20 = 0; VAR20 < VAR3->VAR21; VAR20++)
{
struct VAR5 *VAR22 = VAR3->VAR6[VAR20];
if (!VAR22)
break;

if (VAR22->VAR23)
{
FUN13(VAR3, VAR22);
FUN14(VAR11, FUN15(VAR22)->VAR27);
}

if (VAR22->VAR25 && VAR22->VAR24)
{
FUN16(VAR11, VAR22);


if ((VAR22->VAR28 && VAR22->VAR28->VAR24) || VAR22->VAR29)
{

if (VAR3->VAR26)
{
FUN10(FUN11("",
"", VAR3->VAR21),
VAR20 + 1, VAR3->VAR21);
}
bool VAR30 = VAR3->VAR31;
VAR3->VAR31 = true;
FUN17(VAR3, VAR22, VAR32, VAR33, VAR3);
VAR3->VAR31 = VAR30;

if (VAR22->VAR28)
VAR22->VAR28->VAR24 = 0;
}
}
}

FUN18(VAR11);


const short VAR34 = FUN19(VAR35->VAR36, "");
if (VAR34 != VAR37)
{
VAR6 = VAR3->VAR6;
VAR3->VAR6 = FUN20(VAR3->VAR21 * sizeof(struct VAR5 *));
memcpy(VAR3->VAR6, VAR6, VAR3->VAR21 * sizeof(struct VAR5 *));

FUN21(VAR35->VAR36, "", VAR37, NULL);
FUN22(VAR3->VAR6, VAR3->VAR21, sizeof(struct VAR5 *), VAR38);
}

VAR7 = FUN23(VAR3, VAR18, VAR19, "");
if (VAR7 >= 0)
VAR7 |= FUN23(VAR3, VAR39, VAR40, "");
if (VAR7 >= 0)
VAR7 |= FUN23(VAR3, VAR39, VAR41, "");
if (VAR7 >= 0)
VAR7 |= FUN23(VAR3, VAR42, VAR43, "");
if (VAR7 >= 0)
VAR7 |= FUN23(VAR3, VAR39, VAR44, "");

if (VAR34 != VAR37)
{
FUN21(VAR35->VAR36, "", VAR34, NULL);
FUN24(&VAR3->VAR6);
VAR3->VAR6 = VAR6;
}


if (VAR7 > 0)
if (FUN25(VAR9, NULL, VAR45) != VAR46)
VAR7 = -1;

if (VAR7 < 0)
{
if (close)
{
if (FUN26(FUN9(""), VAR47) == VAR48)
{
VAR9->VAR12 = VAR49;
return 0;
}
}
else
FUN8(FUN9(""));
return -1;
}


for (int VAR20 = 0; VAR20 < VAR3->VAR21; VAR20++)
{
struct VAR5 *VAR22 = VAR3->VAR6[VAR20];
if (!VAR22)
break;
struct VAR50 *VAR51 = FUN15(VAR22);
VAR51->VAR23 = VAR22->VAR23;
VAR51->VAR52 = VAR22->VAR52;
VAR51->VAR53 = VAR22->VAR53;
VAR51->read = VAR22->read;
VAR51->VAR54 = VAR22->VAR54;
VAR22->VAR24 = false;
}
VAR3->VAR24 = false;


if (VAR4 && !close && (VAR3->VAR17 & VAR18))
{
if (VAR3->VAR26)
FUN10(FUN9(""));

VAR11->VAR55 |= VAR56;
if (FUN25(VAR9, "", VAR45) != VAR46)
{
VAR11->VAR55 &= ~VAR56;
FUN27(FUN9(""), VAR9->VAR57);
return -1;
}
VAR11->VAR55 &= ~VAR56;
}

if (VAR4 && close)
{
VAR9->VAR58 = true;
FUN25(VAR9, "", VAR45);
VAR9->VAR12 = VAR49;
}

const bool VAR59 = FUN28(VAR35->VAR36, "");
if (VAR59)
FUN29(VAR3);

return VAR15;
}