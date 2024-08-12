static void FUN1(void)
{
    int VAR1, VAR2;
    for (VAR1 = 0; VAR1 < VAR3; VAR1++)
    {
        VAR4 *VAR5 = VAR6[VAR1];
        VAR7 *VAR8 = VAR5->VAR9;
        VAR10 *VAR11 = VAR12[VAR5->VAR13];
        int VAR14 = 0;
        if (!VAR5->VAR15)
            continue;
        if (VAR8->VAR16 == VAR17 && VAR8->VAR18 <= 1)
            continue;
        if (VAR8->VAR16 != VAR19 && VAR8->VAR16 != VAR17)
            continue;
        FUN2(VAR8, NULL);
        for (;;)
        {
            const char *VAR20 = NULL;
            switch (VAR8->VAR16)
            {
            case VAR17:
                VAR20 = "";
                break;
            case VAR19:
                VAR20 = "";
                break;
            default:
                FUN3(0);
            }
            if (1)
            {
                AVPacket VAR21;
                FUN4(&VAR21);
                VAR21.VAR22 = NULL;
                VAR21.VAR23 = 0;
                VAR2 = FUN5(VAR8, &VAR21);
                if (VAR2 < 0 && VAR2 != VAR24)
                {
                    FUN6(NULL, VAR25, "", VAR20);
                    FUN7(1);
                }
                if (VAR5->VAR26 && VAR8->VAR27)
                {
                    fprintf(VAR5->VAR26, "", VAR8->VAR27);
                }
                if (VAR2 == VAR24)
                {
                    VAR14 = 1;
                    break;
                }
                FUN8(&VAR21, VAR8->VAR28, VAR5->VAR29->VAR28);
                FUN9(VAR11, &VAR21, VAR5);
            }
            if (VAR14)
                break;
        }
    }
}