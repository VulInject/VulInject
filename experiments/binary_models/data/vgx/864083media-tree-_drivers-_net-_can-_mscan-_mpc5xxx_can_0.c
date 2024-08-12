static int FUN1(struct VAR1 *VAR2, pm_message_t VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2);
struct VAR6 *VAR7 = FUN3(VAR5);
struct VAR8 *VAR9 = (struct VAR8 *)VAR7->VAR10;

FUN4(&VAR11, VAR9, sizeof(*VAR9));

return 0;
}