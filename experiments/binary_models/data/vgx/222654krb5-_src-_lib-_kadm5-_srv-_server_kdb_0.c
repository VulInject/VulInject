static VAR1
FUN1(kadm5_server_handle_t VAR2)
{
kadm5_ret_t VAR3;
krb5_key_salt_tuple VAR4[1];
kadm5_principal_ent_rec VAR5;
long VAR6 = VAR7 | VAR8 | VAR9;


memset(&VAR5, 0, sizeof(VAR5));
VAR5.VAR10 = VAR11;
VAR5.VAR12 = VAR13;
VAR5.VAR14 = 0;
VAR4[0].VAR15 = VAR2->VAR16.VAR17;
VAR4[0].VAR18 = VAR19;
VAR3 = FUN2(VAR2, &VAR5, VAR6, 1, VAR4, NULL);
if (VAR3)
return VAR3;


return FUN3(VAR2, VAR5.VAR10, 0, 1, VAR4,
NULL, NULL);
}