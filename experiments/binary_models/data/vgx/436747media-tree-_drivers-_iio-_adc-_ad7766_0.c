static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4 = FUN2(VAR2);
struct VAR5 *VAR6;
struct VAR7 *VAR7;
int VAR8;

VAR6 = FUN3(&VAR2->VAR9, sizeof(*VAR7));
if (!VAR6)
return -VAR10;

VAR7 = FUN4(VAR6);
VAR7->VAR11 = &VAR12[VAR4->VAR13];

VAR7->VAR14 = FUN5(&VAR2->VAR9, "");
if (FUN6(VAR7->VAR14))
return FUN7(VAR7->VAR14);

VAR7->VAR15[VAR16].VAR17 = "";
VAR7->VAR15[VAR18].VAR17 = "";
VAR7->VAR15[VAR19].VAR17 = "";

VAR8 = FUN8(&VAR2->VAR9, FUN9(VAR7->VAR15),
VAR7->VAR15);
if (VAR8)
return VAR8;

VAR7->VAR20 = FUN10(&VAR2->VAR9, "",
VAR21);
if (FUN6(VAR7->VAR20))
return FUN7(VAR7->VAR20);

VAR6->VAR9.VAR22 = &VAR2->VAR9;
VAR6->VAR23 = FUN2(VAR2)->VAR23;
VAR6->VAR24 = VAR25;
VAR6->VAR26 = VAR27;
VAR6->VAR28 = FUN9(VAR27);
VAR6->VAR29 = &VAR30;

if (VAR2->VAR31 > 0) {
VAR7->VAR32 = FUN11(&VAR2->VAR9, "",
VAR6->VAR23, VAR6->VAR4);
if (!VAR7->VAR32)
return -VAR10;

VAR7->VAR32->VAR33 = &VAR34;
VAR7->VAR32->VAR9.VAR22 = &VAR2->VAR9;
FUN12(VAR7->VAR32, VAR7);

VAR8 = FUN13(&VAR2->VAR9, VAR2->VAR31, VAR35,
VAR36, FUN14(&VAR2->VAR9),
VAR7->VAR32);
if (VAR8 < 0)
return VAR8;


FUN15(VAR2->VAR31);

VAR8 = FUN16(&VAR2->VAR9, VAR7->VAR32);
if (VAR8)
return VAR8;
}

FUN17(VAR2, VAR6);

VAR7->VAR2 = VAR2;


VAR7->VAR37.VAR38 = &VAR7->VAR39[1];
VAR7->VAR37.VAR40 = 3;

FUN18(&VAR7->VAR41);
FUN19(&VAR7->VAR37, &VAR7->VAR41);

VAR8 = FUN20(&VAR2->VAR9, VAR6,
&VAR42, &VAR43,
&VAR44);
if (VAR8)
return VAR8;

VAR8 = FUN21(&VAR2->VAR9, VAR6);
if (VAR8)
return VAR8;
return 0;
}