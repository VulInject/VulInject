static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, const char *VAR6, unsigned int VAR7, int VAR8)
{
    VAR9 *VAR10, *VAR11;
    VAR12 *VAR13;
    AMFDataType VAR14;
    char VAR15[256];
    double VAR16;
    VAR16 = 0;
    VAR13 = VAR2->VAR17;
    VAR14 = FUN2(VAR13);
    switch (VAR14)
    {
    case VAR18:
        VAR16 = FUN3(FUN4(VAR13));
        break;
    case VAR19:
        VAR16 = FUN2(VAR13);
        break;
    case VAR20:
        if (FUN5(VAR13, VAR15, sizeof(VAR15)) < 0)
            return -1;
        break;
    case VAR21:
    {
        unsigned int VAR22;
        while (FUN6(VAR13) < VAR7 - 2 && (VAR22 = FUN7(VAR13)))
        {
            FUN8(VAR13, VAR22);
            if (FUN1(VAR2, NULL, NULL, NULL, VAR7, VAR8 + 1) < 0)
                return -1;
        }
        if (FUN2(VAR13) != VAR23)
            return -1;
    }
    break;
    case VAR24:
    case VAR25:
    case VAR26:
        break;
    case VAR27:
        FUN8(VAR13, 4);
        while (FUN6(VAR13) < VAR7 - 2 && FUN5(VAR13, VAR15, sizeof(VAR15)) > 0)
        {
            if (FUN1(VAR2, VAR4, VAR5, VAR15, VAR7, VAR8 + 1) < 0)
                return -1;
        }
        if (FUN2(VAR13) != VAR23)
            return -1;
        break;
    case VAR28:
    {
        unsigned int VAR29, VAR30;
        VAR29 = FUN9(VAR13);
        for (VAR30 = 0; VAR30 < VAR29 && FUN6(VAR13) < VAR7 - 1; VAR30++)
        {
            if (FUN1(VAR2, NULL, NULL, NULL, VAR7, VAR8 + 1) < 0)
                return -1;
        }
    }
    break;
    case VAR31:
        FUN8(VAR13, 8 + 2);
        break;
    default:
        return -1;
    }
    if (VAR8 == 1 && VAR6)
    {
        VAR10 = VAR4 ? VAR4->VAR32 : NULL;
        VAR11 = VAR5 ? VAR5->VAR32 : NULL;
        if (VAR14 == VAR19)
        {
            if (!strcmp(VAR6, "") && VAR10)
                VAR10->VAR33 = VAR16 > 0 ? 2 : 1;
        }
        else if (VAR14 == VAR18)
        {
            if (!strcmp(VAR6, ""))
                VAR2->VAR34 = VAR16 * VAR35;
            else if (!strcmp(VAR6, "") && VAR10 && 0 <= (int)VAR16)
                FUN10(VAR2, VAR4, (int)VAR16 << VAR36);
            else if (!strcmp(VAR6, "") && VAR11 && 0 <= (int)VAR16)
                FUN11(VAR2, VAR5, (int)VAR16);
            else if (!strcmp(VAR6, "") && VAR10 && 0 < (int)VAR16)
            {
                VAR10->VAR37 = VAR16;
                if (VAR16 == 8 && (VAR10->VAR38 == VAR39 || VAR10->VAR38 == VAR40))
                    VAR10->VAR38 = VAR41;
            }
            else if (!strcmp(VAR6, "") && VAR10 && VAR16 >= 0)
            {
                if (!VAR10->VAR42)
                {
                    switch ((int)VAR16)
                    {
                    case 44000:
                        VAR10->VAR42 = 44100;
                        break;
                    case 22000:
                        VAR10->VAR42 = 22050;
                        break;
                    case 11000:
                        VAR10->VAR42 = 11025;
                        break;
                    case 5000:
                        VAR10->VAR42 = 5512;
                        break;
                    default:
                        VAR10->VAR42 = VAR16;
                    }
                }
            }
        }
    }
    return 0;
}