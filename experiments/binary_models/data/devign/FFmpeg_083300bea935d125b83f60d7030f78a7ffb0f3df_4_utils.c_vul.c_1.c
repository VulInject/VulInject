int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    int VAR4;
    VAR2->VAR5 = VAR3->VAR5;
    VAR4 = FUN2(VAR2->VAR6, VAR3->VAR6);
    if (VAR4 < 0)
        return VAR4;
    FUN3(!VAR2->VAR7);
    if (VAR3->VAR7 && !(VAR2->VAR7 = FUN4(VAR3->VAR7)))
    {
        FUN5(VAR2->VAR5, VAR2);
        return FUN6(VAR8);
    }
    return 0;
}