static void FUN1(void *VAR1)
{
    int16_t VAR2;
    size_t VAR3 = 7;
    VAR4 *VAR5;
    VAR4 *VAR6 = VAR1;
    VAR7 *VAR8 = VAR6->VAR8;
    FUN2(VAR6, VAR3, "", &VAR2);
    FUN3(VAR5, &VAR8->VAR9, VAR10)
    {
        if (VAR5->VAR2 == VAR2)
        {
            break;
        }
    }
    if (VAR5)
    {
        VAR5->VAR11 = 1;
        FUN4(&VAR5->VAR12);
        VAR5->VAR11 = 0;
        FUN5(VAR6->VAR8, VAR5);
    }
    FUN6(VAR8, VAR6, 7);
    return;