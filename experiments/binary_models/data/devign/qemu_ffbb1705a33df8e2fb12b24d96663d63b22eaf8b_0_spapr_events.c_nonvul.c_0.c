static VAR1 *FUN1(uint32_t VAR2, bool VAR3)
{
    VAR4 *VAR5 = FUN2(FUN3());
    VAR1 *VAR6 = NULL;
    FUN4(VAR6, &VAR5->VAR7, VAR8)
    {
        const VAR9 *VAR10 = FUN5(VAR5, VAR6->VAR11);
        if (VAR6->VAR3 != VAR3)
        {
            continue;
        }
        if (VAR10->VAR12 & VAR2)
        {
            break;
        }
    }
    if (VAR6)
    {
        FUN6(&VAR5->VAR7, VAR6, VAR8);
    }
    return VAR6;
}