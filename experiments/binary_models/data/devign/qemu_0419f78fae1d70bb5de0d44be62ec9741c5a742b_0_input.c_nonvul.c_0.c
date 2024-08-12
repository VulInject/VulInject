void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    int VAR7 = FUN2(VAR4, "");
    int VAR8 = 0;
    FUN3(VAR6, &VAR9, VAR10)
    {
        if (VAR6->VAR11 != VAR7)
        {
            continue;
        }
        if (!(VAR6->VAR12->VAR13 & (VAR14 | VAR15)))
        {
            FUN4("", VAR6->VAR12->VAR16);
            return;
        }
        VAR8 = 1;
        FUN5(VAR6);
        break;
    }
    if (!VAR8)
    {
        FUN4("", VAR7);
    }
    FUN6();
}