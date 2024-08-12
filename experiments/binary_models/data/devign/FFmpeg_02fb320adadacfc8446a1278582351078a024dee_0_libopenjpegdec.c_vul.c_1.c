static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR16, *VAR17 = VAR3;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR16;
    int VAR23, VAR24, VAR25 = -1;
    int VAR26 = 0;
    int VAR27 = 0;
    *VAR4 = 0;
    if ((FUN2(VAR8) == 12) && (FUN2(VAR8 + 4) == VAR28) && (FUN2(VAR8 + 8) == VAR29))
    {
        VAR19 = FUN3(VAR30);
    }
    else
    {
        if (FUN2(VAR8 + 4) == FUN2(""))
            VAR8 += 8;
        VAR19 = FUN3(VAR31);
        if (!VAR19)
        {
            FUN4(VAR2, VAR32, "");
            FUN5((VAR33)VAR19, NULL, NULL);
            VAR12->VAR34.VAR35 = VAR36;
            FUN6(VAR19, &VAR12->VAR34);
            VAR21 = FUN7((VAR33)VAR19, VAR8, VAR9);
            if (!VAR21)
            {
                FUN4(VAR2, VAR32, "");
                VAR16 = FUN8(VAR19, VAR21, NULL);
                FUN9(VAR21);
                VAR23 = VAR16->VAR37 - VAR16->VAR38;
                VAR24 = VAR16->VAR39 - VAR16->VAR40;
                if (FUN10(VAR23, VAR24, 0, VAR2) < 0)
                {
                    FUN4(VAR2, VAR32, "", VAR23, VAR24);
                    goto VAR41;
                    FUN11(VAR2, VAR23, VAR24);
                    switch (VAR16->VAR42)
                    {
                    case 1:
                        VAR2->VAR43 = (VAR16->VAR44[0].VAR45 == 8) ? VAR46 : VAR47;
                        break;
                    case 2:
                        VAR2->VAR43 = VAR48;
                        break;
                    case 3:
                    case 4:
                        VAR2->VAR43 = FUN12(VAR2, VAR16);
                        break;
                    default:
                        FUN4(VAR2, VAR32, "", VAR16->VAR42);
                        goto VAR41;
                        if (VAR15->VAR3[0])
                            FUN13(VAR2, VAR15);
                        if (FUN14(VAR2, VAR15) < 0)
                        {
                            FUN4(VAR2, VAR32, "");
                            VAR12->VAR34.VAR35 = VAR49;
                            VAR12->VAR34.VAR50 = VAR2->VAR51;
                            FUN6(VAR19, &VAR12->VAR34);
                            VAR21 = FUN7((VAR33)VAR19, VAR8, VAR9);
                            if (!VAR21)
                            {
                                FUN4(VAR2, VAR32, "");
                                VAR16 = FUN8(VAR19, VAR21, NULL);
                                FUN9(VAR21);
                                VAR26 = VAR52[VAR2->VAR43].VAR53[0].VAR54 + 1;
                                VAR27 = FUN15(VAR2->VAR43);
                                switch (VAR26)
                                {
                                case 1:
                                    if (VAR27)
                                    {
                                        FUN16(VAR15, VAR16);
                                    }
                                    else
                                    {
                                        FUN17(VAR15, VAR16);
                                        break;
                                    case 2:
                                        if (VAR27)
                                        {
                                            FUN16(VAR15, VAR16);
                                        }
                                        else
                                        {
                                            FUN18(VAR15, VAR16);
                                            break;
                                        case 3:
                                        case 4:
                                            if (VAR27)
                                            {
                                                FUN16(VAR15, VAR16);
                                                break;
                                            case 6:
                                            case 8:
                                                if (VAR27)
                                                {
                                                    FUN19(VAR15, VAR16);
                                                    break;
                                                default:
                                                    FUN4(VAR2, VAR32, "", VAR26);
                                                    goto VAR41;
                                                    *VAR17 = VAR12->VAR16;
                                                    *VAR4 = sizeof(VAR55);
                                                    VAR25 = VAR9;
                                                VAR41:
                                                    FUN20(VAR16);
                                                    return VAR25;