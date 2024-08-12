int FUN1(void)
{
    VAR1 *VAR2 = NULL;
    BdrvNextIterator VAR3;
    int VAR4 = 0;
    int VAR5;
    for (VAR2 = FUN2(&VAR3); VAR2; VAR2 = FUN3(&VAR3))
    {
        FUN4(FUN5(VAR2));
    }
    for (VAR5 = 0; VAR5 < 2; VAR5++)
    {
        for (VAR2 = FUN2(&VAR3); VAR2; VAR2 = FUN3(&VAR3))
        {
            VAR4 = FUN6(VAR2, VAR5);
            if (VAR4 < 0)
            {
                goto VAR6;
            }
        }
    }
VAR6:
    for (VAR2 = FUN2(&VAR3); VAR2; VAR2 = FUN3(&VAR3))
    {
        FUN7(FUN5(VAR2));
    }
    return VAR4;