static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11 = VAR2->VAR12[VAR4->VAR13];
    VAR14 *VAR15 = VAR11->VAR7;
    MXFIndexEntry VAR16 = {0};
    int VAR17;
    if (!VAR6->VAR18 && !(VAR6->VAR19 % VAR20))
    {
        if ((VAR17 = FUN2(&VAR6->VAR21, VAR6->VAR19 + VAR20, sizeof(*VAR6->VAR21))) < 0)
        {
            VAR6->VAR19 = 0;
            FUN3(VAR2, VAR22, "");
            return VAR17;
            if (VAR11->VAR23->VAR24 == VAR25)
            {
                if (!FUN4(VAR2, VAR11, VAR4, &VAR16))
                {
                    FUN3(VAR2, VAR22, "");
                    return -1;
                }
                else if (VAR11->VAR23->VAR24 == VAR26)
                {
                    if (!FUN5(VAR2, VAR11, VAR4))
                    {
                        FUN3(VAR2, VAR22, "");
                        return -1;
                    }
                    else if (VAR11->VAR23->VAR24 == VAR27)
                    {
                        if (!FUN6(VAR2, VAR11, VAR4))
                        {
                            FUN3(VAR2, VAR22, "");
                            return -1;
                        }
                        else if (VAR11->VAR23->VAR24 == VAR28)
                        {
                            if (!FUN7(VAR2, VAR11, VAR4, &VAR16))
                            {
                                FUN3(VAR2, VAR22, "");
                                return -1;
                                if (VAR2->VAR29 == &VAR30)
                                    return FUN8(VAR2, VAR4, &VAR16);
                                if (!VAR6->VAR31)
                                {
                                    if (VAR6->VAR18)
                                    {
                                        if ((VAR17 = FUN9(VAR2, 1, 2, VAR32, 1)) < 0)
                                            return VAR17;
                                        FUN10(VAR2);
                                        FUN11(VAR2);
                                    }
                                    else
                                    {
                                        if ((VAR17 = FUN9(VAR2, 0, 0, VAR32, 1)) < 0)
                                            return VAR17;
                                        VAR6->VAR31 = 1;
                                        if (VAR11->VAR33 == 0)
                                        {
                                            if (!VAR6->VAR18 && (!VAR6->VAR19 || VAR6->VAR19 > VAR20) && !(VAR16.VAR34 & 0x33))
                                            {
                                                FUN10(VAR2);
                                                if ((VAR17 = FUN9(VAR2, 1, 2, VAR35, 0)) < 0)
                                                    return VAR17;
                                                FUN10(VAR2);
                                                FUN11(VAR2);
                                                FUN10(VAR2);
                                                FUN12(VAR2);
                                                if (!VAR6->VAR18)
                                                {
                                                    VAR6->VAR21[VAR6->VAR19].VAR36 = VAR6->VAR37;
                                                    VAR6->VAR21[VAR6->VAR19].VAR34 = VAR16.VAR34;
                                                    VAR6->VAR21[VAR6->VAR19].VAR38 = VAR16.VAR38;
                                                    VAR6->VAR37 += VAR39;
                                                    VAR6->VAR19++;
                                                }
                                                else if (!VAR6->VAR18 && VAR11->VAR33 == 1)
                                                {
                                                    VAR6->VAR21[VAR6->VAR19 - 1].VAR40 = VAR6->VAR37 - VAR6->VAR21[VAR6->VAR19 - 1].VAR36;
                                                    FUN10(VAR2);
                                                    FUN13(VAR9, VAR15->VAR41, 16);
                                                    if (VAR2->VAR29 == &VAR42)
                                                    {
                                                        if (VAR11->VAR23->VAR43 == VAR44)
                                                            FUN14(VAR2, VAR11, VAR4);
                                                        else
                                                            FUN15(VAR2, VAR11, VAR4);
                                                    }
                                                    else
                                                    {
                                                        FUN16(VAR9, VAR4->VAR45);
                                                        FUN13(VAR9, VAR4->VAR46, VAR4->VAR45);
                                                        VAR6->VAR37 += 16 + 4 + VAR4->VAR45 + FUN17(16 + 4 + VAR4->VAR45);
                                                        FUN18(VAR9);
                                                        return 0;