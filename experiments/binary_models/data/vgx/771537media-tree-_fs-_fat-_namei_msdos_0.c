static int FUN1(struct VAR1 *VAR2, const unsigned char *VAR3, int VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = FUN2(VAR2->VAR9);
unsigned char VAR10[VAR11];
int VAR12;

VAR12 = FUN3(VAR3, VAR4, VAR10, &VAR8->VAR13);
if (VAR12)
return -VAR14;

VAR12 = FUN4(VAR2, VAR10, VAR6);
if (!VAR12 && VAR8->VAR13.VAR15) {
if (VAR3[0] == '') {
if (!(VAR6->VAR16->VAR17 & VAR18))
VAR12 = -VAR14;
} else {
if (VAR6->VAR16->VAR17 & VAR18)
VAR12 = -VAR14;
}
if (VAR12)
FUN5(VAR6->VAR19);
}
return VAR12;
}