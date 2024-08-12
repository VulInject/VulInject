static void FUN1(struct VAR1 *VAR2,
unsigned VAR3, int VAR4)
{
struct VAR5 *VAR6 = VAR2->VAR6;
u64 VAR7 = (VAR8)VAR2->VAR9.VAR10 << VAR11;

switch (VAR3) {
case VAR12:
if (VAR4 > 0)
FUN2(VAR7, &VAR6->VAR13);
else
FUN3(VAR7, &VAR6->VAR13);
break;
case VAR14:
if (VAR4 > 0)
FUN2(VAR7, &VAR6->VAR15);
else
FUN3(VAR7, &VAR6->VAR15);
break;
}
}