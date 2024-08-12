static struct VAR1 *
FUN1(struct VAR2 *VAR3,
char *VAR4, u8 VAR5)
{
struct VAR6 *VAR7 = VAR3->VAR8;
struct VAR9 *VAR10 = VAR3->VAR10;
struct mlxsw_sp_acl_atcam_lkey_id_ht_key VAR11 = {{ 0 } };
struct VAR12 *VAR12 = VAR10->VAR12;
struct VAR13 *VAR14 = FUN2(VAR12->VAR15);
struct VAR1 *VAR16;

memcpy(VAR11.VAR4, VAR4, sizeof(VAR11.VAR4));
FUN3(VAR14, VAR11.VAR4,
VAR17,
VAR18);
VAR11.VAR5 = VAR5;
VAR16 = FUN4(&VAR7->VAR19, &VAR11,
VAR20);
if (VAR16) {
FUN5(&VAR16->VAR21);
return VAR16;
}

return FUN6(VAR3, &VAR11);
}