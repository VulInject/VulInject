static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR6->VAR9;
    VAR10 *VAR11 = VAR6->VAR12->VAR13;
    int VAR14;
    if ((VAR11->VAR15 == VAR16 && VAR17 == VAR18) || (VAR11->VAR15 == VAR19 && VAR20 < 0))
        VAR4->VAR21 = VAR4->VAR22 = VAR23;
    if (VAR11->VAR15 == VAR19 && VAR4->VAR22 != VAR23)
    {
        int64_t VAR24 = VAR6->VAR12->VAR25 + !(VAR2->VAR26->VAR27 & VAR28);
        if (VAR6->VAR12->VAR25 && VAR6->VAR12->VAR25 != VAR23 && VAR24 > VAR4->VAR22)
        {
            FUN2(VAR2, VAR24 - VAR4->VAR22 > 2 ? VAR29 : VAR30, "" VAR31 "" VAR31 "", VAR4->VAR22, VAR24);
            VAR4->VAR21 = VAR4->VAR22 = VAR24;
            if (!(VAR11->VAR15 == VAR16 && VAR11->VAR13))
            {
                if (VAR6->VAR32 >= VAR6->VAR33)
                {
                    FUN3(VAR4);
                    return;
                    VAR6->VAR32++;
                    while (VAR8)
                    {
                        AVPacket VAR34 = *VAR4;
                        int VAR35 = FUN4(VAR8, VAR11, NULL, &VAR34.VAR36, &VAR34.VAR37, VAR4->VAR36, VAR4->VAR37, VAR4->VAR27 & VAR38);
                        if (VAR35 > 0)
                        {
                            FUN3(VAR4);
                            VAR34.VAR39 = VAR40;
                        }
                        else if (VAR35 < 0)
                        {
                            FUN2(NULL, VAR41, "", VAR8->VAR42->VAR43, VAR4->VAR44, VAR11->VAR13 ? VAR11->VAR13->VAR43 : "");
                            FUN5("", VAR35);
                            if (VAR45)
                                FUN6(1);
                            *VAR4 = VAR34;
                            VAR8 = VAR8->VAR46;
                            VAR4->VAR44 = VAR6->VAR47;
                            VAR14 = FUN7(VAR2, VAR4);
                            if (VAR14 < 0)
                            {
                                FUN5("", VAR14);
                                FUN6(1);