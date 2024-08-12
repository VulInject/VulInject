static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned char VAR5[5];
    unsigned int VAR6 = 0;
    const int VAR7 = VAR4->VAR7;
    int VAR8 = VAR4->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR2->VAR13;
    VAR14 *VAR15 = VAR2->VAR16[VAR7]->VAR11;
    VAR17 *VAR18 = VAR2->VAR16[VAR7]->VAR19;
    while (VAR18->VAR20 == 0 && VAR4->VAR21 != VAR22 && VAR4->VAR21 > VAR15->VAR23)
    {
        AVPacket VAR24;
        FUN2(&VAR24);
        VAR24.VAR8 = 0;
        VAR24.VAR25 = NULL;
        VAR24.VAR7 = VAR7;
        FUN1(VAR2, &VAR24);
    }
    VAR15->VAR23++;
    if ((VAR13->VAR26 & VAR27) && (FUN3(VAR13) - VAR10->VAR28 > VAR29))
    {
        FUN4(VAR2);
        FUN5(VAR13, VAR10->VAR30);
        if (VAR10->VAR31 == 1)
            FUN6(VAR2);
        FUN5(VAR13, VAR10->VAR28);
        VAR10->VAR30 = FUN7(VAR2, VAR13, "", "");
    }
    FUN8(VAR5, VAR7, VAR18->VAR32);
    if (VAR4->VAR6 & VAR33)
        VAR6 = 0x10;
    if (VAR18->VAR32 == VAR34)
        VAR15->VAR35 += VAR8;
    if (VAR2->VAR13->VAR26 & VAR27)
    {
        int VAR36;
        VAR37 *VAR38 = &VAR15->VAR39;
        int VAR40 = VAR38->VAR41 / VAR42;
        int VAR43 = VAR38->VAR41 % VAR42;
        if (VAR38->VAR44 <= VAR38->VAR41)
        {
            if ((VAR36 = FUN9(&VAR38->VAR45, (VAR40 + 1) * sizeof(*VAR38->VAR45))) < 0)
            {
                VAR38->VAR44 = 0;
                VAR38->VAR41 = 0;
                return VAR36;
            }
            VAR38->VAR45[VAR40] = FUN10(VAR42 * sizeof(VAR46));
            if (!VAR38->VAR45[VAR40])
                return -1;
            VAR38->VAR44 += VAR42;
        }
        VAR38->VAR45[VAR40][VAR43].VAR6 = VAR6;
        VAR38->VAR45[VAR40][VAR43].VAR47 = FUN3(VAR13) - VAR10->VAR30;
        VAR38->VAR45[VAR40][VAR43].VAR48 = VAR8;
        VAR38->VAR41++;
    }
    FUN11(VAR13, VAR5, 4);
    FUN12(VAR13, VAR8);
    FUN11(VAR13, VAR4->VAR25, VAR8);
    if (VAR8 & 1)
        FUN13(VAR13, 0);
    return 0;
}