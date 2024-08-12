int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    if (FUN2(VAR2))
    {
        return -VAR10;
    }
    FUN3(VAR9);
    FUN4(
        {
            VAR7 = FUN5(VAR9, VAR4, VAR6);
            if (VAR7 < 0)
            {
                VAR7 = -VAR11;
            }
        });
    FUN6(VAR9);
    return VAR7;
}