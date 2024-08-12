static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR3;
    int VAR12;
    GetByteContext VAR13;
    unsigned int VAR14;
    unsigned int VAR15[4];
    unsigned int VAR16;
    unsigned int VAR17;
    BRPixHeader VAR18;
    FUN2(&VAR13, VAR6->VAR3, VAR6->VAR19);
    VAR15[0] = FUN3(&VAR13);
    VAR15[1] = FUN3(&VAR13);
    VAR15[2] = FUN3(&VAR13);
    VAR15[3] = FUN3(&VAR13);
    if (VAR15[0] != 0x12 || VAR15[1] != 0x8 || VAR15[2] != 0x2 || VAR15[3] != 0x2)
    {
        FUN4(VAR2, VAR20, "");
        return VAR21;
        VAR16 = FUN3(&VAR13);
        if (VAR16 != 0x3 && VAR16 != 0x3d)
        {
            FUN4(VAR2, VAR20, "", VAR16);
            return VAR21;
            VAR12 = FUN5(&VAR18, &VAR13);
            if (!VAR12)
            {
                FUN4(VAR2, VAR20, "");
                return VAR21;
                switch (VAR18.VAR22)
                {
                case 3:
                    VAR2->VAR23 = VAR24;
                    VAR14 = 1;
                    break;
                case 4:
                    VAR2->VAR23 = VAR25;
                    VAR14 = 2;
                    break;
                case 5:
                    VAR2->VAR23 = VAR26;
                    VAR14 = 2;
                    break;
                case 6:
                    VAR2->VAR23 = VAR27;
                    VAR14 = 3;
                    break;
                case 7:
                    VAR2->VAR23 = VAR28;
                    VAR14 = 4;
                    break;
                case 18:
                    VAR2->VAR23 = VAR29;
                    VAR14 = 2;
                    break;
                default:
                    FUN4(VAR2, VAR20, "", VAR18.VAR22);
                    return VAR30;
                    if (VAR8->VAR31.VAR3[0])
                        VAR2->FUN6(VAR2, &VAR8->VAR31);
                    if (FUN7(VAR18.VAR32, VAR18.VAR33, 0, VAR2) < 0)
                        return VAR21;
                    if (VAR18.VAR32 != VAR2->VAR32 || VAR18.VAR33 != VAR2->VAR33)
                        FUN8(VAR2, VAR18.VAR32, VAR18.VAR33);
                    if ((VAR12 = FUN9(VAR2, &VAR8->VAR31)) < 0)
                    {
                        FUN4(VAR2, VAR20, "");
                        return VAR12;
                        VAR16 = FUN3(&VAR13);
                        if (VAR2->VAR23 == VAR24 && (VAR16 == 0x3 || VAR16 == 0x3d))
                        {
                            BRPixHeader VAR34;
                            VAR12 = FUN5(&VAR34, &VAR13);
                            if (!VAR12)
                            {
                                FUN4(VAR2, VAR20, "");
                                return VAR21;
                                if (VAR34.VAR22 != 7)
                                {
                                    FUN4(VAR2, VAR20, "");
                                    return VAR21;
                                    VAR16 = FUN3(&VAR13);
                                    VAR17 = FUN3(&VAR13);
                                    FUN10(&VAR13, 8);
                                    if (VAR16 != 0x21 || VAR17 != 1032 || FUN11(&VAR13) < 1032)
                                    {
                                        FUN4(VAR2, VAR20, "");
                                        return VAR21;
                                        FUN12(&VAR13, 1);
                                        *VAR35++ = (0xFFU << 24) | FUN13(&VAR13);
                                        FUN10(&VAR13, 8);
                                        VAR16 = FUN3(&VAR13);
                                        VAR17 = FUN3(&VAR13);
                                        FUN10(&VAR13, 8);
                                        {
                                            unsigned int VAR36 = VAR14 * VAR18.VAR32;
                                            unsigned int VAR37 = FUN11(&VAR13);
                                            if (VAR16 != 0x21 || VAR17 != VAR37 || VAR37 / VAR36 < VAR18.VAR33)
                                            {
                                                FUN4(VAR2, VAR20, "");
                                                return VAR21;
                                                FUN14(VAR8->VAR31.VAR3[0], VAR8->VAR31.VAR38[0], VAR6->VAR3 + FUN15(&VAR13), VAR36, VAR36, VAR18.VAR33);
                                                *VAR11 = VAR8->VAR31;
                                                *VAR4 = 1;
                                                return VAR6->VAR19