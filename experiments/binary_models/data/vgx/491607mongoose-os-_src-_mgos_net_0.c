static void FUN1(void) {
char VAR1[16];
struct mgos_net_ip_info VAR2;
memset(&VAR2, 0, sizeof(VAR2));
if (FUN2(VAR3, 0, &VAR2) &&
VAR2.VAR4.VAR5.VAR6 != 0 && VAR2.VAR7.VAR5.VAR6 != 0) {
goto VAR8;
}
memset(&VAR2, 0, sizeof(VAR2));
if (FUN2(VAR9, 0, &VAR2) &&
VAR2.VAR4.VAR5.VAR6 != 0 && VAR2.VAR7.VAR5.VAR6 != 0) {
goto VAR8;
}
memset(&VAR2, 0, sizeof(VAR2));
if (FUN2(VAR10, 0, &VAR2) &&
VAR2.VAR4.VAR5.VAR6 != 0 && VAR2.VAR7.VAR5.VAR6 != 0) {
goto VAR8;
}
FUN3(FUN4(VAR11), &VAR2.VAR7);
VAR8:
FUN5(&VAR2.VAR7, VAR1);
struct VAR12 *VAR13 = FUN6();
if (VAR13->VAR1 != NULL && strcmp(VAR13->VAR1, VAR1) == 0) {
return;
}
FUN7(VAR14, ("", "", VAR1));
FUN8(VAR13, VAR1);
}