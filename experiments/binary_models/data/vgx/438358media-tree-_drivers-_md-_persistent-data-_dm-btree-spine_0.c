int FUN1(struct VAR1 *VAR2, dm_block_t VAR3,
struct VAR4 *VAR5)
{
int VAR6;

if (VAR2->VAR7 == 2) {
FUN2(VAR2->VAR8, VAR2->VAR9[0]);
VAR2->VAR9[0] = VAR2->VAR9[1];
VAR2->VAR7--;
}

VAR6 = FUN3(VAR2->VAR8, VAR3, VAR5, VAR2->VAR9 + VAR2->VAR7);
if (!VAR6) {
if (!VAR2->VAR7)
VAR2->VAR10 = FUN4(VAR2->VAR9[0]);

VAR2->VAR7++;
}

return VAR6;
}