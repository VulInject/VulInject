static struct VAR1 *FUN1(struct VAR2 *VAR2, int VAR3, int VAR4,
const VAR5 *VAR6,
const VAR5 *VAR7)
{
struct flowi6 VAR8;
struct VAR1 *VAR9;
int VAR10;

memset(&VAR8, 0, sizeof(VAR8));
VAR8.VAR11 = FUN2(VAR2, VAR4);
VAR8.VAR12 = VAR13;
memcpy(&VAR8.VAR7, VAR7, sizeof(VAR8.VAR7));
if (VAR6)
memcpy(&VAR8.VAR6, VAR6, sizeof(VAR8.VAR6));

VAR9 = FUN3(VAR2, NULL, &VAR8);

VAR10 = VAR9->VAR14;
if (VAR9->VAR14) {
FUN4(VAR9);
VAR9 = FUN5(VAR10);
}

return VAR9;
}