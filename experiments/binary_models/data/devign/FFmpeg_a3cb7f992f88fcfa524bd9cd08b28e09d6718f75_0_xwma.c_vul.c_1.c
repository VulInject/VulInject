static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    int VAR4;
    uint32_t VAR5 = 0;
    VAR6 *VAR7 = 0;
    unsigned int VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16;
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    FUN2(VAR10);
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    VAR8 = FUN2(VAR10);
    if (VAR8 != FUN3('', '', '', ''))
        return -1;
    VAR3 = FUN2(VAR10);
    VAR12 = FUN4(VAR2, NULL);
    if (!VAR12)
        return FUN5(VAR17);
    VAR4 = FUN6(VAR10, VAR12->VAR18, VAR3);
    if (VAR4 < 0)
        return VAR4;
    VAR12->VAR19 = VAR20;
    if (VAR12->VAR18->VAR21 != VAR22)
    {
        FUN7(VAR2, VAR23, "", VAR12->VAR18->VAR24, VAR12->VAR18->VAR21);
        FUN8(VAR2, NULL);
    }
    else
    {
        if (VAR12->VAR18->VAR25 != 0)
        {
            FUN7(VAR2, VAR23, "", VAR12->VAR18->VAR25);
            FUN8(VAR2, NULL);
        }
        else
        {
            VAR12->VAR18->VAR25 = 6;
            VAR12->VAR18->VAR26 = FUN9(6 + VAR27);
            if (!VAR12->VAR18->VAR26)
                return FUN5(VAR17);
            VAR12->VAR18->VAR26[4] = 31;
            if (!VAR12->VAR18->VAR28)
            {
                FUN7(VAR2, VAR23, "", VAR12->VAR18->VAR28);
                if (!VAR12->VAR18->VAR29)
                {
                    FUN7(VAR2, VAR23, "", VAR12->VAR18->VAR29);
                    FUN10(VAR12, 64, 1, VAR12->VAR18->VAR30);
                    for (;;)
                    {
                        if (VAR10->VAR31)
                            return -1;
                        VAR8 = FUN2(VAR10);
                        VAR3 = FUN2(VAR10);
                        if (VAR8 == FUN3('', '', '', ''))
                        {
                            break;
                        }
                        else if (VAR8 == FUN3('', '', '', ''))
                        {
                            if (VAR7)
                            {
                                FUN7(VAR2, VAR32, "");
                                return -1;
                                if (VAR3 & 3)
                                {
                                    FUN7(VAR2, VAR23, "" VAR33 "", VAR3);
                                    VAR5 = VAR3 / 4;
                                    if (VAR5 == 0 || VAR5 >= VAR34 / 4)
                                    {
                                        FUN7(VAR2, VAR32, "" VAR33 "", VAR3);
                                        return -1;
                                        VAR7 = FUN11(VAR5 * sizeof(VAR6));
                                        if (!VAR7)
                                        {
                                            return FUN5(VAR17);
                                            for (VAR16 = 0; VAR16 < VAR5; ++VAR16)
                                            {
                                                VAR7[VAR16] = FUN2(VAR10);
                                                VAR3 -= 4;
                                                FUN12(VAR10, VAR3);
                                                if (VAR3 < 0)
                                                    return -1;
                                                if (!VAR3)
                                                {
                                                    VAR14->VAR35 = VAR36;
                                                }
                                                else
                                                    VAR14->VAR35 = FUN13(VAR10) + VAR3;
                                                if (VAR7 && VAR5)
                                                {
                                                    int64_t VAR37;
                                                    const uint32_t VAR38 = (VAR12->VAR18->VAR28 * VAR12->VAR18->VAR29) >> 3;
                                                    const uint64_t VAR39 = VAR7[VAR5 - 1];
                                                    VAR12->VAR40 = VAR39 / VAR38;
                                                    VAR37 = FUN13(VAR10);
                                                    for (VAR16 = 0; VAR16 < VAR5; ++VAR16)
                                                    {
                                                        FUN14(VAR12, VAR37 + (VAR16 + 1) * VAR12->VAR18->VAR41, VAR7[VAR16] / VAR38, VAR12->VAR18->VAR41, 0, VAR42);
                                                    }
                                                    else if (VAR12->VAR18->VAR43)
                                                    {
                                                        VAR12->VAR40 = (VAR3 << 3) * VAR12->VAR18->VAR30 / VAR12->VAR18->VAR43;
                                                        FUN15(VAR7);
                                                        return 0