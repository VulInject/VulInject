static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9 = VAR6->VAR3 + VAR6->VAR10;
    int VAR11 = VAR6->VAR10;
    VAR12 *const VAR13 = VAR2->VAR14;
    VAR15 *VAR16 = VAR3;
    VAR15 *const VAR17 = &VAR13->VAR16;
    VAR7 *VAR18;
    int VAR19, VAR20, VAR21;
    int VAR22, VAR23;
    int VAR24, VAR25, VAR26, VAR27, VAR28, VAR29, VAR30, VAR31;
    unsigned int VAR32;
    VAR19 = FUN2(VAR8);
    VAR8 += 4;
    if (VAR19 == FUN3(""))
    {
        VAR21 = 0;
    }
    else if (VAR19 == FUN2(""))
    {
        VAR21 = 1;
    }
    else
    {
        FUN4(VAR2, VAR33, "");
        VAR20 = FUN5(&VAR8, VAR21);
        VAR8 = VAR6->VAR3 + 0x304;
        VAR24 = FUN5(&VAR8, VAR21);
        VAR25 = FUN5(&VAR8, VAR21);
        VAR8 += 20;
        VAR28 = VAR8[0];
        VAR8 += 3;
        VAR2->VAR34 = VAR27 = VAR8[0];
        switch (VAR28)
        {
        case 51:
            VAR29 = 4;
            break;
        case 50:
            VAR29 = 3;
            break;
        default:
            FUN4(VAR2, VAR33, "", VAR28);
            switch (VAR27)
            {
            case 8:
                if (VAR29 == 4)
                {
                    VAR2->VAR35 = VAR36;
                }
                else
                {
                    VAR2->VAR35 = VAR37;
                    VAR31 = VAR29;
                    VAR30 = VAR29;
                    break;
                case 10:
                    VAR2->VAR35 = VAR38;
                    VAR30 = 6;
                    VAR31 = VAR29 * 2;
                    break;
                case 12:
                case 16:
                    if (VAR21)
                    {
                        VAR2->VAR35 = VAR39;
                    }
                    else
                    {
                        VAR2->VAR35 = VAR40;
                        VAR30 = 6;
                        VAR31 = VAR29 * 2;
                        break;
                    default:
                        FUN4(VAR2, VAR33, "", VAR27);
                        if (VAR13->VAR16.VAR3[0])
                            VAR2->FUN6(VAR2, &VAR13->VAR16);
                        if (FUN7(VAR24, VAR25, 0, VAR2))
                            if (VAR24 != VAR2->VAR41 || VAR25 != VAR2->VAR42)
                                FUN8(VAR2, VAR24, VAR25);
                        if (VAR2->FUN9(VAR2, VAR17) < 0)
                        {
                            FUN4(VAR2, VAR33, "");
                            VAR8 = VAR6->VAR3 + VAR20;
                            VAR18 = VAR17->VAR3[0];
                            VAR26 = VAR17->VAR43[0];
                            switch (VAR27)
                            {
                            case 10:
                                for (VAR22 = 0; VAR22 < VAR2->VAR42; VAR22++)
                                {
                                    VAR44 *VAR45 = (VAR44 *)VAR18;
                                    for (VAR23 = 0; VAR23 < VAR2->VAR41; VAR23++)
                                    {
                                        VAR32 = FUN5(&VAR8, VAR21);
                                        *VAR45++ = FUN10(VAR32 >> 16);
                                        *VAR45++ = FUN10(VAR32 >> 6);
                                        *VAR45++ = FUN10(VAR32 << 4);
                                        VAR18 += VAR26;
                                        break;
                                    case 8:
                                    case 12:
                                    case 16:
                                        if (VAR31 == VAR30)
                                        {
                                            for (VAR22 = 0; VAR22 < VAR2->VAR42; VAR22++)
                                            {
                                                memcpy(VAR18, VAR8, VAR30 * VAR2->VAR41);
                                                VAR18 += VAR26;
                                                VAR8 += VAR31 * VAR2->VAR41;
                                            }
                                            else
                                            {
                                                for (VAR22 = 0; VAR22 < VAR2->VAR42; VAR22++)
                                                {
                                                    VAR7 *VAR45 = VAR18;
                                                    for (VAR23 = 0; VAR23 < VAR2->VAR41; VAR23++)
                                                    {
                                                        memcpy(VAR45, VAR8, VAR30);
                                                        VAR45 += VAR30;
                                                        VAR8 += VAR31;
                                                        VAR18 += VAR26;
                                                        break;
                                                        *VAR16 = VAR13->VAR16;
                                                        *VAR4 = sizeof(VAR46);
                                                        return VAR11;