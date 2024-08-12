static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
struct VAR4 *VAR5;
struct VAR6 *VAR7;

FUN2(VAR5) {
if (VAR5->VAR8)
continue;

VAR7 = FUN3(VAR5->VAR9,
struct VAR6, VAR10);
VAR3 = FUN4(VAR2, (void *)(VAR7 + 1),
((void *)VAR7) + VAR7->VAR10.VAR11,
VAR5->VAR12,
VAR5->VAR13, VAR5->VAR14);
if (VAR3)
break;
}
if (VAR3 >= 0)
VAR3 = FUN5(VAR2);
if (VAR3 < 0 && VAR15 == 0)
VAR15 = VAR3;

return VAR3;
}