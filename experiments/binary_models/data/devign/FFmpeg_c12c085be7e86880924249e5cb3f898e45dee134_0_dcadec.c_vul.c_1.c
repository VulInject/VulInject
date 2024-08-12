static int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4, VAR5, VAR6, VAR7, VAR8;
    uint32_t VAR9;
    if (!VAR3)
    {
        if (VAR2->VAR10)
            FUN2(&VAR2->VAR11, 32);
        if (VAR2->VAR12)
        {
            VAR6 = FUN3(&VAR2->VAR11, 6);
            FUN2(&VAR2->VAR11, (-FUN4(&VAR2->VAR11)) & 31);
            VAR7 = 8 * VAR6 + FUN4(&VAR2->VAR11);
            if ((VAR9 = FUN5(&VAR2->VAR11, 32)) != VAR13)
            {
                FUN6(VAR2->VAR14, VAR15, "" VAR16 "", VAR9);
                return VAR17;
            }
            if (FUN7(&VAR2->VAR11))
            {
                FUN8(VAR2->VAR14, "");
                FUN9(&VAR2->VAR11, (-FUN4(&VAR2->VAR11)) & 4);
                FUN2(&VAR2->VAR11, 44);
            }
            if ((VAR2->VAR18 = FUN7(&VAR2->VAR11)))
            {
                int VAR19 = FUN3(&VAR2->VAR11, 3);
                switch (VAR19)
                {
                case 0:
                    VAR2->VAR20 = VAR21;
                    break;
                case 1:
                    VAR2->VAR20 = VAR22;
                    break;
                case 2:
                    VAR2->VAR20 = VAR23;
                    break;
                case 3:
                    VAR2->VAR20 = VAR24;
                    break;
                case 4:
                    VAR2->VAR20 = VAR25;
                    break;
                case 5:
                    VAR2->VAR20 = VAR26;
                    break;
                case 6:
                    VAR2->VAR20 = VAR27;
                    break;
                default:
                    FUN6(VAR2->VAR14, VAR15, "", VAR19);
                    return VAR17;
                }
                for (VAR5 = 0; VAR5 < VAR28[VAR2->VAR20]; VAR5++)
                {
                    for (VAR4 = 0; VAR4 < VAR2->VAR29.VAR30 + !!VAR2->VAR31; VAR4++)
                    {
                        uint16_t VAR32 = FUN3(&VAR2->VAR11, 9);
                        if ((VAR32 & 0xFF) > 241)
                        {
                            FUN6(VAR2->VAR14, VAR15, "" VAR33 "", VAR32);
                            return VAR17;
                        }
                        VAR2->VAR34[VAR4][VAR5] = VAR32;
                    }
                }
            }
            FUN10(&VAR2->VAR11);
            FUN9(&VAR2->VAR11, 16);
            if ((VAR8 = (VAR7 - FUN4(&VAR2->VAR11))) < 0)
            {
                FUN6(VAR2->VAR14, VAR15, "", -VAR8);
                return VAR17;
            }
            else if (VAR8)
            {
                FUN8(VAR2->VAR14, "");
                FUN2(&VAR2->VAR11, VAR8);
            }
        }
        if (VAR2->VAR35 && VAR2->VAR36)
            FUN3(&VAR2->VAR11, 16);
    }
    return 0;
}