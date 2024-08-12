int FUN1(VAR1 *VAR2, uint64_t VAR3, uint32_t VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    int VAR7, VAR8, VAR9, VAR10;
    VAR11 *VAR12;
    IRB VAR13;
    uint64_t VAR14;
    int VAR15, VAR16;
    uint8_t VAR17;
    if (FUN2(VAR3, &VAR10, &VAR7, &VAR8, &VAR9))
    {
        FUN3(VAR6, VAR18, 4);
        return -VAR19;
    }
    FUN4("", VAR7, VAR8, VAR9);
    VAR14 = FUN5(VAR6, VAR4, &VAR17);
    if (VAR14 & 3)
    {
        FUN3(VAR6, VAR20, 4);
        return -VAR19;
    }
    VAR12 = FUN6(VAR10, VAR7, VAR8, VAR9);
    if (VAR12 && FUN7(VAR12))
    {
        VAR15 = FUN8(VAR12, &VAR13, &VAR16);
    }
    else
    {
        VAR15 = 3;
    }
    if (VAR15 != 3)
    {
        if (FUN9(VAR2, VAR14, VAR17, &VAR13, VAR16) != 0)
        {
            return -VAR21;
        }
        FUN10(VAR12);
    }
    else
    {
        VAR16 = sizeof(VAR13) - sizeof(VAR13.VAR22);
        if (FUN11(VAR2, VAR14, VAR17, VAR16) != 0)
        {
            return -VAR21;
        }
    }
    FUN12(VAR2, VAR15);
    return 0;
}