static VAR1 FUN1(VAR2 *VAR3, int64_t VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR3->VAR8;
    if (VAR5 == VAR9)
    {
        VAR4 = FUN2(VAR7->VAR10, VAR4, VAR5);
        if (VAR4 <= 0)
        {
            VAR4 = FUN2(VAR7->VAR10, -1, VAR11);
            FUN2(VAR7->VAR10, VAR7->VAR12, VAR13);
            if (VAR4 <= 0)
                return VAR7->VAR12;
        }
        return VAR4;
    }
    VAR4 = FUN3(VAR7->VAR14, VAR4, VAR5);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    else if (VAR4 <= VAR7->VAR12)
    {
        VAR7->VAR4 = VAR4;
        return VAR4;
    }
    else
    {
        if (FUN3(VAR7->VAR14, VAR7->VAR4, VAR13) < 0)
        {
            FUN4(VAR3, VAR15, "");
        }
        return FUN5(VAR16);
    }
}