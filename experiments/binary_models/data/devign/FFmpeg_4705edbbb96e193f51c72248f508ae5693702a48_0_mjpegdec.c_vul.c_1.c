int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, const VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14;
    int VAR15, VAR16, VAR17;
    const int VAR18 = VAR2->VAR19 ? 1 : 8;
    int VAR20, VAR21;
    if (!VAR2->VAR22)
    {
        FUN2(VAR2->VAR23, VAR24, "");
        return -1;
        FUN3(VAR2->VAR25->VAR26[0]);
        VAR8 = FUN4(&VAR2->VAR27, 16);
        VAR9 = FUN4(&VAR2->VAR27, 8);
        if (VAR9 == 0 || VAR9 > VAR28)
        {
            FUN5(VAR2->VAR23, "", VAR9);
            return VAR29;
            if (VAR8 != 6 + 2 * VAR9)
            {
                FUN2(VAR2->VAR23, VAR30, "", VAR8);
                for (VAR10 = 0; VAR10 < VAR9; VAR10++)
                {
                    VAR16 = FUN4(&VAR2->VAR27, 8) - 1;
                    FUN2(VAR2->VAR23, VAR31, "", VAR16);
                    for (VAR15 = 0; VAR15 < VAR2->VAR9; VAR15++)
                        if (VAR16 == VAR2->VAR32[VAR15])
                            break;
                    if (VAR15 == VAR2->VAR9)
                    {
                        FUN2(VAR2->VAR23, VAR30, "", VAR15);
                        if (VAR2->VAR23->VAR33 == FUN6('', '', '', '') && VAR9 == 3 && VAR2->VAR9 == 3 && VAR10)
                            VAR15 = 3 - VAR10;
                        VAR2->VAR34[VAR10] = VAR2->VAR35[VAR15];
                        VAR2->VAR36[VAR10] = VAR2->VAR37[VAR15] * VAR2->VAR38[VAR15];
                        VAR2->VAR39[VAR10] = VAR2->VAR37[VAR15];
                        VAR2->VAR40[VAR10] = VAR2->VAR38[VAR15];
                        if (VAR9 == 3 && VAR2->VAR9 == 3 && VAR2->VAR23->VAR41 == VAR42)
                            VAR15 = (VAR10 + 2) % 3;
                        if (VAR9 == 1 && VAR2->VAR9 == 3 && VAR2->VAR23->VAR41 == VAR42)
                            VAR15 = (VAR15 + 2) % 3;
                        VAR2->VAR43[VAR10] = VAR15;
                        VAR2->VAR44[VAR10] = FUN4(&VAR2->VAR27, 4);
                        VAR2->VAR45[VAR10] = FUN4(&VAR2->VAR27, 4);
                        if (VAR2->VAR44[VAR10] < 0 || VAR2->VAR45[VAR10] < 0 || VAR2->VAR44[VAR10] >= 4 || VAR2->VAR45[VAR10] >= 4)
                            goto VAR46;
                        if (!VAR2->VAR47[0][VAR2->VAR44[VAR10]].VAR48 || !(VAR2->VAR49 ? VAR2->VAR47[2][VAR2->VAR45[0]].VAR48 : VAR2->VAR47[1][VAR2->VAR45[VAR10]].VAR48))
                            goto VAR46;
                        VAR13 = FUN4(&VAR2->VAR27, 8);
                        VAR20 = FUN4(&VAR2->VAR27, 8);
                        if (VAR2->VAR23->VAR33 != FUN7(""))
                        {
                            VAR21 = FUN4(&VAR2->VAR27, 4);
                            VAR14 = FUN4(&VAR2->VAR27, 4);
                        }
                        else
                            VAR21 = VAR14 = 0;
                        if (VAR9 > 1)
                        {
                            VAR2->VAR50 = (VAR2->VAR51 + VAR2->VAR52 * VAR18 - 1) / (VAR2->VAR52 * VAR18);
                            VAR2->VAR53 = (VAR2->VAR54 + VAR2->VAR55 * VAR18 - 1) / (VAR2->VAR55 * VAR18);
                        }
                        else if (!VAR2->VAR56)
                        {
                            VAR11 = VAR2->VAR52 / VAR2->VAR39[0];
                            VAR12 = VAR2->VAR55 / VAR2->VAR40[0];
                            VAR2->VAR50 = (VAR2->VAR51 + VAR11 * VAR18 - 1) / (VAR11 * VAR18);
                            VAR2->VAR53 = (VAR2->VAR54 + VAR12 * VAR18 - 1) / (VAR12 * VAR18);
                            VAR2->VAR36[0] = 1;
                            VAR2->VAR39[0] = 1;
                            VAR2->VAR40[0] = 1;
                            if (VAR2->VAR23->VAR57 & VAR58)
                                FUN2(VAR2->VAR23, VAR31, "", VAR2->VAR19 ? "" : "", VAR2->VAR59 ? "" : "", VAR13, VAR14, VAR20, VAR2->VAR60, VAR2->VAR61, VAR2->VAR62 ? "" : (VAR2->VAR63 ? "" : ""), VAR9);
                            for (VAR10 = VAR2->VAR61; VAR10 > 0; VAR10--)
                                FUN8(&VAR2->VAR27, 8);
                        VAR64:
                            for (VAR10 = 0; VAR10 < VAR9; VAR10++)
                                VAR2->VAR65[VAR10] = (4 << VAR2->VAR60);
                            if (VAR2->VAR19)
                            {
                                FUN3(VAR2->VAR25 == VAR2->VAR66);
                                if (VAR67 && VAR2->VAR56)
                                {
                                    if ((VAR17 = FUN9(VAR2, VAR13, VAR14, VAR20)) < 0)
                                        return VAR17;
                                }
                                else
                                {
                                    if (VAR2->VAR59)
                                    {
                                        if ((VAR17 = FUN10(VAR2, VAR9, VAR13, VAR14)) < 0)
                                            return VAR17;
                                    }
                                    else
                                    {
                                        if ((VAR17 = FUN11(VAR2, VAR13, VAR14, VAR9)) < 0)
                                            return VAR17;
                                    }
                                    else
                                    {
                                        if (VAR2->VAR49 && VAR13)
                                        {
                                            FUN3(VAR2->VAR25 == VAR2->VAR66);
                                            if ((VAR17 = FUN12(VAR2, VAR13, VAR20, VAR21, VAR14)) < 0)
                                                return VAR17;
                                        }
                                        else
                                        {
                                            if ((VAR17 = FUN13(VAR2, VAR9, VAR21, VAR14, VAR4, VAR5, VAR7)) < 0)
                                                return VAR17;
                                            if (VAR2->VAR68 && FUN14(&VAR2->VAR27) > 32 && FUN15(&VAR2->VAR27, 8) == 0xFF)
                                            {
                                                GetBitContext VAR69 = VAR2->VAR27;
                                                FUN16(&VAR69);
                                                if (FUN15(&VAR69, 16) == 0xFFD1)
                                                {
                                                    FUN2(VAR2->VAR23, VAR31, "");
                                                    VAR2->VAR27 = VAR69;
                                                    FUN8(&VAR2->VAR27, 16);
                                                    VAR2->VAR70 ^= 1;
                                                    goto VAR64;
                                                    FUN17();
                                                    return 0;
                                                VAR46:
                                                    FUN2(VAR2->VAR23, VAR30, "")