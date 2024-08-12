static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
const struct VAR5 *VAR6)
{
int VAR7;
u8 VAR8;
unsigned int VAR9, VAR10;
struct VAR11 *VAR12 = FUN2(VAR2);

if (VAR6->VAR13 != VAR14)
return -VAR15;

if (!VAR6->VAR16) {
VAR7 = FUN3(VAR2->VAR17,
VAR18, VAR19,
1 << VAR12->VAR20, 0);

if (VAR7 < 0)
FUN4(VAR2->VAR17, "",
VAR4->VAR21, VAR7);
return VAR7;
}


VAR10 = VAR6->VAR22 & 0x00FF;

VAR9 = ((VAR6->VAR22 & 0x0300) >> 8);

VAR8 = VAR23 + (VAR12->VAR20 * 2);

VAR7 = FUN5(VAR2->VAR17, VAR18,
VAR8, (VAR24)VAR10);
if (VAR7 < 0)
return VAR7;

VAR7 = FUN5(VAR2->VAR17, VAR18,
(VAR8 + 1), (VAR24)VAR9);
if (VAR7 < 0)
return VAR7;

VAR7 = FUN3(VAR2->VAR17,
VAR18, VAR19,
1 << VAR12->VAR20, 1 << VAR12->VAR20);
if (VAR7 < 0)
FUN4(VAR2->VAR17, "",
VAR4->VAR21, VAR7);

return VAR7;
}

static const struct pwm_ops VAR25 = {
.VAR26 = VAR27,
.VAR28 = VAR29,
};