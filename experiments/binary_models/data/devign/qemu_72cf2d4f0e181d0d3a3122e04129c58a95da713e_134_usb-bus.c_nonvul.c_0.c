void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    VAR5 *VAR6;
    VAR7 *VAR8;
    if (FUN2(&VAR9))
    {
        FUN3(VAR2, "");
        return;
    }
    FUN4(VAR4, &VAR9, VAR10)
    {
        FUN4(VAR8, &VAR4->VAR11, VAR10)
        {
            VAR6 = VAR8->VAR6;
            if (!VAR6)
                continue;
            FUN3(VAR2, "", VAR4->VAR12, VAR6->VAR13, FUN5(VAR6->VAR14), VAR6->VAR15);
        }
    }
}