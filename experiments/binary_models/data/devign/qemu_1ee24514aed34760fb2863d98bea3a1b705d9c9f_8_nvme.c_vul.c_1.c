static void FUN1(VAR1 *VAR2, hwaddr VAR3, int VAR4)
{
    uint32_t VAR5;
    if (VAR3 & ((1 << 2) - 1))
    {
        return;
    }
    if (((VAR3 - 0x1000) >> 2) & 1)
    {
        uint16_t VAR6 = VAR4 & 0xffff;
        int VAR7;
        VAR8 *VAR9;
        VAR5 = (VAR3 - (0x1000 + (1 << 2))) >> 3;
        if (FUN2(VAR2, VAR5))
        {
            return;
        }
        VAR9 = VAR2->VAR9[VAR5];
        if (VAR6 >= VAR9->VAR10)
        {
            return;
        }
        VAR7 = FUN3(VAR9) ? 1 : 0;
        VAR9->VAR11 = VAR6;
        if (VAR7)
        {
            VAR12 *VAR13;
            FUN4(VAR13, &VAR9->VAR14, VAR15) { FUN5(VAR13->VAR16, FUN6(VAR17) + 500); }
            FUN5(VAR9->VAR16, FUN6(VAR17) + 500);
        }
        if (VAR9->VAR18 != VAR9->VAR11)
        {
            FUN7(VAR2, VAR9);
        }
    }
    else
    {
        uint16_t VAR19 = VAR4 & 0xffff;
        VAR12 *VAR13;
        VAR5 = (VAR3 - 0x1000) >> 3;
        if (FUN8(VAR2, VAR5))
        {
            return;
        }
        VAR13 = VAR2->VAR13[VAR5];
        if (VAR19 >= VAR13->VAR10)
        {
            return;
        }
        VAR13->VAR18 = VAR19;
        FUN5(VAR13->VAR16, FUN6(VAR17) + 500);
    }
}