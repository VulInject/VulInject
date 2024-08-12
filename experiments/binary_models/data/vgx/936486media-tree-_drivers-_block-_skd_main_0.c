static int FUN1(struct VAR1 *VAR2, fmode_t VAR3,
uint VAR4, ulong VAR5)
{
static const int VAR6 = 30527;
int VAR7 = 0, VAR8;
struct VAR9 *VAR10 = VAR2->VAR11;
struct VAR12 *VAR13 = VAR10->VAR14;
int VAR15 *VAR16 = (int VAR15 *)VAR5;

FUN2("",
VAR13->VAR17, VAR18, VAR19,
VAR10->VAR20, VAR21->VAR22, VAR3, VAR4, VAR5);

if (!FUN3(VAR23))
return -VAR24;

switch (VAR4) {
case VAR25:
VAR7 = FUN4(VAR8, VAR16);
if (!VAR7)
VAR10->VAR26->VAR27 = FUN5(VAR8);
break;
case VAR28:
VAR7 = FUN6(VAR10->VAR26->VAR27);
break;
case VAR29:
VAR7 = FUN7(VAR6, VAR16);
break;
case VAR30:
VAR7 = FUN8(VAR13, VAR3, (void VAR15 *)VAR5);
break;

default:
VAR7 = -VAR31;
break;
}

FUN2("",
VAR13->VAR17, VAR18, VAR19, VAR10->VAR20, VAR7);
return VAR7;
}