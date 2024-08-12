VAR1 FUN1(VAR2)(VAR3 *VAR4, float64 VAR5, float64 VAR6)
{
    float64 VAR7;
    VAR7 = FUN2(VAR5, VAR6, &VAR4->VAR8);
    if (FUN3(VAR7))
    {
        if (!FUN3(VAR5) && !FUN3(VAR6))
        {
            VAR7 = VAR9;
            if (FUN4(VAR5, VAR7, &VAR4->VAR8))
                VAR7 = FUN5(VAR7);
        }
    }
    return VAR7;
}