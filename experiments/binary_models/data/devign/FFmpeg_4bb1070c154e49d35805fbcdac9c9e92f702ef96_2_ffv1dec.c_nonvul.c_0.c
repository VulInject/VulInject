static int FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR4 *VAR5 = &VAR3->VAR5;
    uint8_t VAR6[VAR7];
    unsigned VAR8, VAR9, VAR10;
    memset(VAR6, 128, sizeof(VAR6));
    if (VAR3->VAR11 == VAR12)
    {
        for (VAR9 = 1; VAR9 < 256; VAR9++)
        {
            VAR3->VAR5.VAR13[VAR9] = VAR2->VAR14[VAR9];
            VAR3->VAR5.VAR15[256 - VAR9] = 256 - VAR3->VAR5.VAR13[VAR9];
        }
    }
    VAR3->VAR16 = FUN2(VAR5, VAR6, 0) * VAR2->VAR17;
    VAR3->VAR18 = FUN2(VAR5, VAR6, 0) * VAR2->VAR19;
    VAR3->VAR20 = (FUN2(VAR5, VAR6, 0) + 1) * VAR2->VAR17 + VAR3->VAR16;
    VAR3->VAR21 = (FUN2(VAR5, VAR6, 0) + 1) * VAR2->VAR19 + VAR3->VAR18;
    VAR3->VAR16 /= VAR2->VAR22;
    VAR3->VAR18 /= VAR2->VAR23;
    VAR3->VAR20 = VAR3->VAR20 / VAR2->VAR22 - VAR3->VAR16;
    VAR3->VAR21 = VAR3->VAR21 / VAR2->VAR23 - VAR3->VAR18;
    if ((unsigned)VAR3->VAR20 > VAR2->VAR17 || (unsigned)VAR3->VAR21 > VAR2->VAR19)
        return VAR24;
    if ((unsigned)VAR3->VAR16 + (VAR25)VAR3->VAR20 > VAR2->VAR17 || (unsigned)VAR3->VAR18 + (VAR25)VAR3->VAR21 > VAR2->VAR19)
        return VAR24;
    for (VAR9 = 0; VAR9 < VAR2->VAR26; VAR9++)
    {
        VAR27 *const VAR28 = &VAR3->VAR29[VAR9];
        int VAR30 = FUN2(VAR5, VAR6, 0);
        if (VAR30 > (unsigned)VAR2->VAR31)
        {
            FUN3(VAR2->VAR32, VAR33, "");
            return VAR24;
        }
        VAR28->VAR34 = VAR30;
        memcpy(VAR28->VAR35, VAR2->VAR36[VAR30], sizeof(VAR28->VAR35));
        VAR10 = VAR2->VAR10[VAR30];
        if (VAR28->VAR10 < VAR10)
        {
            FUN4(&VAR28->VAR6);
            FUN4(&VAR28->VAR37);
        }
        VAR28->VAR10 = VAR10;
    }
    VAR8 = FUN2(VAR5, VAR6, 0);
    if (VAR8 == 1)
    {
        VAR2->VAR38->VAR39 = 1;
        VAR2->VAR38->VAR40 = 1;
    }
    else if (VAR8 == 2)
    {
        VAR2->VAR38->VAR39 = 1;
        VAR2->VAR38->VAR40 = 0;
    }
    else if (VAR8 == 3)
    {
        VAR2->VAR38->VAR39 = 0;
    }
    VAR2->VAR38->VAR41.VAR42 = FUN2(VAR5, VAR6, 0);
    VAR2->VAR38->VAR41.VAR43 = FUN2(VAR5, VAR6, 0);
    if (FUN5(VAR2->VAR17, VAR2->VAR19, VAR2->VAR38->VAR41) < 0)
    {
        FUN3(VAR2->VAR32, VAR44, "", VAR2->VAR38->VAR41.VAR42, VAR2->VAR38->VAR41.VAR43);
        VAR2->VAR38->VAR41 = (VAR45){0, 1};
    }
    return 0;
}