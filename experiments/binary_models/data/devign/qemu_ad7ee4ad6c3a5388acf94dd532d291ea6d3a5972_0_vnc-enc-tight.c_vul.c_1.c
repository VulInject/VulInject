static int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, VAR10 *VAR11)
{
    int VAR12;
    if (VAR9 == 0)
    {
        if (FUN2(VAR2, VAR5, VAR6))
        {
            int VAR13 = VAR14[VAR2->VAR15.VAR13].VAR16;
            VAR12 = FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR13);
            VAR12 = FUN4(VAR2, VAR3, VAR4, VAR5, VAR6);
        }
    }
    else if (VAR9 == 1)
    {
        VAR12 = FUN5(VAR2);
    }
    else if (VAR9 == 2)
    {
        VAR12 = FUN6(VAR2, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8);
    }
    else if (VAR9 <= 256)
    {
        if (VAR9 > 96 && FUN2(VAR2, VAR5, VAR6))
        {
            int VAR13 = VAR14[VAR2->VAR15.VAR13].VAR16;
            VAR12 = FUN3(VAR2, VAR3, VAR4, VAR5, VAR6, VAR13);
            VAR12 = FUN7(VAR2, VAR3, VAR4, VAR5, VAR6, VAR11);
        }
    }
    return VAR12;