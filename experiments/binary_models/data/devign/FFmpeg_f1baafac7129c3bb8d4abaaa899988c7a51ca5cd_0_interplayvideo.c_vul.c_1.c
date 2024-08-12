static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    if (FUN2(VAR6, VAR20, NULL))
    {
        FUN3(VAR12->VAR21);
        FUN3(VAR12->VAR22);
        if (VAR9 < 8)
            return VAR23;
        VAR18 = FUN4(VAR8);
        VAR17 = FUN4(VAR8 + 1);
        VAR19 = FUN5(VAR8 + 2);
        VAR12->VAR24 = FUN5(VAR8 + 4);
        VAR12->VAR25 = FUN5(VAR8 + 6);
        switch (VAR18)
        {
        case 0x06:
            if (VAR12->VAR24)
            {
                FUN6(VAR2, VAR26, "");
                return VAR23;
                if (VAR12->VAR25)
                {
                    FUN6(VAR2, VAR26, "");
                    return VAR23;
                    if (VAR12->VAR27)
                    {
                        FUN6(VAR2, VAR26, "");
                        return VAR23;
                        VAR12->VAR24 = ((VAR12->VAR2->VAR28 / 8) * (VAR12->VAR2->VAR29 / 8)) * 2;
                        VAR12->VAR30 = VAR8 + 8 + 14;
                        VAR19 -= VAR12->VAR24 + 14;
                        if (VAR19 <= 0)
                            return VAR23;
                        if (VAR9 < 8 + VAR12->VAR24 + 14 + VAR19)
                            return VAR23;
                        FUN7(&VAR12->VAR31, VAR8 + 8 + VAR12->VAR24 + 14, VAR19);
                        break;
                    case 0x10:
                        if (!VAR12->VAR24)
                        {
                            FUN6(VAR2, VAR26, "");
                            return VAR23;
                            if (!VAR12->VAR25)
                            {
                                FUN6(VAR2, VAR26, "");
                                return VAR23;
                                if (VAR12->VAR27)
                                {
                                    FUN6(VAR2, VAR26, "");
                                    return VAR23;
                                    if (VAR9 < 8 + VAR19 + VAR12->VAR24 + VAR12->VAR25)
                                        return VAR23;
                                    FUN7(&VAR12->VAR31, VAR8 + 8, VAR19);
                                    VAR12->VAR30 = VAR8 + 8 + VAR19;
                                    VAR12->VAR32 = VAR8 + 8 + VAR19 + VAR12->VAR24;
                                    break;
                                case 0x11:
                                    if (!VAR12->VAR24)
                                    {
                                        FUN6(VAR2, VAR26, "");
                                        return VAR23;
                                        if (VAR12->VAR25)
                                        {
                                            FUN6(VAR2, VAR26, "");
                                            return VAR23;
                                            if (VAR9 < 8 + VAR19 + VAR12->VAR24)
                                                return VAR23;
                                            FUN7(&VAR12->VAR31, VAR8 + 8, VAR19);
                                            VAR12->VAR30 = VAR8 + 8 + VAR19;
                                            break;
                                        default:
                                            FUN6(VAR2, VAR26, "", VAR18);
                                            if (VAR9 < 8 + VAR12->VAR24 + VAR19 + VAR12->VAR25)
                                            {
                                                FUN6(VAR2, VAR26, "");
                                                return VAR23;
                                                if ((VAR16 = FUN8(VAR2, VAR15, VAR33)) < 0)
                                                    if (!VAR12->VAR27)
                                                    {
                                                        int VAR10;
                                                        const VAR7 *VAR34 = FUN2(VAR6, VAR35, &VAR10);
                                                        if (VAR34 && VAR10 == VAR36)
                                                        {
                                                            VAR15->VAR37 = 1;
                                                            memcpy(VAR12->VAR34, VAR34, VAR36);
                                                        }
                                                        else if (VAR34)
                                                        {
                                                            FUN6(VAR2, VAR26, "", VAR10);
                                                            switch (VAR18)
                                                            {
                                                            case 0x06:
                                                                FUN9(VAR12, VAR15);
                                                                break;
                                                            case 0x10:
                                                                FUN10(VAR12, VAR15);
                                                                break;
                                                            case 0x11:
                                                                FUN11(VAR12, VAR15);
                                                                break;
                                                                *VAR4 = VAR17;
                                                                FUN3(VAR12->VAR22);
                                                                FUN12(VAR14 *, VAR12->VAR22, VAR12->VAR21);
                                                                if ((VAR16 = FUN13(VAR12->VAR21, VAR15)) < 0)
                                                                return VAR9