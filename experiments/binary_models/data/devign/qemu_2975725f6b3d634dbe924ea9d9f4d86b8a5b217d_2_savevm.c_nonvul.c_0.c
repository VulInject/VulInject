int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = 1;
    FUN2(VAR6, &VAR8, VAR9)
    {
        if (VAR6->VAR10 == NULL)
            continue;
        FUN3(VAR4, VAR11);
        FUN4(VAR4, VAR6->VAR12);
        VAR7 = VAR6->FUN5(VAR2, VAR4, VAR11, VAR6->VAR13);
        if (VAR7 <= 0)
        {
            break;
        }
    }
    if (VAR7 != 0)
    {
        return VAR7;
    }
    VAR7 = FUN6(VAR4);
    if (VAR7 != 0)
    {
        FUN7(VAR2, VAR4);
    }
    return VAR7;
}