static int FUN1(VAR1 *VAR2, uint32_t VAR3, uint32_t VAR4, uint32_t VAR5, VAR6 **VAR7)
{
    uint64_t VAR8;
    FUN2(VAR4, FUN3(VAR4), VAR3, FUN4(VAR3), VAR5);
    VAR8 = FUN5(VAR9);
    if (FUN6(VAR2, &VAR8, sizeof(VAR8), VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -VAR10;
    }
    VAR4 = FUN8(VAR4);
    if (FUN6(VAR2, &VAR4, sizeof(VAR4), VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -VAR10;
    }
    VAR3 = FUN8(VAR3);
    if (FUN6(VAR2, &VAR3, sizeof(VAR3), VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -VAR10;
    }
    VAR5 = FUN8(VAR5);
    if (FUN6(VAR2, &VAR5, sizeof(VAR5), VAR7) < 0)
    {
        FUN7(VAR7, "");
        return -VAR10;
    }
    return 0;
}