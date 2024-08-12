static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, VAR7 *VAR8)
{
    AVPacket VAR9, VAR10;
    VAR11 *VAR12 = NULL;
    int VAR13 = 0, VAR14 = 0, VAR15 = 0;
    int64_t VAR16 = -VAR17, VAR18 = VAR6->VAR18;
    int VAR19 = 0, VAR20 = VAR6->VAR20 && !VAR6->VAR21;
    FUN2(&VAR9);
    FUN3(NULL, VAR22, "");
    FUN4(VAR6, NULL, VAR22);
    if (VAR6->VAR19)
    {
        int64_t VAR23;
        if (VAR6->VAR24)
        {
            if (*VAR8 == VAR25)
            {
                FUN3(NULL, VAR26, ""
                                           "");
                VAR13 = FUN5(VAR27);
                VAR23 = *VAR8 + VAR6->VAR16;
            }
            else
            {
                VAR23 = VAR6->VAR16;
                FUN3(NULL, VAR22, "", FUN6(VAR23, &VAR28));
                if ((VAR13 = FUN7(VAR4, -1, -VAR17, VAR23, VAR17, 0)) < 0)
                {
                    FUN3(NULL, VAR26, "" VAR29 "", VAR6->VAR16, FUN8(VAR13));
                    VAR12 = FUN9();
                    while (!FUN10(VAR4, &VAR9))
                    {
                        if (VAR30[VAR9.VAR31])
                        {
                            AVRational VAR32 = VAR4->VAR33[VAR9.VAR31]->VAR34;
                            if (VAR9.VAR35 != VAR25)
                                *VAR8 = FUN11(VAR9.VAR35, VAR32, VAR28);
                            if (!VAR19 && *VAR8 != VAR25)
                            {
                                VAR16 = *VAR8;
                                VAR19 = 1;
                                if (VAR19 && !VAR20 && VAR6->VAR21)
                                {
                                    VAR18 = VAR16 + VAR6->VAR18;
                                    VAR20 = 1;
                                    if (VAR6->VAR21 && VAR6->VAR36)
                                    {
                                        if (VAR15 >= VAR6->VAR18)
                                            break;
                                    }
                                    else if (VAR20 && *VAR8 != VAR25 && *VAR8 >= VAR18)
                                    {
                                        break;
                                        VAR15++;
                                        if (VAR37)
                                        {
                                            if (VAR38)
                                                FUN12(VAR2, VAR4, &VAR9, VAR14++);
                                            VAR39[VAR9.VAR31]++;
                                            if (VAR40)
                                            {
                                                VAR10 = VAR9;
                                                while (VAR10.VAR41 && FUN13(VAR2, VAR4, VAR12, &VAR10) > 0)
                                                    ;
                                                FUN14(&VAR9);
                                                FUN2(&VAR9);
                                                VAR9.VAR42 = NULL;
                                                VAR9.VAR41 = 0;
                                                for (VAR14 = 0; VAR14 < VAR4->VAR43; VAR14++)
                                                {
                                                    VAR9.VAR31 = VAR14;
                                                    if (VAR40)
                                                        while (FUN13(VAR2, VAR4, VAR12, &VAR9) > 0)
                                                            ;
                                                VAR18:
                                                    FUN15(&VAR12);
                                                    if (VAR13 < 0)
                                                    {
                                                        FUN3(NULL, VAR26, "");
                                                        FUN4(VAR6, NULL, VAR26);
                                                        return VAR13;