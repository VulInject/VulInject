static VAR1 FUN1(VAR2 *VAR3, int32_t VAR4)
{
    VAR5 *VAR6 = FUN2(VAR5, VAR3, VAR3);
    VAR7 *VAR8 = FUN3(VAR6);
    VAR9 *VAR10 = FUN4(VAR6->VAR10);
    struct
    {
        uint32_t VAR11;
        uint32_t VAR12;
    } VAR13;
    int VAR14, VAR15;
    FUN5(&VAR8->VAR16, VAR10, VAR8->VAR17 / (VAR18 / 512) + 1);
    VAR8->VAR19 = 0;
    for (;;)
    {
        if (VAR6->VAR20 == 0)
        {
            if (VAR6->VAR21 || (VAR6->VAR22 - VAR6->VAR11) >= VAR18)
            {
                return VAR8->VAR16.VAR12;
            }
            FUN6(VAR10, VAR6->VAR22, &VAR13, 8);
            VAR6->VAR22 += 8;
            VAR13.VAR11 = FUN7(VAR13.VAR11);
            VAR13.VAR12 = FUN7(VAR13.VAR12);
            VAR15 = VAR13.VAR12 & 0xfffe;
            if (VAR15 == 0)
                VAR15 = 0x10000;
            VAR6->VAR20 = VAR15;
            VAR6->VAR23 = VAR13.VAR11;
            VAR6->VAR21 = (VAR13.VAR12 & 0x80000000);
        }
        VAR14 = VAR6->VAR20;
        if (VAR14 > 0)
        {
            uint64_t VAR24;
            VAR24 = FUN8(VAR4 - VAR8->VAR16.VAR12, VAR6->VAR20);
            if (VAR24)
            {
                FUN9(&VAR8->VAR16, VAR6->VAR23, VAR24);
            }
            if (VAR8->VAR16.VAR12 > VAR25)
            {
                FUN10("");
                break;
            }
            VAR6->VAR23 += VAR14;
            VAR6->VAR20 -= VAR14;
            VAR8->VAR19 += VAR14;
        }
    }
    FUN11(&VAR8->VAR16);
    VAR8->VAR19 = 0;
    return -1;
}