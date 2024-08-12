static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    uint8_t VAR5[32];
    memset(VAR5, VAR6, sizeof(VAR5));
    VAR2->VAR7 = FUN2(&VAR2->VAR8, VAR5);
    if (VAR2->VAR7 || VAR2->VAR9)
    {
        FUN3(VAR2);
        VAR2->VAR10 = VAR2->VAR11 = VAR2->VAR12 = VAR2->VAR13 = VAR2->VAR14 = 0;
    }
    if (VAR2->VAR7)
    {
        FUN4(VAR2->VAR15, VAR4 <= 0U)
        VAR2->VAR9 = FUN2(&VAR2->VAR8, VAR2->VAR16);
        VAR2->VAR17 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0);
        VAR2->VAR18 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0);
        FUN4(VAR2->VAR19, 0 < VAR4 && VAR4 <= VAR20)
        VAR2->VAR21 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0);
        if (VAR2->VAR21 == 1)
        {
            VAR2->VAR22->VAR23 = VAR24;
            VAR2->VAR25 = 1;
        }
        else if (VAR2->VAR21 == 0)
        {
            VAR2->VAR26 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0);
            VAR2->VAR27 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0);
            if (VAR2->VAR26 == 1 && VAR2->VAR27 == 1)
            {
                VAR2->VAR22->VAR23 = VAR28;
            }
            else if (VAR2->VAR26 == 0 && VAR2->VAR27 == 0)
            {
                VAR2->VAR22->VAR23 = VAR29;
            }
            else if (VAR2->VAR26 == 2 && VAR2->VAR27 == 2)
            {
                VAR2->VAR22->VAR23 = VAR30;
            }
            else
            {
                FUN6(VAR2, VAR31, "", VAR2->VAR26, VAR2->VAR27);
                VAR2->VAR26 = VAR2->VAR27 = 1;
                VAR2->VAR22->VAR23 = VAR28;
                return VAR32;
            }
            VAR2->VAR25 = 3;
        }
        else
        {
            FUN6(VAR2, VAR31, "");
            VAR2->VAR26 = VAR2->VAR27 = 1;
            VAR2->VAR22->VAR23 = VAR28;
            return VAR32;
        }
        VAR2->VAR33 = FUN2(&VAR2->VAR8, VAR2->VAR16);
        FUN4(VAR2->VAR34, VAR4 < (unsigned)VAR35)
        VAR2->VAR34++;
        FUN7(VAR2);
    }
    if (!VAR2->VAR7)
    {
        if (FUN2(&VAR2->VAR8, VAR2->VAR16))
        {
            for (VAR3 = 0; VAR3 < FUN8(VAR2->VAR25, 2); VAR3++)
            {
                int VAR36, VAR37, VAR38 = 0;
                VAR39 *VAR40 = &VAR2->VAR41[VAR3];
                VAR40->VAR42 = FUN2(&VAR2->VAR8, VAR2->VAR16);
                VAR36 = FUN5(&VAR2->VAR8, VAR2->VAR16, 0) * 2 + 2;
                if ((unsigned)VAR36 >= VAR43 || VAR36 == 0)
                    return VAR32;
                VAR40->VAR36 = VAR36;
                for (VAR37 = VAR36 / 2; VAR37; VAR37--)
                {
                    VAR40->VAR44[VAR37] = FUN5(&VAR2->VAR8, VAR2->VAR16, 0) * (1 - 2 * (VAR37 & 1));
                    VAR38 += VAR40->VAR44[VAR37];
                }
                VAR40->VAR44[0] = 32 - VAR38;
            }
            VAR2->VAR41[2].VAR42 = VAR2->VAR41[1].VAR42;
            VAR2->VAR41[2].VAR36 = VAR2->VAR41[1].VAR36;
            memcpy(VAR2->VAR41[2].VAR44, VAR2->VAR41[1].VAR44, sizeof(VAR2->VAR41[1].VAR44));
        }
        if (FUN2(&VAR2->VAR8, VAR2->VAR16))
        {
            FUN4(VAR2->VAR19, 0 < VAR4 && VAR4 <= VAR20)
            FUN7(VAR2);
        }
    }
    VAR2->VAR10 += FUN5(&VAR2->VAR8, VAR2->VAR16, 1);
    if (VAR2->VAR10 > 1U)
    {
        FUN6(VAR2->VAR22, VAR31, "", VAR2->VAR10);
        return VAR32;
    }
    if (FUN8(VAR2->VAR22->VAR45 >> VAR2->VAR26, VAR2->VAR22->VAR46 >> VAR2->VAR27) >> (VAR2->VAR19 - 1) <= 1)
    {
        FUN6(VAR2->VAR22, VAR31, "", VAR2->VAR19);
        return VAR32;
    }
    if (VAR2->VAR22->VAR45 > 65536 - 4)
    {
        FUN6(VAR2->VAR22, VAR31, "", VAR2->VAR22->VAR45);
        return VAR32;
    }
    VAR2->VAR11 += FUN5(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR13 += FUN5(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR12 += FUN5(&VAR2->VAR8, VAR2->VAR16, 1);
    VAR2->VAR14 += FUN5(&VAR2->VAR8, VAR2->VAR16, 1);
    if (VAR2->VAR14 > 1 || VAR2->VAR14 < 0 || VAR2->VAR13 > 256U)
    {
        FUN6(VAR2->VAR22, VAR31, "", VAR2->VAR14);
        VAR2->VAR14 = 0;
        VAR2->VAR13 = 0;
        return VAR32;
    }
    if (FUN9(VAR2->VAR12) > 127)
    {
        FUN6(VAR2->VAR22, VAR31, "", VAR2->VAR12);
        VAR2->VAR12 = 0;
        return VAR32;
    }
    return 0;
}