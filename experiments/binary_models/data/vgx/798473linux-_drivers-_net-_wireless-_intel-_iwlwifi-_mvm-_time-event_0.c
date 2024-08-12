void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct iwl_time_event_cmd VAR7 = {};
u32 VAR8;
int VAR9;

if (!FUN2(VAR2, VAR6, &VAR8))
return;


VAR7.VAR10 = FUN3(VAR8);
VAR7.VAR11 = FUN3(VAR12);
VAR7.VAR13 =
FUN3(FUN4(VAR4->VAR10, VAR4->VAR14));

FUN5(VAR2, "", FUN6(VAR7.VAR10));
VAR9 = FUN7(VAR2, VAR15, 0,
sizeof(VAR7), &VAR7);
if (VAR9)
FUN8(VAR2, "");
}