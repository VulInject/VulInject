static int FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 *VAR5, VAR6 **VAR7)
{
    FUN2(sizeof(*VAR5) != 20);
    if (FUN3(VAR2, VAR5, sizeof(*VAR5), VAR7) < 0)
    {
        FUN4(VAR7, "");
        FUN5(VAR2);
        return -1;
    }
    FUN6(&VAR5->VAR8);
    FUN7(&VAR5->VAR9);
    FUN7(&VAR5->VAR10);
    FUN7(&VAR5->VAR11);
    FUN8(VAR5->VAR9, FUN9(VAR5->VAR9), VAR5->VAR10, FUN10(VAR5->VAR10), VAR5->VAR11);
    if (VAR5->VAR8 != VAR12)
    {
        FUN11(VAR7, "");
        FUN5(VAR2);
        return -1;
    }
    if (VAR5->VAR9 != VAR3)
    {
        FUN11(VAR7, "", VAR5->VAR9, VAR3);
        FUN5(VAR2);
        return -1;
    }
    return 0;
}