static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    const int64_t VAR12 = VAR11->VAR13;
    VAR14 *VAR15 = NULL;
    int VAR16 = VAR6->VAR17;
    int VAR18 = 0;
    int VAR19;
    FUN2(&VAR8->VAR20, &VAR8->VAR21, VAR16);
    if (!VAR8->VAR20)
    {
        FUN3(VAR8, VAR22, "", VAR16, VAR8->VAR21);
        return FUN4(VAR23);
    }
    memcpy(VAR8->VAR20, VAR6->VAR3, VAR16);
    VAR15 = VAR8->VAR20;
    for (VAR19 = 0; VAR19 < VAR16; VAR19 += 3)
    {
        uint8_t VAR24 = *(VAR15 + VAR19) & 3;
        if (FUN5(VAR15 + VAR19))
            continue;
        if (VAR24 == 1)
            continue;
        else
            FUN6(VAR8, VAR12, *(VAR15 + VAR19 + 1) & 0x7f, *(VAR15 + VAR19 + 2) & 0x7f);
        if (!VAR8->VAR25)
            continue;
        VAR8->VAR25 = 0;
        if (*VAR8->VAR26.VAR27 || VAR8->VAR28)
        {
            FUN7(VAR8, "", VAR8->VAR26.VAR27);
            VAR18 = FUN8(VAR11, VAR8->VAR26.VAR27, VAR8->VAR29++, 0, NULL, NULL);
            if (VAR18 < 0)
                return VAR18;
            VAR11->VAR13 = VAR8->VAR12;
            if (!VAR8->VAR28)
                VAR11->VAR30 = FUN9(VAR8->VAR31 - VAR8->VAR12, VAR32, VAR33);
            else
                VAR11->VAR30 = -1;
            VAR8->VAR25 = 0;
            VAR8->VAR34 = VAR11->VAR13;
            VAR8->VAR35 = 0;
        }
    }
    if (VAR8->VAR28 && VAR8->VAR35 && VAR11->VAR13 > VAR8->VAR34 + FUN9(200, VAR33, VAR32))
    {
        VAR8->VAR34 = VAR11->VAR13;
        VAR8->VAR35 = 0;
        FUN10(VAR8);
        VAR8->VAR25 = 0;
        VAR18 = FUN8(VAR11, VAR8->VAR26.VAR27, VAR8->VAR29++, 0, NULL, NULL);
        if (VAR18 < 0)
            return VAR18;
        VAR11->VAR30 = -1;
    }
    *VAR4 = VAR11->VAR36 > 0;
    return VAR18;
}