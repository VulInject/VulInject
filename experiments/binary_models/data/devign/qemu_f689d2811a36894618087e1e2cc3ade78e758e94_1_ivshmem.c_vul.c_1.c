static int FUN1(VAR1 *VAR2, int VAR3, uint8_t VAR4, VAR5 **VAR6)
{
    void *VAR7;
    VAR7 = FUN2(0, VAR2->VAR8, VAR9 | VAR10, VAR11, VAR3, 0);
    if (VAR7 == VAR12)
    {
        FUN3(VAR6, VAR13, "");
        return -1;
    }
    VAR2->VAR14 = VAR3;
    FUN4(&VAR2->VAR15, FUN5(VAR2), "", VAR2->VAR8, VAR7);
    FUN6(&VAR2->VAR15, FUN7(VAR2));
    FUN8(&VAR2->VAR16, 0, &VAR2->VAR15);
    FUN9(FUN10(VAR2), 2, VAR4, &VAR2->VAR16);
    return 0;
}