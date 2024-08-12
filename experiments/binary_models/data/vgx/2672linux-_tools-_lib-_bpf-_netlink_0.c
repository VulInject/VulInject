static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
qdisc_config_t VAR5;
int VAR6;
struct libbpf_nla_req VAR7;

VAR6 = FUN2(VAR2, &VAR5);
if (VAR6 < 0)
return VAR6;

memset(&VAR7, 0, sizeof(VAR7));
VAR7.VAR8.VAR9   = FUN3(sizeof(struct VAR10));
VAR7.VAR8.VAR11 = VAR12 | VAR13 | VAR4;
VAR7.VAR8.VAR14  = VAR3;
VAR7.VAR15.VAR16  = VAR17;
VAR7.VAR15.VAR18 = FUN4(VAR2, VAR19, 0);

VAR6 = FUN5(&VAR7);
if (VAR6 < 0)
return VAR6;

return FUN6(&VAR7, VAR20, NULL, NULL, NULL);
}