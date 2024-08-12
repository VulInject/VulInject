int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    if (VAR2->VAR7 > 0)
    {
        int64_t VAR8 = VAR2->VAR7 - FUN2(VAR2);
        if (VAR8 >= 0)
            VAR5 = FUN3(VAR5, VAR8);
    }
    VAR6 = FUN4(VAR4, VAR5);
    if (VAR6 < 0)
        return VAR6;
    VAR4->VAR9 = FUN2(VAR2);
    VAR6 = FUN5(VAR2, VAR4->VAR10, VAR5);
    if (VAR6 <= 0)
        FUN6(VAR4);
    else
        FUN7(VAR4, VAR6);
    return VAR6;
}