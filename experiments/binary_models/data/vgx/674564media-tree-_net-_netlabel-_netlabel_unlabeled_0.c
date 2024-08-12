static int FUN1(struct VAR1 *VAR2,
void **VAR3,
void **VAR4,
VAR5 *VAR6)
{
u32 VAR7;

if (VAR2->VAR8[VAR9]) {
VAR7 = FUN2(VAR2->VAR8[VAR9]);
if (VAR7 != sizeof(struct VAR10) &&
VAR7 != FUN2(VAR2->VAR8[VAR11]))
return -VAR12;
*VAR6 = VAR7;
*VAR3 = FUN3(VAR2->VAR8[VAR9]);
*VAR4 = FUN3(VAR2->VAR8[VAR11]);
return 0;
} else if (VAR2->VAR8[VAR13]) {
VAR7 = FUN2(VAR2->VAR8[VAR13]);
if (VAR7 != sizeof(struct VAR14) &&
VAR7 != FUN2(VAR2->VAR8[VAR15]))
return -VAR12;
*VAR6 = VAR7;
*VAR3 = FUN3(VAR2->VAR8[VAR13]);
*VAR4 = FUN3(VAR2->VAR8[VAR15]);
return 0;
}

return -VAR12;
}