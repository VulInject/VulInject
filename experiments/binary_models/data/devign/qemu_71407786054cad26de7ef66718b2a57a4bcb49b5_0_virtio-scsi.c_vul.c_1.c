bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    bool VAR7 = false;
    FUN2(VAR2);
    while ((VAR6 = FUN3(VAR2, VAR4)))
    {
        VAR7 = true;
        FUN4(VAR2, VAR6);
    }
    FUN5(VAR2);
    return VAR7;
}