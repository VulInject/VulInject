static int FUN1(struct VAR1 *VAR2)
{
const struct VAR3 *VAR4;
struct VAR5 *VAR6 = FUN2(VAR2);
int VAR7;

VAR4 = (const struct VAR3 *)FUN3(VAR2);
if (!VAR4)
return -VAR8;

VAR6->VAR9.VAR10 = FUN4(VAR2,
"",
VAR11);

VAR6->VAR9.VAR12 = FUN4(VAR2,
"",
VAR13);

VAR6->VAR14 = FUN4(VAR2, "", 0);
if (!FUN5(VAR2, ""))
VAR6->VAR14 = 0;

VAR6->VAR9.VAR15 = FUN5(VAR2, "");


VAR6->VAR16 = FUN6(VAR2,
"");
if (!FUN7(VAR6->VAR16)) {
u32 VAR17[3];

VAR7 = FUN8(VAR2, "", VAR17, 3);
if (VAR7)
return VAR7;

VAR6->VAR18 = VAR17[1];
VAR6->VAR19 = VAR17[1] + VAR4->VAR20;
VAR6->VAR21 = VAR17[2];
}

return 0;
}

static const struct dm_i2c_ops VAR22 = {
.VAR23 = VAR24,
.VAR25 = VAR26,
};