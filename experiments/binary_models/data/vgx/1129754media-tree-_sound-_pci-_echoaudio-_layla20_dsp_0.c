static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4);
static int FUN2(struct VAR1 *VAR2, char VAR5);
static int FUN3(struct VAR1 *VAR2, u32 VAR6, short VAR7);
static int FUN4(struct VAR1 *VAR2);
static int FUN5(struct VAR1 *VAR2);


static int FUN6(struct VAR1 *VAR2, u16 VAR8, u16 VAR9)
{
int VAR10;

if (FUN7((VAR9 & 0xfff0) != VAR11))
return -VAR12;

if ((VAR10 = FUN8(VAR2))) {
FUN9(VAR2->VAR13->VAR14,
"");
return VAR10;
}

VAR2->VAR8 = VAR8;
VAR2->VAR9 = VAR9;
VAR2->VAR15 = true;
VAR2->VAR16 = true;
VAR2->VAR17 = VAR18;
VAR2->VAR19 =
VAR20 | VAR21 |
VAR22 | VAR23;
VAR2->VAR24 =
VAR22 | VAR23;

if ((VAR10 = FUN10(VAR2)) < 0)
return VAR10;
VAR2->VAR15 = false;

return VAR10;
}