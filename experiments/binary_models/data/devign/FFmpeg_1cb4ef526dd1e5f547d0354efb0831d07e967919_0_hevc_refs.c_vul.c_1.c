static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2, VAR5);
    if (VAR8 == VAR2->VAR8)
        return VAR9;
    if (!VAR8)
    {
        VAR8 = FUN3(VAR2, VAR5);
        if (!VAR8)
            return FUN4(VAR10);
    }
    VAR4->VAR4[VAR4->VAR11] = VAR8->VAR5;
    VAR4->VAR8[VAR4->VAR11] = VAR8;
    VAR4->VAR11++;
    FUN5(VAR8, VAR6);
    return 0;
}