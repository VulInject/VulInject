static void FUN1(void)
{
    VAR1 = FUN2(sizeof(*VAR1));
    FUN3(VAR1, "", VAR2);
    FUN4(&VAR3, VAR1, "");
    VAR4 = FUN2(sizeof(*VAR4));
    FUN3(VAR4, "", 65536);
    FUN4(&VAR5, VAR4, "");
    FUN5(&VAR6, &VAR3);
    FUN5(&VAR7, &VAR3);
}