static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 *VAR5, int VAR6, int64_t VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = &VAR2->VAR12;
    VAR13 *VAR14 = &VAR2->VAR15[VAR3]->VAR16;
    VAR17 *VAR18 = &VAR9->VAR19[VAR3];
    int VAR20, VAR21;
    unsigned int VAR22 = 0;
    if (FUN2(&VAR2->VAR12))
        return 0;
    if (!VAR6)
        return 0;
    if (VAR14->VAR23 == VAR24)
    {
        VAR22 = 1;
    }
    else if (VAR14->VAR23 == VAR25)
    {
        if (VAR14->VAR26 == VAR27)
        {
            static uint16_t VAR28[16] = {13, 14, 16, 18, 20, 21, 27, 32, 6, 0, 0, 0, 0, 0, 0, 0};
            int VAR29 = 0;
            while (VAR29 < VAR6 && VAR22 < 100)
            {
                VAR29 += VAR28[(VAR5[VAR29] >> 3) & 0x0F];
                VAR22++;
            }
        }
        else if (VAR14->VAR26 == VAR30)
        {
            VAR22 = VAR6 / VAR14->VAR31;
        }
        else
        {
            VAR22 = 1;
        }
    }
    if ((VAR14->VAR26 == VAR32 || VAR14->VAR26 == VAR33) && VAR18->VAR34 == 0)
    {
        assert(VAR14->VAR35);
        VAR18->VAR34 = VAR14->VAR35;
        VAR18->VAR36 = FUN3(VAR18->VAR34);
        memcpy(VAR18->VAR36, VAR14->VAR37, VAR18->VAR34);
    }
    VAR20 = VAR18->VAR38 / VAR39;
    VAR21 = VAR18->VAR38 % VAR39;
    if (VAR18->VAR40 <= VAR18->VAR38)
    {
        VAR18->VAR41 = FUN4(VAR18->VAR41, (VAR20 + 1) * sizeof(void *));
        if (!VAR18->VAR41)
            return -1;
        VAR18->VAR41[VAR20] = FUN3(VAR39 * sizeof(VAR42));
        if (!VAR18->VAR41[VAR20])
            return -1;
        VAR18->VAR40 += VAR39;
    }
    if (VAR9->VAR43 == 0)
    {
        FUN5(VAR12, VAR9);
        VAR9->VAR43 = 1;
        VAR9->VAR44 = FUN6();
    }
    VAR18->VAR41[VAR20][VAR21].VAR45 = FUN7(VAR12);
    VAR18->VAR41[VAR20][VAR21].VAR22 = VAR22;
    VAR18->VAR41[VAR20][VAR21].VAR6 = VAR6;
    VAR18->VAR41[VAR20][VAR21].VAR46 = VAR22;
    if (VAR14->VAR23 == VAR24)
    {
        VAR18->VAR41[VAR20][VAR21].VAR47 = VAR14->VAR48->VAR47;
        if (VAR14->VAR48->VAR49 == VAR50)
            VAR18->VAR51 = 1;
    }
    VAR18->VAR14 = VAR14;
    VAR18->VAR38++;
    VAR18->VAR52 += VAR22;
    VAR18->VAR53 += VAR6;
    FUN8(VAR12, VAR5, VAR6);
    FUN9(VAR12);
    return 0;
}