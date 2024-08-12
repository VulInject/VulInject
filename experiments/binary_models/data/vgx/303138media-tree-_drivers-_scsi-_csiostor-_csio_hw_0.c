static int
FUN1(struct VAR1 *VAR2, uint32_t VAR3, int32_t VAR4)
{
enum fw_retval VAR5 = 0;


if (VAR3 <= VAR6) {
struct VAR7	*VAR8;

VAR8 = FUN2(VAR2->VAR9, VAR10);
if (!VAR8) {
FUN3(VAR2, VAR11);
return -VAR12;
}

FUN4(VAR2, VAR8, VAR13,
VAR14 | VAR15, VAR16,
NULL);

if (FUN5(VAR2, VAR8)) {
FUN6(VAR2, "");
FUN7(VAR8, VAR2->VAR9);
return -VAR17;
}

VAR5 = FUN8(VAR8);
FUN7(VAR8, VAR2->VAR9);
}


if (VAR5 == 0 || VAR4) {
FUN9(VAR2, VAR18, VAR19, VAR19);
FUN9(VAR2, VAR20, VAR21,
VAR21);
}


return VAR5 ? -VAR17 : 0;
}