static int FUN1(struct VAR1 *VAR2)
{
struct mana_register_filter_resp VAR3 = {};
struct mana_register_filter_req VAR4 = {};
int VAR5;

FUN2(&VAR4.VAR6, VAR7,
sizeof(VAR4), sizeof(VAR3));
VAR4.VAR8 = VAR2->VAR9;
memcpy(VAR4.VAR10, VAR2->VAR10, VAR11);

VAR5 = FUN3(VAR2->VAR12, &VAR4, sizeof(VAR4), &VAR3,
sizeof(VAR3));
if (VAR5) {
FUN4(VAR2->VAR13, "", VAR5);
return VAR5;
}

VAR5 = FUN5(&VAR3.VAR6, VAR7,
sizeof(VAR3));
if (VAR5 || VAR3.VAR6.VAR14) {
FUN4(VAR2->VAR13, "",
VAR5, VAR3.VAR6.VAR14);
return VAR5 ? VAR5 : -VAR15;
}

VAR2->VAR16 = VAR3.VAR17;
return 0;
}