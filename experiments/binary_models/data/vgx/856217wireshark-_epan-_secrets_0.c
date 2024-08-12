static void
FUN1(const char *VAR1, const char *VAR2, gboolean VAR3, char **VAR4)
{
gnutls_x509_privkey_t VAR5;
gnutls_privkey_t VAR6 = NULL;
char *VAR7 = NULL;
int VAR8;
cert_key_id_t VAR9;
size_t VAR10 = sizeof(VAR9);

VAR11 *VAR12 = FUN2(VAR1, "");
if (!VAR12) {
*VAR4 = FUN3("", VAR1, FUN4(VAR13));
return;
}

if (!VAR2 || !VAR2[0]) {
VAR5 = FUN5(VAR12, &VAR7);
} else {

VAR5 = FUN6(VAR12, VAR2, &VAR7);
}
fclose(VAR12);
if (!VAR5) {
*VAR4 = FUN3("", VAR1, VAR7);
FUN7(VAR7);
return;
}

FUN8(&VAR6);
VAR8 = FUN9(VAR6, VAR5,
VAR14|VAR15);
if (VAR8 < 0) {
*VAR4 = FUN3("", VAR1, FUN10(VAR8));
goto VAR16;
}
VAR8 = FUN11(VAR5, VAR17, VAR9.VAR9, &VAR10);
if (VAR8 < 0 || VAR10 != sizeof(VAR9)) {
*VAR4 = FUN3("", VAR1, FUN10(VAR8));
goto VAR16;
}


if (VAR3) {
FUN12(&VAR9, VAR6);
VAR6 = NULL;
}

VAR16:
FUN13(VAR5);
FUN14(VAR6);
}