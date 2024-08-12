static int FUN1(struct VAR1 *VAR2,
u32 VAR3,
u8 VAR4)
{
struct mmc_command VAR5;
u32 VAR6;

memset(&VAR5, 0, sizeof(VAR5));
VAR6 = FUN2(1, 0, 0, VAR3, VAR4);
VAR5.VAR7 = VAR8;
VAR5.VAR6 = VAR6;
VAR5.VAR9 = VAR10 | VAR11;

return FUN3(VAR2->VAR12, &VAR5, 0);
}