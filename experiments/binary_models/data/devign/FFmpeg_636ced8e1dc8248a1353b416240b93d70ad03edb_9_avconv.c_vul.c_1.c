static void FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR9[VAR4->VAR10];
    int64_t VAR11 = FUN2(VAR8->VAR12, VAR13, VAR4->VAR14->VAR15);
    AVPacket VAR16;
    FUN3(&VAR16);
    if ((!VAR4->VAR17 && !(VAR6->VAR18 & VAR19)) && !VAR4->VAR20)
        return;
    if (VAR8->VAR21 != VAR22 && VAR2->VAR23 >= VAR8->VAR21 + VAR8->VAR12)
    {
        VAR4->VAR24 = 1;
        return;
    }
    if (VAR4->VAR14->VAR25->VAR26 == VAR27)
        VAR28 += VAR6->VAR29;
    else if (VAR4->VAR14->VAR25->VAR26 == VAR30)
    {
        VAR31 += VAR6->VAR29;
        VAR4->VAR32++;
    }
    if (VAR6->VAR33 != VAR34)
        VAR16.VAR33 = FUN2(VAR6->VAR33, VAR2->VAR14->VAR15, VAR4->VAR14->VAR15) - VAR11;
    else
        VAR16.VAR33 = VAR34;
    if (VAR6->VAR35 == VAR34)
        VAR16.VAR35 = FUN2(VAR2->VAR23, VAR13, VAR4->VAR14->VAR15);
    else
        VAR16.VAR35 = FUN2(VAR6->VAR35, VAR2->VAR14->VAR15, VAR4->VAR14->VAR15);
    VAR16.VAR35 -= VAR11;
    VAR16.VAR36 = FUN2(VAR6->VAR36, VAR2->VAR14->VAR15, VAR4->VAR14->VAR15);
    VAR16.VAR18 = VAR6->VAR18;
    if (VAR4->VAR14->VAR25->VAR37 != VAR38 && VAR4->VAR14->VAR25->VAR37 != VAR39 && VAR4->VAR14->VAR25->VAR37 != VAR40 && VAR4->VAR14->VAR25->VAR37 != VAR41)
    {
        if (FUN4(VAR2->VAR14->VAR42, VAR4->VAR14->VAR25, &VAR16.VAR43, &VAR16.VAR29, VAR6->VAR43, VAR6->VAR29, VAR6->VAR18 & VAR19))
        {
            VAR16.VAR44 = FUN5(VAR16.VAR43, VAR16.VAR29, VAR45, NULL, 0);
            if (!VAR16.VAR44)
                FUN6(1);
        }
    }
    else
    {
        VAR16.VAR43 = VAR6->VAR43;
        VAR16.VAR29 = VAR6->VAR29;
    }
    FUN7(VAR8->VAR46, &VAR16, VAR4);
    VAR4->VAR14->VAR25->VAR17++;
}