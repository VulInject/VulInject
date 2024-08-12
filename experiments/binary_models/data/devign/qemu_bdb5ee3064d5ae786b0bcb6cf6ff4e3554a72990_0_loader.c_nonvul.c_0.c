void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR4, &VAR5, VAR6)
    {
        if (!VAR4->VAR7)
        {
            FUN3(VAR2, "" VAR8 ""%VAR9\"", VAR4->VAR10, VAR4->VAR11, VAR4->VAR12 ? "" : "", VAR4->VAR13);
        }
        else
        {
            FUN3(VAR2, ""
                                ""%VAR9\"",
                           VAR4->VAR14, VAR4->VAR7, VAR4->VAR11, VAR4->VAR13);
        }
    }
}