int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4 = 0;
    if (VAR2->VAR5 > 1)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
        {
            FUN2(VAR2->VAR6[VAR3]);
        }
        for (VAR3 = 1; VAR3 < VAR2->VAR5; VAR3++)
        {
            FUN3(&VAR2->VAR6[VAR3]);
        }
    }
    else
        FUN2(VAR2);
    if ((VAR4 = FUN4(VAR2)) < 0)
        return VAR4;
    if (VAR2->VAR7)
        for (VAR3 = 0; VAR3 < VAR8; VAR3++)
        {
            VAR2->VAR7[VAR3].VAR9 = 1;
        }
    VAR2->VAR10 = VAR2->VAR11 = VAR2->VAR12 = NULL;
    if (VAR2->VAR13 == VAR14 && !VAR2->VAR15)
        VAR2->VAR16 = (VAR2->VAR17 + 31) / 32 * 2;
    else
        VAR2->VAR16 = (VAR2->VAR17 + 15) / 16;
    if ((VAR2->VAR18 || VAR2->VAR17) && FUN5(VAR2->VAR18, VAR2->VAR17, 0, VAR2->VAR19))
        return VAR20;
    if ((VAR4 = FUN6(VAR2)))
        goto VAR21;
    VAR2->VAR6[0] = VAR2;
    if (VAR2->VAR18 && VAR2->VAR17)
    {
        int VAR22 = VAR2->VAR5;
        if (VAR22 > 1)
        {
            for (VAR3 = 1; VAR3 < VAR22; VAR3++)
            {
                VAR2->VAR6[VAR3] = FUN7(sizeof(VAR1));
                memcpy(VAR2->VAR6[VAR3], VAR2, sizeof(VAR1));
            }
            for (VAR3 = 0; VAR3 < VAR22; VAR3++)
            {
                if (FUN8(VAR2->VAR6[VAR3]) < 0)
                    goto VAR21;
                VAR2->VAR6[VAR3]->VAR23 = (VAR2->VAR16 * (VAR3) + VAR22 / 2) / VAR22;
                VAR2->VAR6[VAR3]->VAR24 = (VAR2->VAR16 * (VAR3 + 1) + VAR22 / 2) / VAR22;
            }
        }
        else
        {
            if (FUN8(VAR2) < 0)
                goto VAR21;
            VAR2->VAR23 = 0;
            VAR2->VAR24 = VAR2->VAR16;
        }
        VAR2->VAR5 = VAR22;
    }
    return 0;
VAR21:
    FUN9(VAR2);
    return VAR4;
}