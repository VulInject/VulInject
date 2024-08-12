static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    AVPacket VAR7 = {0};
    const VAR8 *VAR9 = VAR10;
    enum AVCodecID VAR11 = VAR12;
    char VAR13[64];
    VAR14 *VAR15 = NULL;
    VAR16 *VAR17 = NULL;
    int VAR18, VAR19, VAR20, VAR21;
    VAR22 *VAR23;
    if (VAR3 < 1 + 4 + 2 + 2)
    {
        FUN2(VAR2, VAR24, "", VAR3);
        return VAR25;
    }
    VAR19 = FUN3(VAR2->VAR26);
    VAR3--;
    if (VAR19 >= FUN4(VAR27) || VAR19 < 0)
    {
        FUN2(VAR2, VAR28, "", VAR19);
        VAR19 = 0;
    }
    VAR20 = FUN5(VAR2->VAR26);
    VAR3 -= 4;
    VAR3 -= FUN6(VAR2->VAR26, VAR3, VAR13, sizeof(VAR13));
    while (VAR9->VAR11 != VAR12)
    {
        if (!FUN7(VAR9->VAR29, VAR13, sizeof(VAR13)))
        {
            VAR11 = VAR9->VAR11;
            break;
        }
        VAR9++;
    }
    if (VAR11 == VAR12)
    {
        FUN2(VAR2, VAR24, "", VAR13);
        return 0;
    }
    if (VAR20 >= VAR3)
    {
        FUN2(VAR2, VAR24, "", VAR20, VAR3);
        return VAR25;
    }
    VAR21 = (VAR3 - VAR20) * 2 + 1;
    VAR15 = FUN8(VAR21);
    if (!VAR15)
        return FUN9(VAR30);
    VAR3 -= FUN6(VAR2->VAR26, VAR3 - VAR20, VAR15, VAR21);
    VAR18 = FUN10(VAR2->VAR26, &VAR7, VAR20);
    if (VAR18 < 0)
        goto VAR31;
    VAR17 = FUN11(VAR2, NULL);
    if (!VAR17)
    {
        VAR18 = FUN9(VAR30);
        goto VAR31;
    }
    VAR5->VAR23[VAR5->VAR32] = FUN12(sizeof(*VAR23));
    VAR23 = VAR5->VAR23[VAR5->VAR32];
    if (!VAR23)
        return FUN9(VAR30);
    VAR17->VAR33 |= VAR34;
    VAR17->VAR35->VAR36 = VAR23->VAR19 = VAR37;
    VAR17->VAR35->VAR38 = VAR11;
    VAR17->VAR39 = VAR7;
    VAR17->VAR39.VAR40 = VAR23->VAR41 = VAR17->VAR41;
    VAR17->VAR39.VAR42 |= VAR43;
    VAR5->VAR32++;
    if (*VAR15)
    {
        if (FUN13(&VAR17->VAR44, "", VAR15, VAR45) < 0)
            FUN2(VAR2, VAR28, "");
    }
    else
        FUN14(&VAR15);
    if (FUN13(&VAR17->VAR44, "", VAR27[VAR19], 0) < 0)
        FUN2(VAR2, VAR28, "");
    return 0;
VAR31:
    FUN14(&VAR15);
    FUN15(&VAR7);
    return VAR18;
}