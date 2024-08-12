static int FUN1(struct VAR1 *VAR2,
u64 VAR3, u64 VAR4,
unsigned long VAR5)
{
unsigned long VAR6;
int VAR7;

VAR2->VAR8.VAR9 = 999;
FUN2(&VAR2->VAR8.VAR10, -1);

FUN3(VAR6, 0, VAR11 - 1) {
VAR2->VAR8.VAR12 = VAR6;
VAR7 = FUN4(VAR2, VAR3, VAR4, VAR5);
if (VAR7)
break;
}

memset(&VAR2->VAR8, 0, sizeof(VAR2->VAR8));

return VAR7;
}