static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10;
    size_t VAR11;
    VAR8 = FUN2(VAR2);
    VAR11 = 0;
    VAR10 = NULL;
    for (;;)
    {
        size_t VAR12;
        VAR6 = FUN3(VAR4, sizeof(VAR5));
        if (!VAR6)
        {
            break;
        }
        VAR12 = FUN4(VAR6->VAR13, VAR6->VAR14);
        if (VAR12 > VAR11)
        {
            FUN5(VAR10);
            VAR10 = FUN6(VAR12);
            VAR11 = VAR12;
        }
        FUN7(VAR6->VAR13, VAR6->VAR14, 0, VAR10, VAR12);
        FUN8(VAR8, VAR10, VAR12);
        FUN9(VAR4, VAR6, 0);
        FUN5(VAR6);
    }
    FUN5(VAR10);
    FUN10(VAR2, VAR4);
}