static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
ssize_t VAR7 = 0;
unsigned char VAR8;
struct VAR9 *VAR10;
struct VAR11 *VAR12;
struct VAR13 *VAR14;
unsigned long VAR15;

VAR12 = FUN2(VAR3);
VAR10 = FUN3(VAR12);
FUN4(&VAR10->VAR16, VAR15);
VAR14 = VAR12->VAR17;
if (!VAR14) {
FUN5(&VAR10->VAR16, VAR15);
return -VAR18;
}


if (!FUN6(VAR14)) {
FUN5(&VAR10->VAR16, VAR15);
VAR7 = snprintf(VAR6, VAR19, "");
return VAR7;
}

VAR8 = VAR14->VAR20;
FUN5(&VAR10->VAR16, VAR15);
if (VAR8 > VAR21)
VAR8 = VAR21;
VAR7 = snprintf(VAR6, VAR19, "", VAR22[VAR8]);
return VAR7;
}