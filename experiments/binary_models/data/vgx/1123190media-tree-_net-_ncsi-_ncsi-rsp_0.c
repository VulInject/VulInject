static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6;
struct VAR7 *VAR8 = VAR2->VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
unsigned short VAR13;
int VAR14;


VAR6 = (struct VAR5 *)FUN2(VAR2->VAR6);
FUN3(VAR8, VAR6->VAR6.VAR15.VAR16,
NULL, &VAR10);
if (!VAR10)
return -VAR17;

VAR4 = (struct VAR3 *)FUN2(VAR2->VAR4);
VAR12 = VAR10->VAR18[VAR19];
if (!VAR12)
return -VAR20;
if (VAR4->VAR21 >= VAR12->VAR22)
return -VAR23;


if (!(VAR4->VAR24 & 0x1)) {
VAR14 = FUN4(VAR10, VAR19, VAR4->VAR21);
} else {
VAR13 = FUN5(VAR4->VAR13);
VAR14 = FUN6(VAR10, VAR19, &VAR13);
}

return VAR14;
}