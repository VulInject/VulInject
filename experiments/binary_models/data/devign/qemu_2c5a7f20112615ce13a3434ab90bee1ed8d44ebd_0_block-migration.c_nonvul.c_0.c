static int FUN1(VAR1 *VAR2, void *VAR3)
{
    int VAR4;
    FUN2("", VAR5.VAR6, VAR5.VAR7);
    VAR4 = FUN3(VAR2);
    if (VAR4)
    {
        FUN4();
        return VAR4;
    }
    FUN5();
    while ((VAR5.VAR6 + VAR5.VAR8) * VAR9 < FUN6(VAR2))
    {
        if (VAR5.VAR10 == 0)
        {
            if (FUN7(VAR2) == 0)
            {
                VAR5.VAR10 = 1;
            }
        }
        else
        {
            VAR4 = FUN8(VAR2, 1);
            if (VAR4 != 0)
            {
                break;
            }
        }
    }
    if (VAR4 < 0)
    {
        FUN4();
        return VAR4;
    }
    VAR4 = FUN3(VAR2);
    if (VAR4)
    {
        FUN4();
        return VAR4;
    }
    FUN9(VAR2, VAR11);
    return VAR5.VAR10 && VAR5.VAR6 == 0 && VAR5.VAR8 == 0;
}