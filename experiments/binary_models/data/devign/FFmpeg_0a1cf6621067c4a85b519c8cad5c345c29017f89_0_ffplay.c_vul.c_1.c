static int FUN1(VAR1 *VAR2, VAR3 *VAR4, double VAR5, int64_t VAR6)
{
    VAR7 *VAR8;
    double VAR9, VAR10 = VAR5;
    if (VAR10 != 0)
    {
        VAR2->VAR11 = VAR10;
    }
    else
    {
        VAR10 = VAR2->VAR11;
        VAR9 = FUN2(VAR2->VAR12->VAR13->VAR14);
        VAR9 += VAR4->VAR15 * (VAR9 * 0.5);
        VAR2->VAR11 += VAR9;
        FUN3("", FUN4(VAR4->VAR16), VAR10, VAR5);
        FUN5(VAR2->VAR17);
        if (VAR2->VAR18 >= VAR19 && !VAR2->VAR20)
            VAR2->VAR21 = FUN6(1.0 - VAR22, VAR2->VAR21 * (1.0 - VAR22));
        while (VAR2->VAR18 >= VAR19 && !VAR2->VAR23.VAR24)
        {
            FUN7(VAR2->VAR17);
            if (VAR2->VAR23.VAR24)
                return -1;
            VAR8 = &VAR2->VAR25[VAR2->VAR26];
            VAR8->VAR27 = VAR9;
            if (!VAR8->VAR28 || VAR8->VAR29 != VAR2->VAR30->VAR31[0]->VAR32 || VAR8->VAR33 != VAR2->VAR30->VAR31[0]->VAR34)
            { VAR8 -> VAR29 != VAR2 -> VAR12 -> VAR13 -> VAR29 || VAR8 -> VAR33 != VAR2 -> VAR12 -> VAR13 -> VAR33 )
                {
                    SDL_Event VAR35;
                    VAR8->VAR36 = 0;
                    VAR35.VAR37 = VAR38;
                    VAR35.VAR39.VAR40 = VAR2;
                    FUN8(&VAR35);
                    FUN5(VAR2->VAR17);
                    while (!VAR8->VAR36 && !VAR2->VAR23.VAR24)
                    {
                        FUN7(VAR2->VAR17);
                        if (VAR2->VAR23.VAR24)
                            return -1;
                        if (VAR8->VAR28)
                        {
                            AVPicture VAR41;
                            if (VAR8->VAR42)
                                FUN9(VAR8->VAR42);
                            VAR8->VAR42 = VAR4->VAR43;
                            FUN10(VAR8->VAR28);
                            memset(&VAR41, 0, sizeof(VAR44));
                            VAR41.VAR45[0] = VAR8->VAR28->VAR46[0];
                            VAR41.VAR45[1] = VAR8->VAR28->VAR46[2];
                            VAR41.VAR45[2] = VAR8->VAR28->VAR46[1];
                            VAR41.VAR47[0] = VAR8->VAR28->VAR48[0];
                            VAR41.VAR47[1] = VAR8->VAR28->VAR48[2];
                            VAR41.VAR47[2] = VAR8->VAR28->VAR48[1];
                            FUN11(&VAR41, (VAR44 *)VAR4, VAR8->VAR49, VAR8->VAR29, VAR8->VAR33);
                            VAR50 = FUN12(VAR51, "", NULL);
                            VAR2->VAR52 = FUN13(VAR2->VAR52, VAR8->VAR29, VAR8->VAR33, VAR8->VAR49, VAR8->VAR29, VAR8->VAR33, VAR53, VAR50, NULL, NULL, NULL);
                            if (VAR2->VAR52 == NULL)
                            {
                                fprintf(VAR54, "");
                                FUN14(1);
                                FUN15(VAR2->VAR52, VAR4->VAR45, VAR4->VAR47, 0, VAR8->VAR33, VAR41.VAR45, VAR41.VAR47);
                                FUN16(VAR8->VAR28);
                                VAR8->VAR10 = VAR10;
                                VAR8->VAR6 = VAR6;
                                if (++VAR2->VAR26 == VAR19)
                                    VAR2->VAR26 = 0;
                                FUN5(VAR2->VAR17);
                                VAR8->VAR55 = FUN17(VAR8->VAR10, VAR2);
                                VAR2->VAR18++;
                                FUN7(VAR2->VAR17);
                                return 0;