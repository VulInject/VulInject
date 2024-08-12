static unsigned VAR1 = (VAR2 | VAR3 |
VAR4 | VAR5 |
VAR6 | VAR7 |
VAR8 | VAR9);
FUN1(VAR1, VAR10, 0);
FUN2(VAR1, "");



static void FUN3(struct VAR11 *VAR12);
static int FUN4(struct VAR11 *VAR12, struct VAR13 *VAR14);
static int FUN5(struct VAR15 *VAR16, struct VAR17 *VAR18);
static int FUN6(struct VAR15 *VAR16, int VAR19, struct VAR20 **VAR21,
u32 VAR22);



static void FUN7(struct VAR11 *VAR12);

static int FUN8(struct VAR11 *VAR12)
{
int VAR23;

FUN9(VAR12, VAR24, VAR12->VAR25, "");

if (VAR26)
VAR12->VAR27 = VAR28;


VAR23 = VAR12->VAR29->FUN10(VAR12);
if (VAR23)
return VAR23;


FUN11(VAR12->VAR25, VAR12->VAR25->VAR30);

return 0;
}