static inline int FUN1(const struct VAR1 *VAR2,
int VAR3,
VAR4 *VAR5,
VAR4 *VAR6)
{
int VAR7;
u32 VAR8;
u32 VAR9;

for (VAR7 = 0; VAR7 < VAR2->VAR10; VAR7++) {
if (VAR2->VAR11[VAR7] == VAR3)
break;
}
if (FUN2(VAR7 == VAR2->VAR10))
return -VAR12;

VAR8 = (1 << VAR2->VAR13);
if (VAR7 > VAR8)
VAR7 -= VAR8;

VAR9 = VAR8 - 1;
*VAR5 = (VAR9  << VAR2->VAR14);
*VAR6 = (VAR7 << VAR2->VAR14);

return 0;
}