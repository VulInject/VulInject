static int  FUN1(struct VAR1 *VAR1);
static int  FUN2(struct VAR1 *VAR1);
static void FUN3(struct VAR1 *VAR1);
static void FUN4(struct VAR1 *VAR1,
VAR2 *VAR3, int VAR4);
static void FUN5(struct VAR1 *VAR1);

static int FUN6(struct VAR1 *VAR1,
u16 VAR5, u16 VAR6);



static s32 VAR7 = 0xff;
FUN7(VAR7, int, 0644);
FUN8(VAR7, "");

static char VAR8[7];
FUN9(VAR8, VAR8, sizeof(VAR8), 0644);
FUN8(VAR8,
"");



static int FUN10(struct VAR9 *VAR10)
{
struct VAR1 *VAR1 =
FUN11(VAR10->VAR11, struct VAR1, VAR12);
struct VAR13 *VAR13 = (struct VAR13 *) VAR1;

switch (VAR10->VAR14) {
case VAR15:
VAR13->VAR16.VAR17 = VAR10->VAR18;
break;
case VAR19:
VAR13->VAR16.VAR20 = VAR10->VAR18;
break;
case VAR21:
VAR13->VAR16.VAR22 = VAR10->VAR18;
break;
case VAR23:
VAR13->VAR16.VAR24 = VAR10->VAR18;
break;
case VAR25:
VAR13->VAR16.VAR26 = VAR10->VAR18;
break;
case VAR27:
VAR13->VAR16.VAR28 = VAR10->VAR18;
break;
case VAR29:
VAR13->VAR16.VAR30 = VAR10->VAR18;
break;
case VAR31:
VAR13->VAR16.VAR7 = VAR10->VAR18;
break;
case VAR32:
VAR13->VAR16.VAR33 = VAR10->VAR18;
break;
case VAR34:
VAR13->VAR16.VAR35 = VAR10->VAR18;
break;
case VAR36:
VAR13->VAR16.VAR37 = VAR10->VAR18;
break;
default:
return -VAR38;
}

if (VAR1->VAR39)
VAR13->VAR40 = 1;

return 0;
}