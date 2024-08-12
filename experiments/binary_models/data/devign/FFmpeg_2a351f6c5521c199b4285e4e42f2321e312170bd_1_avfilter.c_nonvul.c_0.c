int FUN1(VAR1 *VAR2)
{
    int VAR3 = -1;
    FUN2(NULL, VAR4);
    FUN3(NULL, VAR2, 1);
    if (VAR2->VAR5)
        return VAR6;
    if (VAR2->VAR7->VAR4)
        VAR3 = VAR2->VAR7->FUN4(VAR2);
    else if (VAR2->VAR8->VAR9[0])
        VAR3 = FUN1(VAR2->VAR8->VAR9[0]);
    if (VAR3 == VAR6 && VAR2->VAR10)
    {
        VAR11 *VAR12 = VAR2->VAR10;
        VAR2->VAR10 = NULL;
        VAR3 = FUN5(VAR2, VAR12);
    }
    if (VAR3 < 0)
    {
        if (VAR3 == VAR6)
            VAR2->VAR5 = 1;
    }
    return VAR3;
}