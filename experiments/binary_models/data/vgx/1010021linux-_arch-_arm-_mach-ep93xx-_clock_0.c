static int FUN1(struct VAR1 *VAR2, unsigned long VAR3,
unsigned long VAR4)
{
struct VAR5 *VAR6 = FUN2(VAR2);
u32 VAR7 = FUN3(VAR6->VAR8) & ~VAR6->VAR9;
int VAR10;

for (VAR10 = 0; VAR10 < VAR6->VAR11; VAR10++)
if (VAR3 == VAR4 / VAR6->VAR12[VAR10]) {
VAR7 |= VAR10 << VAR6->VAR13;
break;
}

if (VAR10 == VAR6->VAR11)
return -VAR14;

FUN4(VAR7, VAR6->VAR8);

return 0;
}