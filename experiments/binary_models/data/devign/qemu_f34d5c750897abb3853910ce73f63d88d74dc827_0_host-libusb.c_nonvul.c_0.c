static void FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5)
{
    int VAR6;
    FUN2(VAR2->VAR7, VAR2->VAR8, VAR3);
    FUN3(VAR2);
    VAR6 = FUN4(VAR2->VAR9, VAR3);
    if (VAR6 != 0)
    {
        FUN5("", VAR6);
        VAR5->VAR10 = VAR11;
        if (VAR6 == VAR12)
        {
            FUN6(VAR2);
        }
        return;
    }
    VAR5->VAR10 = FUN7(VAR2, VAR3);
    if (VAR5->VAR10 != VAR13)
    {
        return;
    }
    FUN8(VAR2);
}