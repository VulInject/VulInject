static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3, FUN2(VAR4);
    int64_t VAR5 = 0;
    int VAR6 = 0;
    char VAR7[32];
    uint32_t VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    VAR11 *VAR12 = NULL;
    VAR13 *VAR14 = VAR2->VAR15;
    int VAR16, VAR17 = 0;
    int64_t VAR18, VAR19 = -1;
    VAR14->VAR20 = FUN3(VAR2->VAR10) & 1;
    VAR14->VAR21 = -1;
    VAR8 = FUN4(VAR10);
    switch (VAR8)
    {
    case FUN5('', '', '', ''):
        break;
    case FUN5('', '', '', ''):
        VAR14->VAR22 = 1;
        break;
    case FUN5('', '', '', ''):
        VAR6 = 1;
        break;
    default:
        FUN6(VAR7, sizeof(VAR7), VAR8);
        FUN7(VAR2, VAR23, "", VAR7);
        return VAR24;
        FUN4(VAR10);
        if (FUN4(VAR10) != FUN5('', '', '', ''))
        {
            FUN7(VAR2, VAR23, "");
            return VAR24;
            if (VAR6)
            {
                if (FUN4(VAR10) != FUN5('', '', '', ''))
                    return VAR24;
                VAR3 = FUN4(VAR10);
                if (VAR3 < 24)
                    return VAR24;
                FUN8(VAR10);
                VAR4 = FUN8(VAR10);
                VAR5 = FUN8(VAR10);
                if (VAR4 < 0 || VAR5 < 0)
                {
                    FUN7(VAR2, VAR23, ""
                                            "" VAR25 "" VAR25 "",
                           VAR4, VAR5);
                    return VAR24;
                    FUN9(VAR10, VAR3 - 24);
                    for (;;)
                    {
                        VAR11 *VAR26;
                        VAR3 = FUN10(VAR10, &VAR8, VAR14->VAR22);
                        VAR18 = FUN3(VAR10) + VAR3;
                        if (FUN11(VAR10))
                            break;
                        switch (VAR8)
                        {
                        case FUN5('', '', '', ''):
                            if (!VAR17 && (VAR16 = FUN12(VAR2, VAR3, &VAR12)) < 0)
                            {
                                return VAR16;
                            }
                            else if (VAR17)
                                FUN7(VAR2, VAR27, "");
                            VAR17 = 1;
                            break;
                        case FUN5('', '', '', ''):
                            if (!VAR17)
                            {
                                FUN7(VAR2, VAR23, "");
                                return VAR24;
                                if (VAR6)
                                {
                                    VAR18 = VAR14->VAR28 = FUN3(VAR10) + VAR4;
                                }
                                else if (VAR3 != 0xFFFFFFFF)
                                {
                                    VAR4 = VAR3;
                                    VAR18 = VAR14->VAR28 = VAR3 ? VAR18 : VAR29;
                                }
                                else
                                {
                                    FUN7(VAR2, VAR27, ""
                                                              "");
                                    VAR4 = 0;
                                    VAR18 = VAR14->VAR28 = VAR29;
                                    VAR19 = FUN3(VAR10);
                                    if (!VAR10->VAR30 || (!VAR6 && !VAR3))
                                        goto VAR31;
                                    break;
                                case FUN5('', '', '', ''):
                                    if (!VAR5)
                                        VAR5 = (!VAR14->VAR22 ? FUN4(VAR10) : FUN13(VAR10));
                                    break;
                                case FUN5('', '', '', ''):
                                    if ((VAR16 = FUN14(VAR2, VAR3)) < 0)
                                        return VAR16;
                                    break;
                                case FUN5('', '', '', ''):
                                    if (!VAR17)
                                    {
                                        FUN7(VAR2, VAR23, "");
                                        return VAR24;
                                        if (VAR3 != FUN5('', '', '', ''))
                                        {
                                            FUN7(VAR2, VAR23, "");
                                            goto VAR31;
                                            FUN7(VAR2, VAR32, "");
                                            VAR14->VAR33 = 0;
                                            VAR26 = FUN15(VAR2, NULL);
                                            if (!VAR26)
                                                return FUN16(VAR34);
                                            FUN17(VAR10);
                                            VAR26->VAR35 = 1;
                                            VAR26->VAR36->VAR37 = VAR38;
                                            VAR26->VAR36->VAR39 = VAR40;
                                            VAR26->VAR36->VAR41 = FUN18(VAR10);
                                            VAR26->VAR36->VAR42 = FUN18(VAR10);
                                            if (FUN19(VAR26->VAR36, 4))
                                            {
                                                FUN7(VAR2, VAR23, "");
                                                return FUN16(VAR34);
                                                VAR3 = FUN18(VAR10);
                                                VAR14->VAR21 = FUN3(VAR10) + (VAR3 - 5) * 3;
                                                FUN18(VAR10);
                                                VAR14->VAR43 = FUN18(VAR10);
                                                FUN20(VAR26, 32, 1, FUN18(VAR10));
                                                VAR26->VAR44 = FUN18(VAR10);
                                                FUN18(VAR10);
                                                FUN18(VAR10);
                                                VAR14->VAR45 = FUN18(VAR10);
                                                if (VAR14->VAR45 > 65536)
                                                {
                                                    FUN7(VAR2, VAR23, "");
                                                    return VAR24;
                                                    FUN21(VAR26->VAR36->VAR46, VAR14->VAR45);
                                                    VAR14->VAR47 = 0;
                                                    goto VAR31;
                                                case FUN5('', '', '', ''):
                                                    if (VAR3 < 4)
                                                    {
                                                        FUN7(VAR2, VAR23, "");
                                                        return VAR24;
                                                        switch (FUN4(VAR10))
                                                        {
                                                        case FUN5('', '', '', ''):
                                                            FUN22(VAR2, VAR3 - 4);
                                                            break;
                                                            if ((FUN23(VAR10) > 0 && VAR18 >= FUN23(VAR10)) || FUN24(VAR14, VAR10, VAR18, VAR48) < 0)
                                                            {
                                                                break;
                                                            VAR31:
                                                                if (VAR19 < 0)
                                                                {
                                                                    FUN7(VAR2, VAR23, "");
                                                                    return VAR24;
                                                                    FUN25(VAR10, VAR19, VAR48);
                                                                    if (VAR4 > 0 && VAR5 && VAR12->VAR36->VAR49 && (VAR4 << 3) / VAR5 / VAR12->VAR36->VAR49 > VAR12->VAR36->VAR50)
                                                                    {
                                                                        FUN7(VAR2, VAR27, "" VAR25 "", VAR5);
                                                                        VAR5 = 0;
                                                                        if (!VAR5 || FUN26(VAR12->VAR36->VAR39) > 0)
                                                                            if (VAR12->VAR36->VAR49 && VAR4 && FUN27(VAR12->VAR36->VAR39) && VAR14->VAR28 <= FUN23(VAR10))
                                                                                VAR5 = (VAR4 << 3) / (VAR12->VAR36->VAR49 * (VAR51)FUN27(VAR12->VAR36->VAR39));
                                                                        if (VAR5)
                                                                            VAR12->VAR44 = VAR5;
                                                                        FUN28(VAR2, NULL, VAR52);
                                                                        FUN28(VAR2, NULL, VAR53);
                                                                        return 0