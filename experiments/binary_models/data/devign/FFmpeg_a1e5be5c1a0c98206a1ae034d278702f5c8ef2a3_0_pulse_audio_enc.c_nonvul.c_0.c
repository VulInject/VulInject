static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    pa_usec_t VAR10;
    int VAR11;
    FUN2(VAR8->VAR12);
    FUN3(VAR8->VAR3, &VAR10, &VAR11);
    FUN4(VAR8->VAR12);
    if (VAR6)
        *VAR6 = FUN5();
    if (VAR5)
        *VAR5 = VAR8->VAR13 - (VAR11 ? -VAR10 : VAR10);
}