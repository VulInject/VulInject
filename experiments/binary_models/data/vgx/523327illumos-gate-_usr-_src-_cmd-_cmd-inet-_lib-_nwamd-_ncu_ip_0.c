static void
FUN1(const char *VAR1, ipadm_addrobj_t VAR2, dhcp_ipc_type_t VAR3)
{
struct VAR4 *VAR5;
pthread_attr_t VAR6;

FUN2(VAR7, "",
FUN3(VAR3), VAR1);

VAR5 = malloc(sizeof (*VAR5));
if (VAR5 == NULL) {
FUN2(VAR8, ""
"");
return;
}

VAR5->VAR9 = strdup(VAR1);
VAR5->VAR10 = VAR3;
VAR5->VAR2 = VAR2;

(void) pthread_attr_init(&VAR6);
(void) FUN4(&VAR6, VAR11);
if (FUN5(NULL, &VAR6, VAR12, VAR5) == -1) {
FUN2(VAR8, "");
free(VAR5->VAR9);
free(VAR5);
(void) pthread_attr_destroy(&VAR6);
return;
}
(void) pthread_attr_destroy(&VAR6);
}