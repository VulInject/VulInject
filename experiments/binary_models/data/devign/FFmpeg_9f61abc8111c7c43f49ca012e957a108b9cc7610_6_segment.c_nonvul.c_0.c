static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR1 *VAR7 = VAR5->VAR8;
    int VAR9 = 0;
    if (VAR3)
    {
        FUN2(VAR7);
        VAR5->VAR8 = NULL;
        if ((VAR9 = FUN3(VAR2)) < 0)
            return VAR9;
        VAR7 = VAR5->VAR8;
    }
    if (VAR5->VAR10)
        VAR5->VAR11 %= VAR5->VAR10;
    if (FUN4(VAR7->VAR12, sizeof(VAR7->VAR12), VAR2->VAR12, VAR5->VAR11++) < 0)
        return FUN5(VAR13);
    if ((VAR9 = VAR2->FUN6(VAR2, &VAR7->VAR14, VAR7->VAR12, VAR15, NULL)) < 0)
        return VAR9;
    if (VAR7->VAR16->VAR17 && VAR7->VAR6)
        FUN7(VAR7->VAR6, "", "", 0);
    if (VAR3)
    {
        if ((VAR9 = FUN8(VAR7, NULL)) < 0)
            return VAR9;
    }
    return 0;
}