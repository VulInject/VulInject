static void FUN1(void *VAR1)
{
    ssize_t VAR2;
    int16_t VAR3;
    size_t VAR4 = 7;
    VAR5 *VAR6;
    VAR5 *VAR7 = VAR1;
    VAR8 *VAR9 = VAR7->VAR9;
    VAR2 = FUN2(VAR7, VAR4, "", &VAR3);
    if (VAR2 < 0)
    {
        FUN3(VAR9, VAR7, VAR2);
        return;
    }
    FUN4(VAR7->VAR3, VAR7->VAR10, VAR3);
    FUN5(VAR6, &VAR9->VAR11, VAR12)
    {
        if (VAR6->VAR3 == VAR3)
        {
            break;
        }
    }
    if (VAR6)
    {
        VAR6->VAR13 = 1;
        FUN6(&VAR6->VAR14);
        VAR6->VAR13 = 0;
        FUN7(VAR7->VAR9, VAR6);
    }
    FUN3(VAR9, VAR7, 7);
    return;
}