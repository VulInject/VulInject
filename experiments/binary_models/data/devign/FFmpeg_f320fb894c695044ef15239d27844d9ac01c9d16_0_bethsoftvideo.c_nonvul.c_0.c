static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    char VAR10;
    VAR11 *VAR12;
    VAR11 *VAR13;
    int VAR14 = VAR2->VAR15;
    int VAR16;
    int VAR17, VAR18;
    int VAR19;
    if (VAR2->FUN2(VAR2, &VAR8->VAR20))
    {
        FUN3(VAR2, VAR21, "");
        return -1;
    }
    VAR16 = VAR8->VAR20.VAR22[0] - VAR2->VAR15;
    if (VAR6->VAR23 > 0 && VAR6->VAR24[0].VAR25 == VAR26)
    {
        FUN4(&VAR8->VAR27, VAR6->VAR24[0].VAR3, VAR6->VAR24[0].VAR28);
        if ((VAR18 = FUN5(VAR8)) < 0)
            return VAR18;
    }
    FUN4(&VAR8->VAR27, VAR6->VAR3, VAR6->VAR28);
    VAR12 = VAR8->VAR20.VAR3[0];
    VAR13 = VAR8->VAR20.VAR3[0] + VAR8->VAR20.VAR22[0] * VAR2->VAR29;
    switch (VAR10 = FUN6(&VAR8->VAR27))
    {
    case VAR30:
    {
        *VAR4 = 0;
        if ((VAR18 = FUN5(VAR8)) < 0)
        {
            FUN3(VAR2, VAR21, "");
            return VAR18;
        }
        return FUN7(&VAR8->VAR27);
    }
    case VAR31:
        VAR19 = FUN8(&VAR8->VAR27);
        if (VAR19 >= VAR2->VAR29)
            return -1;
        VAR12 += VAR8->VAR20.VAR22[0] * VAR19;
    }
    while ((VAR17 = FUN6(&VAR8->VAR27)))
    {
        int VAR32 = VAR17 & 0x7f;
        while (VAR32 > VAR14)
        {
            if (VAR17 < 0x80)
                FUN9(&VAR8->VAR27, VAR12, VAR14);
            else if (VAR10 == VAR33)
                memset(VAR12, FUN10(&VAR8->VAR27), VAR14);
            VAR32 -= VAR14;
            VAR12 += VAR14 + VAR16;
            VAR14 = VAR2->VAR15;
            if (VAR12 == VAR13)
                goto VAR34;
        }
        if (VAR17 < 0x80)
            FUN9(&VAR8->VAR27, VAR12, VAR32);
        else if (VAR10 == VAR33)
            memset(VAR12, FUN6(&VAR8->VAR27), VAR32);
        VAR14 -= VAR32;
        VAR12 += VAR32;
    }
VAR34:
    *VAR4 = sizeof(VAR35);
    *(VAR35 *)VAR3 = VAR8->VAR20;
    return VAR6->VAR28;
}