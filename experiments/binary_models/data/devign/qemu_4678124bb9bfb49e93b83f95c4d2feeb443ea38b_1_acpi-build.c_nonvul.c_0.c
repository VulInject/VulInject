FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, unsigned VAR7, unsigned VAR8, const char *VAR9, const char *VAR10)
{
    VAR11 *VAR12 = FUN2(VAR2, sizeof(*VAR12));
    unsigned VAR13 = (char *)&VAR12->VAR14 - VAR2->VAR15;
    unsigned VAR16 = (char *)&VAR12->VAR17 - VAR2->VAR15;
    FUN3(VAR4, VAR18, VAR13, sizeof(VAR12->VAR14), VAR18, VAR7);
    FUN4(VAR12, VAR6);
    FUN3(VAR4, VAR18, VAR16, sizeof(VAR12->VAR17), VAR18, VAR8);
    FUN5(VAR4, VAR2, (void *)VAR12, "", sizeof(*VAR12), 1, VAR9, VAR10);
}