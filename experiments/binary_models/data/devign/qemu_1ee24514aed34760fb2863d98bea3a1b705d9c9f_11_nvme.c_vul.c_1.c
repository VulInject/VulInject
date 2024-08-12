static void FUN1(VAR1 *VAR2, hwaddr VAR3, uint64_t VAR4, unsigned VAR5)
{
    switch (VAR3)
    {
    case 0xc:
        VAR2->VAR6.VAR7 |= VAR4 & 0xffffffff;
        VAR2->VAR6.VAR8 = VAR2->VAR6.VAR7;
        break;
    case 0x10:
        VAR2->VAR6.VAR7 &= ~(VAR4 & 0xffffffff);
        VAR2->VAR6.VAR8 = VAR2->VAR6.VAR7;
        break;
    case 0x14:
        if (!FUN2(VAR4) && !FUN2(VAR2->VAR6.VAR9) && !FUN3(VAR4) && !FUN3(VAR2->VAR6.VAR9))
        {
            VAR2->VAR6.VAR9 = VAR4;
        }
        if (FUN2(VAR4) && !FUN2(VAR2->VAR6.VAR9))
        {
            VAR2->VAR6.VAR9 = VAR4;
            if (FUN4(VAR2))
            {
                VAR2->VAR6.VAR10 = VAR11;
            }
            else
            {
                VAR2->VAR6.VAR10 = VAR12;
            }
        }
        else if (!FUN2(VAR4) && FUN2(VAR2->VAR6.VAR9))
        {
            FUN5(VAR2);
            VAR2->VAR6.VAR10 &= ~VAR12;
        }
        if (FUN3(VAR4) && !(FUN3(VAR2->VAR6.VAR9)))
        {
            FUN5(VAR2);
            VAR2->VAR6.VAR9 = VAR4;
            VAR2->VAR6.VAR10 |= VAR13;
        }
        else if (!FUN3(VAR4) && FUN3(VAR2->VAR6.VAR9))
        {
            VAR2->VAR6.VAR10 &= ~VAR13;
            VAR2->VAR6.VAR9 = VAR4;
        }
        break;
    case 0x24:
        VAR2->VAR6.VAR14 = VAR4 & 0xffffffff;
        break;
    case 0x28:
        VAR2->VAR6.VAR15 = VAR4;
        break;
    case 0x2c:
        VAR2->VAR6.VAR15 |= VAR4 << 32;
        break;
    case 0x30:
        VAR2->VAR6.VAR16 = VAR4;
        break;
    case 0x34:
        VAR2->VAR6.VAR16 |= VAR4 << 32;
        break;
    default:
        break;
    }
}