static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
struct VAR5	*VAR6;
int			VAR7 = 0;
int			VAR8 = 0;
struct VAR9 *VAR10 =
FUN2(&VAR2->VAR11);

if (VAR12) {
FUN3(&VAR2->VAR11, "",
VAR13);
return -VAR14;
}

VAR6 = FUN4(&VAR2->VAR11, sizeof(*VAR6), VAR15);
if (!VAR6)
return -VAR16;

FUN5(VAR2, VAR6);

VAR12 = VAR6;
VAR6->VAR2 = VAR2;


VAR7 = FUN6(VAR17);
if (VAR7 < 0) {
FUN7(VAR13 "");
return -VAR14;
}


FUN8(VAR18, 0xff);
FUN8(VAR19, 0xff);
FUN8(VAR20, 0xff);
FUN8(VAR21, 0xff);
VAR6->VAR22 = 0xff;
VAR6->VAR23 = 0xff;


FUN8(VAR24, 0x73);

if (VAR2->VAR25 > 0) {
VAR8 = FUN9(VAR2->VAR25, VAR26, 0,
VAR13, VAR6);
if (VAR8) {
FUN3(&VAR2->VAR11,  "",
VAR2->VAR25, VAR8);
return VAR8;
}
}

FUN10(&VAR6->VAR27);
FUN11(&VAR6->VAR28, VAR29);

FUN12("", VAR7 >> 4, VAR7 & 0x0f);

VAR8 = FUN6(VAR30);
if (VAR8 < 0)
goto VAR31;
if (VAR8 & VAR32)
VAR6->VAR33 = 1;
else
VAR6->VAR33 = 0;

if (VAR10 != NULL && VAR10->VAR34 != NULL) {
VAR8 = VAR10->FUN13(&VAR2->VAR11);
if (VAR8 < 0)
goto VAR31;
}

FUN14(VAR6);

return 0;
VAR31:
FUN15(VAR2->VAR25, VAR6);
FUN16(&VAR6->VAR28);
return VAR8;
}