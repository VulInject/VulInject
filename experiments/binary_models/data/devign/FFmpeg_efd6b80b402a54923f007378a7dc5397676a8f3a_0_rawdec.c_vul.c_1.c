int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    VAR6 = VAR7;
    if (FUN2(VAR4, VAR6) < 0)
        return FUN3(VAR8);
    VAR4->VAR9 = FUN4(VAR2->VAR10);
    VAR4->VAR11 = 0;
    VAR5 = FUN5(VAR2->VAR10, VAR4->VAR12, VAR6);
    if (VAR5 < 0)
    {
        FUN6(VAR4);
        return VAR5;
    }
    VAR4->VAR6 = VAR5;
    return VAR5;
}