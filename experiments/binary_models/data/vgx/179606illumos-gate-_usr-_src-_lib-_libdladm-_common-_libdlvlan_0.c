VAR1
FUN1(dladm_handle_t VAR2, datalink_id_t VAR3,
VAR4 *VAR5, uint32_t VAR6)
{
dladm_status_t VAR7;
dladm_vnic_attr_t VAR8, *VAR9 = &VAR8;

if ((VAR7 = FUN2(VAR2, VAR3, VAR9, VAR6)) !=
VAR10)
return (VAR7);

VAR5->VAR11 = VAR9->VAR12;
VAR5->VAR13 = VAR9->VAR14;
VAR5->VAR15 = VAR9->VAR16;
return (VAR7);
}