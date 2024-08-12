bool FUN1(VAR1 **VAR2)
{
    bool VAR3 = true;
    VAR1 *VAR4;
    BdrvNextIterator VAR5;
    for (VAR4 = FUN2(&VAR5); VAR4; VAR4 = FUN3(&VAR5))
    {
        VAR6 *VAR7 = FUN4(VAR4);
        FUN5(VAR7);
        if (FUN6(VAR4) && !FUN7(VAR4))
        {
            VAR3 = FUN8(VAR4);
        }
        FUN9(VAR7);
        if (!VAR3)
        {
            goto VAR8;
        }
    }
VAR8:
    *VAR2 = VAR4;
    return VAR3;