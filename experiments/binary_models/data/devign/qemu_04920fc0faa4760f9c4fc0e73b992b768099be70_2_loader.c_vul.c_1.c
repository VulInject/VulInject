void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6;
    FUN2(VAR6, &VAR7, VAR8)
    {
        if (!VAR6->VAR9)
        {
            FUN3(VAR2, "" VAR10 ""%VAR11\"", VAR6->VAR12, VAR6->VAR13, VAR6->VAR14 ? "" : "", VAR6->VAR15);
        }
        else
        {
            FUN3(VAR2, ""
                                ""%VAR11\"",
                           VAR6->VAR16, VAR6->VAR9, VAR6->VAR13, VAR6->VAR15);
        }
    }
}