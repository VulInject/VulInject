static void
FUN1(void **VAR1)
{
struct VAR2 *VAR3;
krb5_context VAR4 = *VAR1;
krb5_data VAR5 = FUN2("");
krb5_data VAR6 = FUN2("");
krb5_data VAR7 = FUN2("");

VAR3 = FUN3(VAR4, &VAR5, &VAR6, 0);
FUN4(VAR4, &VAR7);

FUN5(FUN6(VAR8, VAR5.VAR9, VAR5.VAR10), VAR3);
FUN7(VAR11, 1);
FUN7(VAR12, FUN8(&VAR5, &VAR6));
}