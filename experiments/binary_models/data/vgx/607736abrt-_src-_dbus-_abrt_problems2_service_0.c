static void FUN1(VAR1 *VAR2,
const VAR3 *VAR4,
const VAR3 *VAR5,
const VAR3 *VAR6,
const VAR3 *VAR7,
VAR8    *VAR9,
VAR10 *VAR11,
gpointer    VAR12)
{
FUN2("", VAR7);


if (strcmp(VAR6, FUN3("")) != 0)
{
FUN4("", VAR6);
return;
}

VAR13 *VAR14 = NULL;

VAR15 *VAR16 = FUN5(VAR12);
uid_t VAR17 = FUN6(VAR16, VAR4, &VAR14);
if (VAR17 == (VAR18) -1)
{
FUN7(VAR11, VAR14);
FUN8(VAR14);
return;
}

VAR19 *VAR20 = FUN9(VAR12);
VAR21 *VAR22 = FUN10(VAR16,
VAR4,
VAR17,
&VAR14);
if (VAR14 != NULL)
{
FUN7(VAR11, VAR14);
FUN8(VAR14);
return;
}

VAR23 *VAR24 = FUN9(VAR22);
if (FUN11(VAR24, VAR20) != 0)
{
FUN12(VAR11,
VAR25,
VAR26,
"");
return;
}

VAR8 *VAR27 = NULL;

if (strcmp("", VAR7) == 0)
{
VAR8 *VAR28 = FUN13(VAR9, 0);
FUN14(VAR20, VAR28, &VAR14);
FUN15(VAR28);
}
else if (strcmp("", VAR7) == 0)
{
struct VAR29 *VAR30 = FUN16(struct VAR29, 1);
VAR30->VAR31 = VAR12;
VAR30->VAR32 = FUN17(VAR24);

int VAR33 = FUN18(VAR20,
"",
FUN19(VAR34),
VAR30);

FUN20(VAR20, &VAR14);

if (VAR14 != NULL)
{
FUN21(VAR20, VAR33);
FUN22(VAR30);
}
}
else if (strcmp("", VAR7) == 0)
{
VAR8 *VAR35 = NULL;
gint32 VAR36 = -1;
FUN23(VAR20, &VAR35, &VAR36, &VAR14);

if (VAR14 == NULL)
{
VAR8 *VAR37[2];
VAR37[0] = VAR35;
VAR37[1] = FUN24(VAR36);

VAR27 = FUN25(VAR37, 2);

VAR13 *VAR38 = NULL;
FUN26(VAR24, VAR20, &VAR38);
if (VAR38 != NULL)
{
FUN4("",
VAR38->VAR39);
FUN8(VAR38);
}

FUN27(VAR12);

FUN28(VAR20);
}
}
else
{
FUN4("",
VAR7);

FUN12(VAR11,
VAR25,
VAR40,
"");
return;
}

if (VAR14)
{
FUN7(VAR11, VAR14);
FUN8(VAR14);
}
else
FUN29(VAR11, VAR27);
}