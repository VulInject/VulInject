static VAR1 FUN1(struct VAR2 *VAR3, char *VAR4)
{
xen_domain_handle_t VAR5;
int VAR6;
VAR6 = FUN2(VAR7, VAR5);
if (VAR6)
return FUN3(VAR3, VAR4);
VAR6 = sprintf(VAR4, "", VAR5);
return VAR6;
}