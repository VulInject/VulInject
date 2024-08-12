int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint64_t VAR5, VAR3 **VAR6)
{
    int VAR7 = 0;
    VAR3 *VAR8;
    BdrvNextIterator VAR9;
    for (VAR8 = FUN2(&VAR9); VAR8; VAR8 = FUN3(&VAR9))
    {
        VAR10 *VAR11 = FUN4(VAR8);
        FUN5(VAR11);
        if (VAR8 == VAR4)
        {
            VAR2->VAR5 = VAR5;
            VAR7 = FUN6(VAR8, VAR2);
        }
        else if (FUN7(VAR8))
        {
            VAR2->VAR5 = 0;
            VAR7 = FUN6(VAR8, VAR2);
        }
        FUN8(VAR11);
        if (VAR7 < 0)
        {
            goto VAR12;
        }
    }
VAR12:
    *VAR6 = VAR8;
    return VAR7;