void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    SCHIB VAR11;
    uint64_t VAR12;
    int VAR13 = -VAR14;
    int VAR15;
    VAR16 *VAR17 = &VAR2->VAR17;
    uint8_t VAR18;
    VAR12 = FUN2(VAR17, VAR4, &VAR18);
    if (VAR12 & 3)
    {
        FUN3(VAR17, VAR19, 4);
        return;
    }
    if (FUN4(VAR2, VAR12, VAR18, &VAR11, sizeof(VAR11)))
    {
        return;
    }
    if (FUN5(VAR3, &VAR8, &VAR5, &VAR6, &VAR7) || !FUN6(&VAR11))
    {
        FUN3(VAR17, VAR20, 4);
        return;
    }
    FUN7("", VAR5, VAR6, VAR7);
    VAR10 = FUN8(VAR8, VAR5, VAR6, VAR7);
    if (VAR10 && FUN9(VAR10))
    {
        VAR13 = FUN10(VAR10, &VAR11);
    }
    switch (VAR13)
    {
    case -VAR14:
        VAR15 = 3;
        break;
    case -VAR21:
        VAR15 = 2;
        break;
    case 0:
        VAR15 = 0;
        break;
    default:
        VAR15 = 1;
        break;
    }
    FUN11(VAR2, VAR15);
}