static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    GetBitContext VAR11;
    static int VAR12 = 0;
    int VAR13;
    FUN2(&VAR11, VAR6, VAR7 * 8);
    if (VAR9->VAR14 && FUN3(&VAR11))
    {
        FUN4(VAR2, VAR15, "");
        int VAR16 = FUN5(&VAR11, 7);
        FUN6(&VAR11, 6 * 8);
        switch (VAR16)
        {
        case 1:
            FUN7(VAR2, &VAR11);
            break;
        case 2:
            FUN8(VAR2, &VAR11);
            FUN9(VAR9);
            break;
        default:
            FUN4(VAR2, VAR15, "", VAR16);
            return VAR7;
            VAR9->VAR17 = !FUN3(&VAR11);
            if (!VAR9->VAR14)
                FUN6(&VAR11, 1);
            VAR9->VAR18 = VAR9->VAR19;
            VAR9->VAR20 = 0;
            do
            {
                VAR9->VAR21[VAR9->VAR20++] = FUN5(&VAR11, 6);
            } while (VAR9->VAR14 >= 0x030200 && VAR9->VAR20 < 3 && FUN3(&VAR11));
            VAR9->VAR19 = VAR9->VAR21[0];
            if (VAR9->VAR2->VAR22 & VAR23)
                FUN4(VAR9->VAR2, VAR24, "", VAR9->VAR17 ? "" : "", VAR12, VAR9->VAR19);
            VAR12++;
            if (VAR9->VAR19 != VAR9->VAR18)
            {
                FUN9(VAR9);
                FUN10(VAR9);
                if (VAR9->VAR17)
                {
                    if (!VAR9->VAR14)
                    {
                        FUN6(&VAR11, 4);
                        FUN6(&VAR11, 4);
                        if (VAR9->VAR25)
                        {
                            VAR9->VAR25 = FUN5(&VAR11, 5);
                            if (VAR12 == 1)
                                FUN4(VAR9->VAR2, VAR26, "", VAR9->VAR25);
                            if (VAR9->VAR25 || VAR9->VAR14)
                            {
                                if (FUN3(&VAR11))
                                    FUN4(VAR9->VAR2, VAR15, "");
                                FUN6(&VAR11, 2);
                                if (VAR9->VAR27.VAR3[0] == VAR9->VAR28.VAR3[0])
                                {
                                    if (VAR9->VAR28.VAR3[0])
                                        VAR2->FUN11(VAR2, &VAR9->VAR28);
                                    VAR9->VAR27 = VAR9->VAR28;
                                }
                                else
                                {
                                    if (VAR9->VAR28.VAR3[0])
                                        VAR2->FUN11(VAR2, &VAR9->VAR28);
                                    if (VAR9->VAR27.VAR3[0])
                                        VAR2->FUN11(VAR2, &VAR9->VAR27);
                                    VAR9->VAR28.VAR29 = 3;
                                    if (VAR2->FUN12(VAR2, &VAR9->VAR28) < 0)
                                    {
                                        FUN4(VAR9->VAR2, VAR15, "");
                                        VAR9->VAR30 = VAR9->VAR28;
                                        if (!VAR9->VAR31)
                                        {
                                            if (!VAR9->VAR32)
                                                FUN13(VAR9);
                                            else
                                                FUN14(VAR9);
                                        }
                                        else
                                        {
                                            VAR9->VAR30.VAR29 = 3;
                                            if (VAR2->FUN12(VAR2, &VAR9->VAR30) < 0)
                                            {
                                                FUN4(VAR9->VAR2, VAR15, "");
                                                VAR9->VAR30.VAR33 = VAR9->VAR33;
                                                VAR9->VAR30.VAR34 = 0;
                                                {
                                                    VAR35 FUN15(VAR9, &VAR11);
                                                    FUN16("")
                                                }
                                                if (!VAR9->VAR17)
                                                {
                                                    memcpy(VAR9->VAR30.VAR3[0], VAR9->VAR28.VAR3[0], VAR9->VAR30.VAR36[0] * VAR9->VAR37);
                                                    memcpy(VAR9->VAR30.VAR3[1], VAR9->VAR28.VAR3[1], VAR9->VAR30.VAR36[1] * VAR9->VAR37 / 2);
                                                    memcpy(VAR9->VAR30.VAR3[2], VAR9->VAR28.VAR3[2], VAR9->VAR30.VAR36[2] * VAR9->VAR37 / 2);
                                                }
                                                else
                                                {
                                                    {
                                                        START_TIMER if (FUN17(VAR9, &VAR11))
                                                        {
                                                            FUN4(VAR9->VAR2, VAR15, "");
                                                            FUN16("")
                                                        }
                                                        {
                                                            START_TIMER if (FUN18(VAR9, &VAR11))
                                                            {
                                                                FUN4(VAR9->VAR2, VAR15, "");
                                                                FUN16("")
                                                            }
                                                            {
                                                                START_TIMER if (FUN19(VAR9, &VAR11))
                                                                {
                                                                    FUN4(VAR9->VAR2, VAR15, "");
                                                                    FUN16("")
                                                                }
                                                                {
                                                                    START_TIMER if (FUN20(VAR9, &VAR11))
                                                                    {
                                                                        FUN4(VAR9->VAR2, VAR15, "");
                                                                        FUN16("")
                                                                    }
                                                                    {
                                                                        VAR35 FUN21(VAR9, 0, VAR9->VAR38, VAR9->VAR39);
                                                                        if ((VAR2->VAR40 & VAR41) == 0)
                                                                        {
                                                                            FUN21(VAR9, VAR9->VAR42[1], VAR9->VAR38 / 2, VAR9->VAR39 / 2);
                                                                            FUN21(VAR9, VAR9->VAR42[2], VAR9->VAR38 / 2, VAR9->VAR39 / 2);
                                                                            FUN16("")
                                                                        }
                                                                        {
                                                                            START_TIMER for (VAR13 = 0; VAR13 < VAR9->VAR43; VAR13++) FUN22(VAR9, VAR13);
                                                                            FUN16("")
                                                                        }
                                                                        {
                                                                            VAR35 FUN23(VAR9);
                                                                            FUN16("")
                                                                        }
                                                                        *VAR4 = sizeof(VAR44);
                                                                        *(VAR44 *)VAR3 = VAR9->VAR30;
                                                                        if ((VAR9->VAR27.VAR3[0]) && (VAR9->VAR27.VAR3[0] != VAR9->VAR28.VAR3[0]))
                                                                            VAR2->FUN11(VAR2, &VAR9->VAR27);
                                                                        VAR9->VAR27 = VAR9->VAR30;
                                                                        VAR9->VAR30.VAR3[0] = NULL;
                                                                        return VAR7;