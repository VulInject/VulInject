static int
FUN1(struct VAR1 *VAR2,
odp_port_t VAR3,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7;
struct rte_flow_tunnel VAR8;
struct rte_flow_error VAR9;
uint32_t VAR10;
struct VAR4 *VAR11;
int VAR12;

VAR11 = FUN2(VAR3, VAR5->VAR13);
if (VAR11 == NULL) {
return -1;
}

VAR12 = FUN3(VAR5, &VAR8, VAR11, &VAR2->VAR14);
if (VAR12) {
goto VAR15;
}
VAR12 = FUN4(VAR11, &VAR8, &VAR7,
&VAR10, &VAR9);
if (VAR12) {
FUN5(&VAR16, ""
"", FUN6(VAR11), VAR9.VAR17,
VAR9.VAR18);
goto VAR15;
}
FUN7(VAR2, VAR11, VAR7, VAR10);

VAR15:
FUN8(VAR11);
return VAR12;
}