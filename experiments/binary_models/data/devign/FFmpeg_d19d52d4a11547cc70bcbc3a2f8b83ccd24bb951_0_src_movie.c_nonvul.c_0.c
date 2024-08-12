static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5->VAR6;
    AVPacket VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11 = VAR4->VAR12->VAR13[VAR4->VAR14];
    if (VAR4->VAR15 == 1)
        return 0;
    while (1)
    {
        VAR8 = FUN2(VAR4->VAR12, &VAR7);
        if (VAR8 == VAR16)
        {
            int64_t VAR17;
            if (VAR4->VAR18 != 1)
            {
                VAR17 = VAR4->VAR19;
                if (VAR4->VAR12->VAR20 != VAR21)
                    VAR17 += VAR4->VAR12->VAR20;
                if (FUN3(VAR4->VAR12, -1, VAR17, VAR22) < 0)
                {
                    VAR4->VAR15 = 1;
                    break;
                }
                else if (VAR4->VAR18 > 1)
                    VAR4->VAR18--;
                continue;
            }
            else
            {
                VAR4->VAR15 = 1;
                break;
            }
        }
        else if (VAR8 < 0)
            break;
        if (VAR7.VAR14 == VAR4->VAR14)
        {
            FUN4(VAR4->VAR23, VAR4->VAR24, &VAR9, &VAR7);
            if (VAR9)
            {
                VAR4->VAR25 = FUN5(VAR2, VAR26 | VAR27 | VAR28, VAR2->VAR29, VAR2->VAR30);
                FUN6(VAR4->VAR25->VAR31, VAR4->VAR25->VAR32, (void *)VAR4->VAR24->VAR31, VAR4->VAR24->VAR32, VAR4->VAR25->VAR33, VAR2->VAR29, VAR2->VAR30);
                FUN7(VAR4->VAR25, VAR4->VAR24);
                VAR4->VAR25->VAR34 = VAR4->VAR24->VAR35 == VAR21 ? VAR4->VAR24->VAR36 : VAR4->VAR24->VAR35;
                if (!VAR4->VAR24->VAR37.VAR38)
                    VAR4->VAR25->VAR39->VAR37 = VAR11->VAR37;
                FUN8(VAR2->VAR5, "" VAR40 "" VAR40 "", VAR4->VAR41, VAR4->VAR25->VAR34, (double)VAR4->VAR25->VAR34 * FUN9(VAR11->VAR42), VAR4->VAR25->VAR43, VAR4->VAR25->VAR39->VAR37.VAR38, VAR4->VAR25->VAR39->VAR37.VAR44);
                FUN10(&VAR7);
                return 0;
            }
        }
        FUN10(&VAR7);
    }
    return VAR8;
}