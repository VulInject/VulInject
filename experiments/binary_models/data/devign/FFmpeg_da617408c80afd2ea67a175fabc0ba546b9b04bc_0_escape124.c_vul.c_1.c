static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *VAR13 = VAR3;
    GetBitContext VAR14;
    unsigned VAR15, VAR16;
    unsigned VAR17;
    unsigned VAR18, VAR19 = 1, VAR20 = 0, VAR21 = VAR2->VAR22 / 8, VAR23 = -1;
    VAR24 *VAR25, *VAR26;
    unsigned VAR27, VAR28;
    int VAR29;
    if ((VAR29 = FUN2(&VAR14, VAR6->VAR3, VAR6->VAR8)) < 0)
        return VAR29;
    if (FUN3(&VAR14) < 64)
        return -1;
    VAR15 = FUN4(&VAR14, 32);
    VAR16 = FUN4(&VAR14, 32);
    if (!(VAR15 & 0x114) || !(VAR15 & 0x7800000))
    {
        if (!VAR10->VAR13->VAR3[0])
            FUN5(VAR2, VAR30, "");
        *VAR4 = 1;
        if ((VAR29 = FUN6(VAR13, VAR10->VAR13)) < 0)
            return VAR29;
        return VAR16;
        for (VAR17 = 0; VAR17 < 3; VAR17++)
        {
            if (VAR15 & (1 << (17 + VAR17)))
            {
                unsigned VAR31, VAR32;
                if (VAR17 == 2)
                {
                    VAR32 = FUN4(&VAR14, 20);
                    if (!VAR32)
                    {
                        FUN5(VAR2, VAR33, "");
                        VAR31 = FUN7(VAR32 - 1) + 1;
                    }
                    else
                    {
                        VAR31 = FUN8(&VAR14, 4);
                        if (VAR17 == 0)
                        {
                            VAR32 = 1 << VAR31;
                        }
                        else
                        {
                            VAR32 = VAR10->VAR34 << VAR31;
                            FUN9(&VAR10->VAR35[VAR17].VAR36);
                            VAR10->VAR35[VAR17] = FUN10(&VAR14, VAR31, VAR32);
                            if (!VAR10->VAR35[VAR17].VAR36)
                                return -1;
                            if ((VAR29 = FUN11(VAR2, VAR13, VAR37)) < 0)
                                return VAR29;
                            VAR26 = (VAR24 *)VAR13->VAR3[0];
                            VAR28 = VAR13->VAR38[0] / 2;
                            VAR25 = (VAR24 *)VAR10->VAR13->VAR3[0];
                            VAR27 = VAR10->VAR13->VAR38[0] / 2;
                            for (VAR18 = 0; VAR18 < VAR10->VAR34; VAR18++)
                            {
                                MacroBlock VAR39;
                                SuperBlock VAR40;
                                unsigned VAR41 = 0;
                                if (VAR23 == -1)
                                {
                                    VAR23 = FUN12(&VAR14);
                                    if (VAR23)
                                    {
                                        FUN13(VAR26, VAR28, VAR25, VAR27);
                                    }
                                    else
                                    {
                                        FUN13(VAR40.VAR42, 8, VAR25, VAR27);
                                        while (FUN3(&VAR14) >= 1 && !FUN14(&VAR14))
                                        {
                                            unsigned VAR43;
                                            VAR39 = FUN15(VAR10, &VAR14, &VAR19, VAR18);
                                            VAR43 = FUN8(&VAR14, 16);
                                            VAR41 |= VAR43;
                                            for (VAR17 = 0; VAR17 < 16; VAR17++)
                                            {
                                                if (VAR43 & VAR44[VAR17])
                                                {
                                                    FUN16(&VAR40, VAR39, VAR17);
                                                    if (!FUN14(&VAR14))
                                                    {
                                                        unsigned VAR45 = FUN8(&VAR14, 4);
                                                        for (VAR17 = 0; VAR17 < 4; VAR17++)
                                                        {
                                                            if (VAR45 & (1 << VAR17))
                                                            {
                                                                VAR41 ^= 0xF << VAR17 * 4;
                                                            }
                                                            else
                                                            {
                                                                VAR41 ^= FUN8(&VAR14, 4) << VAR17 * 4;
                                                                for (VAR17 = 0; VAR17 < 16; VAR17++)
                                                                {
                                                                    if (VAR41 & VAR44[VAR17])
                                                                    {
                                                                        VAR39 = FUN15(VAR10, &VAR14, &VAR19, VAR18);
                                                                        FUN16(&VAR40, VAR39, VAR17);
                                                                    }
                                                                    else if (VAR15 & (1 << 16))
                                                                    {
                                                                        while (FUN3(&VAR14) >= 1 && !FUN14(&VAR14))
                                                                        {
                                                                            VAR39 = FUN15(VAR10, &VAR14, &VAR19, VAR18);
                                                                            FUN16(&VAR40, VAR39, FUN8(&VAR14, 4));
                                                                            FUN13(VAR26, VAR28, VAR40.VAR42, 8);
                                                                            VAR20++;
                                                                            VAR26 += 8;
                                                                            if (VAR25)
                                                                                VAR25 += 8;
                                                                            if (VAR20 == VAR21)
                                                                            {
                                                                                VAR26 += VAR28 * 8 - VAR21 * 8;
                                                                                if (VAR25)
                                                                                    VAR25 += VAR27 * 8 - VAR21 * 8;
                                                                                VAR20 = 0;
                                                                                VAR23--;
                                                                                FUN5(VAR2, VAR30, "", VAR16, VAR7, FUN17(&VAR14) / 8);
                                                                                FUN18(VAR10->VAR13);
                                                                                if ((VAR29 = FUN6(VAR10->VAR13, VAR13)) < 0)
                                                                                    return VAR29;
                                                                                *VAR4 = 1;
                                                                                return VAR16