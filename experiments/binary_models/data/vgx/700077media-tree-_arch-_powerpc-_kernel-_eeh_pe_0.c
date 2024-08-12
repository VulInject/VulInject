static void *FUN1(void *VAR1, void *VAR2)
{
struct VAR3 *VAR4 = (struct VAR3 *)VAR1;
int VAR5 = *((int *)VAR2);
struct VAR6 *VAR7, *VAR8;
struct VAR9 *VAR10;


if (VAR4->VAR5 & VAR11)
return NULL;

VAR4->VAR5 &= ~VAR5;


if (!(VAR5 & VAR12))
return NULL;

VAR4->VAR13 = 0;
FUN2(VAR4, VAR7, VAR8) {
VAR10 = FUN3(VAR7);
if (!VAR10)
continue;

VAR10->VAR14 = VAR15;
}


if (VAR4->VAR5 & VAR16)
VAR4->VAR5 &= ~VAR17;

return NULL;
}