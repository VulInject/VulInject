static void
FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR5;
struct VAR6 *VAR7;
bfa_mbox_cmd_cbfn_t VAR8;
void *VAR9;
u32 VAR10;


if (FUN2(&VAR4->VAR11))
return;


VAR10 = FUN3(VAR2->VAR12.VAR13);
if (VAR10)
return;


VAR7 = FUN4(&VAR4->VAR11, struct VAR6, VAR14);
FUN5(&VAR7->VAR14);
FUN6(VAR2, VAR7->VAR15, sizeof(VAR7->VAR15));


if (VAR7->VAR8) {
VAR8 = VAR7->VAR8;
VAR9 = VAR7->VAR9;
VAR7->VAR8 = NULL;
FUN7(VAR9);
}
}