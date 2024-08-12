void FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    ORB VAR11, VAR12;
    uint64_t VAR13;
    int VAR14 = -VAR15;
    int VAR16;
    VAR17 *VAR18 = &VAR2->VAR18;
    uint8_t VAR19;
    VAR13 = FUN2(VAR18, VAR4, &VAR19);
    if (VAR13 & 3)
    {
        FUN3(VAR18, VAR20, 4);
        return;
    }
    if (FUN4(VAR2, VAR13, VAR19, &VAR11, sizeof(VAR12)))
    {
        return;
    }
    FUN5(&VAR12, &VAR11);
    if (FUN6(VAR3, &VAR8, &VAR5, &VAR6, &VAR7) || !FUN7(&VAR12))
    {
        FUN3(VAR18, VAR21, 4);
        return;
    }
    FUN8("", VAR5, VAR6, VAR7);
    VAR10 = FUN9(VAR8, VAR5, VAR6, VAR7);
    if (VAR10 && FUN10(VAR10))
    {
        VAR14 = FUN11(VAR10, &VAR12);
    }
    switch (VAR14)
    {
    case -VAR15:
        VAR16 = 3;
        break;
    case -VAR22:
        VAR16 = 2;
        break;
    case -VAR23:
        FUN3(VAR18, VAR24, 4);
        return;
    case 0:
        VAR16 = 0;
        break;
    default:
        VAR16 = 1;
        break;
    }
    FUN12(VAR2, VAR16);
}