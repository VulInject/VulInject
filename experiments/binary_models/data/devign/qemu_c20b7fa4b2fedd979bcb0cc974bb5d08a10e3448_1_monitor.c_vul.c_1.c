FUN1(MonitorEvent VAR1, VAR2 *VAR3)
{
    VAR4 *VAR5;
    int64_t VAR6 = FUN2(VAR7);
    assert(VAR1 < VAR8);
    FUN3(&VAR9);
    VAR5 = &(VAR10[VAR1]);
    FUN4(VAR1, VAR3, VAR5->VAR11, VAR5->VAR12, VAR6);
    if (!VAR5->VAR11)
    {
        FUN5(VAR1, VAR3);
        VAR5->VAR12 = VAR6;
    }
    else
    {
        int64_t VAR13 = VAR6 - VAR5->VAR12;
        if (VAR5->VAR3 || VAR13 < VAR5->VAR11)
        {
            if (VAR5->VAR3)
            {
                FUN6(VAR5->VAR3);
            }
            else
            {
                int64_t VAR14 = VAR5->VAR12 + VAR5->VAR11;
                FUN7(VAR5->VAR15, VAR14);
            }
            VAR5->VAR3 = VAR3;
            FUN8(VAR5->VAR3);
        }
        else
        {
            FUN5(VAR1, VAR3);
            VAR5->VAR12 = VAR6;
        }
    }
    FUN9(&VAR9);
}