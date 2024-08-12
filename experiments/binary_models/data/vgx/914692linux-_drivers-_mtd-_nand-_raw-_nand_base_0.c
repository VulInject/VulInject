static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4)
{
int VAR5 = ((VAR2->VAR6 / VAR2->VAR7) - 1) / 2;
int VAR8 = VAR4->VAR9 * 2;
int VAR10 = 3;

if (!VAR4->VAR11 && !VAR4->VAR9)
return 0;

if (VAR4->VAR9 == VAR5 && VAR4->VAR11)
VAR10 = 2;

if (!VAR4->VAR11)
VAR8--;
else if (VAR4->VAR9)
VAR8 += VAR10 - 1;

if (VAR8 >= VAR2->VAR6 / VAR2->VAR7)
return -VAR12;

return VAR8;
}

const struct mtd_pairing_scheme VAR13 = {
.VAR14 = 2,
.VAR15 = VAR16,
.VAR17 = VAR18,
};