VAR1 FUN1(VAR2 *VAR3, float64 VAR4, float64 VAR5)
{
    float64 VAR6;
    VAR6 = FUN2(VAR4, VAR5, &VAR3->VAR7);
    if (FUN3(VAR6))
    {
        if (!FUN3(VAR4) && !FUN3(VAR5))
        {
            VAR6 = VAR8;
            if (FUN4(VAR4, VAR6, &VAR3->VAR7))
                VAR6 = FUN5(VAR6);
        }
    }
    return VAR6;
}