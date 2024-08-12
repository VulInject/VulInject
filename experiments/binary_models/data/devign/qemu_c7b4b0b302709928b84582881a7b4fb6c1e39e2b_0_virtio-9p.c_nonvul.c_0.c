static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 0)
    {
        goto VAR6;
    }
    if (VAR4->VAR7.VAR8.VAR9 != 0)
    {
        VAR10 *VAR11;
        VAR11 = FUN2(sizeof(VAR10));
        memset(VAR11, sizeof(*VAR11), 0);
        VAR11->VAR12 = -1;
        VAR11->VAR13 = VAR4->VAR13;
        VAR11->VAR14 = VAR4->VAR14;
        VAR11->VAR15 = VAR4->VAR15;
        VAR11->VAR8.VAR9 = VAR4->VAR7.VAR8.VAR9;
        VAR11->VAR8.VAR16 = FUN3(VAR4->VAR7.VAR8.VAR16);
        VAR5 = FUN4(VAR2, VAR11);
        FUN5(VAR11);
    }
    FUN6(VAR2, VAR4, VAR5);
    return;
VAR6:
    FUN7(&VAR4->VAR7);
    FUN8(VAR2, VAR4->VAR13, VAR5);
    FUN5(VAR4);
}