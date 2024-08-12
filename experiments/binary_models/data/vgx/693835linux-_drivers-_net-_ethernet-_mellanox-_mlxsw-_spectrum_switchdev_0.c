static int
FUN1(struct VAR1 *VAR1,
const struct VAR2 *VAR3,
bool VAR4,
struct VAR5 **VAR6,
VAR7 *VAR8, VAR9 *VAR10)
{
struct VAR11 *VAR12;
struct VAR5 *VAR13, *VAR14;
int VAR15;
int VAR16;

VAR16 = FUN2(VAR3, &VAR15);
if (VAR16)
return VAR16;

VAR16 = FUN3(VAR3, VAR10);
if (VAR16)
return VAR16;

VAR14 = FUN4(FUN5(VAR1), VAR15);
if (!VAR14)
return -VAR17;
*VAR6 = VAR14;

if (!FUN6(VAR14))
return -VAR17;

if (VAR4 && !FUN7(VAR14, VAR18))
return -VAR17;

if (VAR4 && FUN8(VAR14)) {
struct VAR19 *VAR20 = FUN9(VAR14);

if (!(VAR20->VAR21.VAR22 & VAR23))
return -VAR17;
}

VAR13 = FUN10(VAR14);
if (!VAR13)
return -VAR17;

VAR12 = FUN11(VAR1->VAR24, VAR13);
if (!VAR12)
return -VAR17;

*VAR8 = VAR12->VAR25->FUN12(VAR12, VAR3);

return 0;
}