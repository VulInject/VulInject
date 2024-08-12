static int FUN1(struct VAR1 *VAR2,
u32 VAR3, u32 VAR4)
{
int VAR5;

for (VAR5 = 0; VAR5 < VAR2->VAR6; VAR5++)
if (VAR2->VAR3[VAR5] == VAR3 && VAR2->VAR4[VAR5] == VAR4)
return VAR5;

if (VAR2->VAR6 == VAR2->VAR7) {
VAR5 = FUN2(VAR2);
if (VAR5 < 0)
return VAR5;
}

VAR5 = VAR2->VAR6 + 1;
VAR2->VAR8[VAR5] = malloc(VAR2->VAR9 * sizeof(**VAR2->VAR8));
if (!VAR2->VAR8[VAR5]) {
FUN3("");
return -VAR10;
}
VAR2->VAR3[VAR5] = VAR3;
VAR2->VAR4[VAR5] = VAR4;
VAR2->VAR6 = VAR5;

return VAR5;
}