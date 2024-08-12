static inline int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5[VAR3];
    int VAR6, VAR7 = 0;
    int VAR8 = VAR2->VAR9.VAR8;
    int VAR10, VAR11, VAR12;
    if (VAR3 == 0)
    {
        if (VAR2->VAR13 == VAR14)
            VAR8++;
    }
    else
    {
        if (VAR2->VAR13 == VAR15 || VAR2->VAR13 == VAR16)
            VAR8++;
    }
    if (FUN2(&VAR2->VAR17))
    {
        FUN3(VAR2->VAR18, VAR19, "");
        return VAR20;
    }
    VAR6 = FUN4(&VAR2->VAR17, 6);
    if (FUN2(&VAR2->VAR17))
    {
        int VAR21 = FUN5(&VAR2->VAR17);
        if (VAR21 <= 0 || (VAR21 < VAR8 && !FUN6(&VAR2->VAR17, VAR21)) || !FUN6(&VAR2->VAR17, VAR8))
        {
            FUN3(VAR2->VAR18, VAR19, "", VAR8, VAR21);
            return VAR20;
        }
        VAR7 = 1 + FUN7(&VAR2->VAR17, 1, FUN5(&VAR2->VAR17));
        VAR8 -= VAR7;
    }
    if (VAR8 > 32)
    {
        FUN8(VAR2->VAR18, "");
        return VAR22;
    }
    if (VAR6 == 0)
    {
        VAR11 = FUN9(&VAR2->VAR17, VAR8);
        for (VAR10 = 0; VAR10 < VAR2->VAR23; VAR10++)
            VAR5[VAR10] = VAR11;
    }
    else if (VAR6 == 1)
    {
        for (VAR10 = 0; VAR10 < VAR2->VAR23; VAR10++)
            VAR5[VAR10] = FUN9(&VAR2->VAR17, VAR8);
    }
    else if ((VAR6 >= 8) && (VAR6 <= 12))
    {
        if ((VAR12 = FUN10(VAR2, VAR5, VAR6 & ~0x8, VAR8)) < 0)
            return VAR12;
    }
    else if (VAR6 >= 32)
    {
        if ((VAR12 = FUN11(VAR2, VAR5, (VAR6 & ~0x20) + 1, VAR8)) < 0)
            return VAR12;
    }
    else
    {
        FUN3(VAR2->VAR18, VAR19, "");
        return VAR20;
    }
    if (VAR7)
    {
        int VAR10;
        for (VAR10 = 0; VAR10 < VAR2->VAR23; VAR10++)
            VAR5[VAR10] <<= VAR7;
    }
    return 0;
}