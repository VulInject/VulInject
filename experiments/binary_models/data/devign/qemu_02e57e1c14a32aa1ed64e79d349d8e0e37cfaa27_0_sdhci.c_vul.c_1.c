static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    FUN4(VAR6, VAR4);
    if (VAR4 && *VAR4)
    {
        return;
    }
    if (VAR6->VAR9)
    {
        FUN5(VAR6->VAR10, VAR6->VAR9, "");
    }
    else
    {
        VAR6->VAR10 = &VAR11;
    }
    FUN6(VAR8, &VAR6->VAR12);
    FUN7(VAR8, &VAR6->VAR13);