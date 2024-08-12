static int FUN1(VAR1 *VAR2)
{
    uint8_t VAR3;
    uint16_t VAR4;
    uint32_t VAR5, VAR6;
    int VAR7 = VAR2->VAR8.VAR7;
    VAR3 = FUN2(&VAR2->VAR9, VAR10);
    if (!VAR3)
    {
        return 0;
    }
    if (pread(VAR7, &VAR4, sizeof(VAR4), VAR2->VAR11 + VAR3 + VAR12) != sizeof(VAR4))
    {
        return -VAR13;
    }
    if (pread(VAR7, &VAR5, sizeof(VAR5), VAR2->VAR11 + VAR3 + VAR14) != sizeof(VAR5))
    {
        return -VAR13;
    }
    if (pread(VAR7, &VAR6, sizeof(VAR6), VAR2->VAR11 + VAR3 + VAR15) != sizeof(VAR6))
    {
        return -VAR13;
    }
    VAR4 = FUN3(VAR4);
    VAR5 = FUN4(VAR5);
    VAR6 = FUN4(VAR6);
    VAR2->VAR16 = FUN5(sizeof(*(VAR2->VAR16)));
    VAR2->VAR16->VAR17 = VAR5 & VAR18;
    VAR2->VAR16->VAR19 = VAR5 & ~VAR18;
    VAR2->VAR16->VAR20 = VAR6 & VAR18;
    VAR2->VAR16->VAR21 = VAR6 & ~VAR18;
    VAR2->VAR16->VAR22 = (VAR4 & VAR23) + 1;
    if (VAR2->VAR16->VAR21 >= VAR2->VAR24[VAR2->VAR16->VAR20].VAR25.VAR26)
    {
        VAR27 *VAR9 = &VAR2->VAR9;
        uint16_t VAR28 = FUN6(VAR9->VAR29 + VAR30);
        uint16_t VAR31 = FUN6(VAR9->VAR29 + VAR32);
        if (VAR28 == VAR33 && (VAR31 & 0xff00) == 0x5800)
        {
            VAR2->VAR16->VAR21 = 0x1000;
        }
        else
        {
            FUN7(""
                         "");
            return -VAR34;
        }
    }
    FUN8(VAR2->VAR8.VAR35, VAR3, VAR2->VAR16->VAR17, VAR2->VAR16->VAR19, VAR2->VAR16->VAR22);
    return 0;
}