static int FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4 = NULL;
    int VAR5;
    int64_t VAR6;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        VAR8 *VAR9 = VAR10[VAR5];
        VAR11 *VAR12 = VAR13[VAR9->VAR14];
        int VAR15 = 0;
        if (!VAR9->VAR16)
            continue;
        if (!VAR9->VAR4 && !(VAR9->VAR4 = FUN2()))
        {
            return FUN3(VAR17);
        }
        else
            FUN4(VAR9->VAR4);
        VAR4 = VAR9->VAR4;
        while (1)
        {
            VAR15 = FUN5(VAR9->VAR16->VAR16, &VAR2, VAR18);
            if (VAR15 < 0)
            {
                if (VAR15 != FUN3(VAR19) && VAR15 != VAR20)
                {
                    char VAR21[256];
                    FUN6(VAR15, VAR21, sizeof(VAR21));
                    FUN7(NULL, VAR22, "", VAR21);
                    VAR6 = VAR23;
                    if (VAR2->VAR24 != VAR23)
                    {
                        VAR4->VAR24 = VAR6 = FUN8(VAR2->VAR24, VAR9->VAR16->VAR16->VAR25[0]->VAR26, VAR9->VAR27->VAR28->VAR26) - FUN8(VAR12->VAR29, VAR30, VAR9->VAR27->VAR28->VAR26);
                        if (VAR12->VAR29 && VAR4->VAR24 < 0)
                        {
                            FUN9(VAR2);
                            continue;
                            switch (VAR9->VAR16->VAR16->VAR25[0]->VAR31)
                            {
                            case VAR32:
                                FUN10(VAR4, VAR2);
                                VAR4->VAR24 = VAR6;
                                if (!VAR9->VAR33)
                                    VAR9->VAR27->VAR28->VAR34 = VAR2->VAR35->VAR34;
                                FUN11(VAR12->VAR36, VAR9, VAR4);
                            case VAR37:
                                FUN10(VAR4, VAR2);
                                VAR4->VAR24 = VAR6;
                                FUN12(VAR12->VAR36, VAR9, VAR4);
                            default:
                                FUN13(0);
                                FUN9(VAR2);
                                return 0;