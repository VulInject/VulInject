FUN1(VAR1 *VAR2)
{
    struct Vmxnet3_RxDesc VAR3;
    bool VAR4 = true;
    uint32_t VAR5;
    uint32_t VAR6;
    struct Vmxnet3_RxCompDesc VAR7;
    uint32_t VAR8 = VAR9;
    hwaddr VAR10 = 0;
    hwaddr VAR11 = 0;
    struct VAR12 *VAR13 = FUN2(VAR2->VAR14);
    size_t VAR15 = 0;
    size_t VAR16 = FUN3(VAR2->VAR14);
    uint16_t VAR17 = 0;
    size_t VAR18;
    FUN4(VAR2->VAR14);
    while (VAR16 > 0)
    {
        if (VAR17 == VAR2->VAR19)
        {
            break;
        }
        VAR10 = FUN5(VAR2, VAR20, &VAR8);
        if (!VAR10)
        {
            break;
        }
        if (!FUN6(VAR2, VAR4, &VAR3, &VAR5, &VAR6))
        {
            break;
        }
        VAR18 = FUN7(VAR16, VAR3.VAR21);
        FUN8(VAR13, VAR15, FUN9(VAR3.VAR22), VAR18);
        VAR15 += VAR18;
        VAR16 -= VAR18;
        FUN10(&VAR3);
        if (0 != VAR11)
        {
            FUN11(VAR11, &VAR7, sizeof(VAR7));
        }
        memset(&VAR7, 0, sizeof(struct VAR23));
        VAR7.VAR24 = VAR5;
        VAR7.VAR21 = VAR18;
        VAR7.VAR25 = VAR4;
        VAR7.VAR26 = VAR8;
        VAR7.VAR27 = VAR20 + VAR6 * VAR2->VAR28;
        if (0 == VAR16)
        {
            FUN12(VAR2->VAR14, &VAR7);
        }
        FUN13(""
                  "",
                  (unsigned long)VAR6, (unsigned long)VAR7.VAR24, (unsigned long)VAR7.VAR21, (int)VAR7.VAR25, (unsigned long)VAR7.VAR29);
        VAR4 = false;
        VAR11 = VAR10;
        VAR10 = 0;
    }
    if (0 != VAR11)
    {
        VAR7.VAR30 = 1;
        VAR7.VAR31 = (0 != VAR16);
        FUN11(VAR11, &VAR7, sizeof(VAR7));
        FUN14();
    }
    if (0 != VAR10)
    {
        FUN15(VAR2, VAR20);
    }
    FUN16(VAR2, VAR2->VAR32[VAR20].VAR33);
    if (VAR16 == 0)
    {
        FUN17(VAR2, VAR20, VAR34);
        return true;
    }
    else if (VAR17 == VAR2->VAR19)
    {
        FUN17(VAR2, VAR20, VAR35);
        return false;
    }
    else
    {
        FUN17(VAR2, VAR20, VAR36);
        return false;
    }
}