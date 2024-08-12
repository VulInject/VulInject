static void FUN1(VAR1 *VAR2, unsigned VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2, VAR4, VAR6);
    VAR7 *VAR8 = FUN3(&VAR5->VAR9);
    VAR10 *VAR11 = FUN4(VAR8, VAR3);
    int VAR12;
    while (VAR11)
    {
        VAR12 = FUN5(VAR11);
        if (!FUN6(VAR8, VAR12))
        {
            break;
        }
        if (VAR12 < VAR5->VAR13)
        {
            FUN7(VAR5, VAR12, VAR3);
        }
        VAR11 = FUN8(VAR11);
    }
}