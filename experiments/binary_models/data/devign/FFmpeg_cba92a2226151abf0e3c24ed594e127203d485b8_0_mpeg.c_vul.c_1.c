static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR6->VAR12->VAR11;
    int VAR13, VAR14, VAR15 = 0, VAR16;
    AVPacket VAR17;
    int64_t VAR18 = VAR19;
    int VAR20 = 0;
    for (VAR16 = 0; VAR16 < VAR2->VAR21; VAR16++)
    {
        VAR8 *VAR22 = &VAR6->VAR9[VAR16];
        int64_t VAR23 = VAR22->VAR24[VAR22->VAR25].VAR26;
        if (VAR23 < VAR18)
        {
            VAR18 = VAR23;
            VAR20 = VAR16;
        }
    }
    VAR9 = &VAR6->VAR9[VAR20];
    VAR13 = FUN2(VAR9, &VAR17);
    if (VAR13 < 0)
        return VAR13;
    if (VAR9->VAR25 < VAR9->VAR27)
    {
        VAR14 = VAR9->VAR24[VAR9->VAR25].VAR28 - VAR17.VAR28;
    }
    else
    {
        int64_t VAR29 = FUN3(VAR11);
        VAR14 = VAR29 < 0 ? 0xffff : VAR29 - VAR17.VAR28;
    }
    FUN4(VAR11, VAR17.VAR28, VAR30);
    FUN5(VAR4);
    VAR4->VAR31 = 0;
    VAR4->VAR32 = NULL;
    do
    {
        int VAR33, VAR34, VAR35;
        int64_t VAR26, VAR36;
        int64_t VAR37 = FUN6(VAR11), VAR38;
        int VAR39;
        VAR13 = FUN7(VAR6->VAR12, NULL, &VAR35, &VAR26, &VAR36);
        if (VAR13 < 0)
        {
            if (VAR4->VAR31)
                break;
            goto VAR40;
        }
        VAR34 = VAR13 & 0xffff;
        VAR38 = FUN6(VAR11);
        VAR39 = VAR13 + (VAR38 - VAR37);
        if (VAR15 + VAR39 > VAR14)
            break;
        VAR15 += VAR39;
        if ((VAR35 & 0x1f) != VAR17.VAR41)
            break;
        VAR13 = FUN8(VAR4, VAR34);
        if (VAR13 < 0)
            goto VAR40;
        VAR33 = FUN9(VAR11, VAR4->VAR32 + (VAR4->VAR31 - VAR34), VAR34);
        if (VAR33 < VAR34)
            VAR4->VAR31 -= VAR34 - VAR33;
    } while (VAR15 < VAR14);
    VAR4->VAR26 = VAR4->VAR36 = VAR17.VAR26;
    VAR4->VAR28 = VAR17.VAR28;
    VAR4->VAR41 = VAR17.VAR41;
    FUN10(&VAR17);
    return 0;
VAR40:
    FUN10(VAR4);
    FUN10(&VAR17);
    return VAR13;
}