int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12, VAR13;
    uint64_t VAR14;
    int VAR15 = -VAR16;
    int VAR17;
    hwaddr VAR18 = sizeof(*VAR12);
    VAR14 = FUN2(VAR2, VAR4);
    if (VAR14 & 3)
    {
        FUN3(VAR2, VAR19, 2);
        return -VAR20;
    }
    VAR12 = FUN4(VAR2, VAR14, &VAR18, 0);
    if (!VAR12 || VAR18 != sizeof(*VAR12))
    {
        FUN3(VAR2, VAR21, 2);
        VAR17 = -VAR20;
        goto VAR22;
    }
    FUN5(&VAR13, VAR12);
    if (FUN6(VAR3, &VAR8, &VAR5, &VAR6, &VAR7) || !FUN7(&VAR13))
    {
        FUN3(VAR2, VAR23, 2);
        VAR17 = -VAR20;
        goto VAR22;
    }
    FUN8("", VAR5, VAR6, VAR7);
    VAR10 = FUN9(VAR8, VAR5, VAR6, VAR7);
    if (VAR10 && FUN10(VAR10))
    {
        VAR15 = FUN11(VAR10, &VAR13);
    }
    switch (VAR15)
    {
    case -VAR16:
        VAR17 = 3;
        break;
    case -VAR24:
        VAR17 = 2;
        break;
    case 0:
        VAR17 = 0;
        break;
    default:
        VAR17 = 1;
        break;
    }
VAR22:
    FUN12(VAR2, VAR12, VAR18, 0);
    return VAR17;
}