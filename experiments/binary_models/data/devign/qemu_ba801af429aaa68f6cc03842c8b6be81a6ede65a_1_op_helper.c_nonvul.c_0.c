void FUN1(VAR1 *VAR2, target_ulong VAR3, uint32_t VAR4, uint32_t VAR5)
{
    switch (VAR4)
    {
    case 1:
        if (!((VAR2->VAR6.VAR7 & (1 << VAR8)) && (VAR5 == 0)))
        {
            return;
        }
        if (VAR2->VAR9 & (1 << VAR10))
        {
            VAR2->VAR11 &= ~(1 << VAR12);
            FUN2(VAR2);
        }
        else
        {
            FUN3(VAR2, VAR13);
        }
        break;
    case 4:
        if (!((VAR2->VAR6.VAR7 & (1 << VAR8)) && (VAR5 == 0)))
        {
            return;
        }
        if (VAR2->VAR9 & (1 << VAR10))
        {
            VAR2->VAR11 |= (1 << VAR12);
            FUN2(VAR2);
        }
        else
        {
            FUN3(VAR2, VAR13);
        }
        break;
    case 25:
        if ((VAR2->VAR14 & VAR15) || (VAR3 & 0xffffff00))
        {
            return;
        }
        VAR2->VAR6.VAR16 = (VAR2->VAR6.VAR16 & 0x017fffff) | ((VAR3 & 0xfe) << 24) | ((VAR3 & 0x1) << 23);
        break;
    case 26:
        if (VAR3 & 0x007c0000)
            return;
        VAR2->VAR6.VAR16 = (VAR2->VAR6.VAR16 & 0xfffc0f83) | (VAR3 & 0x0003f07c);
        break;
    case 28:
        if (VAR3 & 0x007c0000)
            return;
        VAR2->VAR6.VAR16 = (VAR2->VAR6.VAR16 & 0xfefff07c) | (VAR3 & 0x00000f83) | ((VAR3 & 0x4) << 22);
        break;
    case 31:
        if (VAR2->VAR14 & VAR15)
        {
            uint32_t VAR17 = 0xfefc0000;
            VAR2->VAR6.VAR16 = (VAR3 & ~VAR17) | (VAR2->VAR6.VAR16 & VAR17);
        }
        else if (!(VAR3 & 0x007c0000))
        {
            VAR2->VAR6.VAR16 = VAR3;
        }
        break;
    default:
        return;
    }
    FUN4(VAR2);
    FUN5(VAR2);
    FUN6(0, &VAR2->VAR6.VAR18);
    if ((FUN7(VAR2->VAR6.VAR16) | 0x20) & FUN8(VAR2->VAR6.VAR16))
        FUN9(VAR2, VAR19, FUN10());
}