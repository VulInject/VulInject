int FUN1(p_fm_config_conx_hdlt VAR1, fm_mgr_type_t VAR2, int argc, char *argv[]) {
fm_mgr_config_errno_t	VAR3;
fm_msg_ret_code_t		VAR4;

if((VAR3 = FUN2(VAR1, VAR5, VAR6, VAR2, 0, NULL, &VAR4)) != VAR7)
{
fprintf(VAR8, ""
"",
VAR3, FUN3(VAR3),VAR4,
FUN4(VAR4));
} else {
FUN5(""
"");
}
return 0;
}