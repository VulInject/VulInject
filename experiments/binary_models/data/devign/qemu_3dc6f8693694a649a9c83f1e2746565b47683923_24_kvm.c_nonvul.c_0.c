static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7;
    if (!VAR6->VAR8)
    {
        return 0;
    }
    VAR7 = FUN3(VAR2->VAR9, VAR10) ? FUN4(VAR2, VAR11, VAR6->VAR8) : -VAR12;
    if (VAR7 < 0)
    {
        int VAR13 = FUN3(VAR2->VAR9, VAR14) ? FUN4(VAR2, VAR15) : -VAR12;
        if (VAR13 <= 0 || VAR13 != VAR6->VAR8)
        {
            FUN5(""
                        "" VAR16 ""
                        "",
                        VAR6->VAR8, VAR13);
            return VAR7;
        }
    }
    return 0;
}