void FUN1(VAR1 *VAR2, uint32_t VAR3, VAR4 **VAR5)
{
    const VAR6 *VAR7 = FUN2(VAR3);
    VAR8 *VAR9 = &VAR2->VAR9;
    VAR10 *VAR11 = FUN3(VAR2);
    uint64_t VAR12;
    if (!VAR3)
    {
        VAR12 = 0;
    }
    else if (!VAR7)
    {
        FUN4(VAR5, "" VAR13, VAR3);
        return;
    }
    else
    {
        VAR12 = VAR7->VAR12;
    }
    VAR2->VAR3 = VAR3;
    VAR9->VAR14[VAR15] = VAR12 & VAR11->VAR16;
    if (FUN5())
    {
        int VAR17 = FUN6(VAR2, VAR2->VAR3);
        if (VAR17 < 0)
        {
            FUN7(VAR5, -VAR17, "");
        }
    }
}