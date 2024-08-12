int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    int VAR5, VAR6, VAR7, VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    uint64_t VAR13;
    int VAR14 = -VAR15;
    int VAR16;
    hwaddr VAR17 = sizeof(*VAR12);
    VAR13 = FUN2(VAR2, VAR4);
    if (VAR13 & 3)
    {
        FUN3(VAR2, VAR18, 2);
        return -VAR19;
    }
    VAR12 = FUN4(VAR2, VAR13, &VAR17, 0);
    if (!VAR12 || VAR17 != sizeof(*VAR12))
    {
        FUN3(VAR2, VAR20, 2);
        VAR16 = -VAR19;
        goto VAR21;
    }
    if (FUN5(VAR3, &VAR8, &VAR5, &VAR6, &VAR7) || !FUN6(VAR12))
    {
        FUN3(VAR2, VAR22, 2);
        VAR16 = -VAR19;
        goto VAR21;
    }
    FUN7("", VAR5, VAR6, VAR7);
    VAR10 = FUN8(VAR8, VAR5, VAR6, VAR7);
    if (VAR10 && FUN9(VAR10))
    {
        VAR14 = FUN10(VAR10, VAR12);
    }
    switch (VAR14)
    {
    case -VAR15:
        VAR16 = 3;
        break;
    case -VAR23:
        VAR16 = 2;
        break;
    case 0:
        VAR16 = 0;
        break;
    default:
        VAR16 = 1;
        break;
    }
VAR21:
    FUN11(VAR2, VAR12, VAR17, 0);
    return VAR16;
}