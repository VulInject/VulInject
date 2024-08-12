int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
obd_enqueue_update_f VAR5, void *VAR6,
struct VAR7 *VAR8)
{
struct VAR9 *VAR10;
struct VAR11 *VAR12;
int VAR13;

VAR10 = FUN2(FUN3(VAR2), &VAR14);
if (!VAR10)
return -VAR15;

VAR13 = FUN4(VAR10, VAR16, VAR17);
if (VAR13) {
FUN5(VAR10);
return VAR13;
}

FUN6(VAR10, VAR4);

FUN7(VAR10);


if (!VAR8) {

FUN8(VAR10);
} else {
VAR10->VAR18 =
(VAR19)VAR20;

FUN9(sizeof(*VAR12) > sizeof(VAR10->VAR21));
VAR12 = FUN10(VAR10);
VAR12->VAR22 = VAR4;
VAR12->VAR23 = VAR5;
VAR12->VAR24 = VAR6;

if (VAR8 == VAR25)
FUN8(VAR10);
else
FUN11(VAR8, VAR10);
}

return 0;
}