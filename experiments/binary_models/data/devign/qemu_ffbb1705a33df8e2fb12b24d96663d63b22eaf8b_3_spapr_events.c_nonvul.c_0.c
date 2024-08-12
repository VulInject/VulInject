static bool FUN1(uint32_t VAR1, bool VAR2)
{
    VAR3 *VAR4 = FUN2(FUN3());
    VAR5 *VAR6 = NULL;
    FUN4(VAR6, &VAR4->VAR7, VAR8)
    {
        const VAR9 *VAR10 = FUN5(VAR4, VAR6->VAR11);
        if (VAR6->VAR2 != VAR2)
        {
            continue;
        }
        if (VAR10->VAR12 & VAR1)
        {
            return true;
        }
    }
    return false;
}