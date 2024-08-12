static int FUN1(struct VAR1 *VAR1, void VAR2 *VAR3, const int *VAR4)
{
char VAR5[VAR6];
struct VAR7 *VAR8;
int VAR9;

if (*VAR4 != sizeof(struct VAR10))
return -VAR11;

if (FUN2(VAR5, VAR3, sizeof(VAR5)) != 0)
return -VAR12;

VAR5[VAR6-1] = '';
if (FUN3())
FUN4(VAR13);
VAR8 = FUN5(VAR1, VAR13, VAR5);
if (!FUN6(VAR8)) {
struct ipt_getinfo VAR14;
const struct VAR15 *private = VAR8->private;
struct xt_table_info VAR16;

if (FUN3()) {
VAR9 = FUN7(private, &VAR16);
FUN8(VAR13);
private = &VAR16;
}
memset(&VAR14, 0, sizeof(VAR14));
VAR14.VAR17 = VAR8->VAR17;
memcpy(VAR14.VAR18, private->VAR18,
sizeof(VAR14.VAR18));
memcpy(VAR14.VAR19, private->VAR19,
sizeof(VAR14.VAR19));
VAR14.VAR20 = private->VAR21;
VAR14.VAR22 = private->VAR22;
strcpy(VAR14.VAR5, VAR5);

if (FUN9(VAR3, &VAR14, *VAR4) != 0)
VAR9 = -VAR12;
else
VAR9 = 0;

FUN10(VAR8);
FUN11(VAR8->VAR23);
} else
VAR9 = FUN12(VAR8);
if (FUN3())
FUN13(VAR13);
return VAR9;
}