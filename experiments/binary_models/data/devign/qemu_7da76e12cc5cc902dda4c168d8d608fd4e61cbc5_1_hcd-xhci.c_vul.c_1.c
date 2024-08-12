static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    int VAR7 = (VAR2 - 0x20) / 0x20;
    VAR8 *VAR9 = &VAR6->VAR9[VAR7];
    FUN2(VAR2, VAR3);
    if (VAR2 < 0x20)
    {
        FUN3("", VAR2);
        return;
        switch (VAR2 & 0x1f)
        {
        case 0x00:
            if (VAR3 & VAR10)
            {
                VAR9->VAR11 &= ~VAR10;
                VAR9->VAR11 &= ~VAR12;
                VAR9->VAR11 |= VAR3 & VAR12;
                if (VAR7 == 0)
                {
                    FUN4(VAR6);
                    FUN5(VAR6, VAR7);
                    break;
                case 0x04:
                    VAR9->VAR13 = VAR3;
                    break;
                case 0x08:
                    VAR9->VAR14 = VAR3 & 0xffff;
                    break;
                case 0x10:
                    VAR9->VAR15 = VAR3 & 0xfffffff0;
                    break;
                case 0x14:
                    VAR9->VAR16 = VAR3;
                    FUN6(VAR6, VAR7);
                    break;
                case 0x18:
                    VAR9->VAR17 &= ~VAR18;
                    VAR9->VAR17 = (VAR3 & ~VAR18) | (VAR9->VAR17 & VAR18);
                    break;
                case 0x1c:
                    VAR9->VAR19 = VAR3;
                    FUN7(VAR6, VAR7);
                    break;
                default:
                    FUN3("", VAR2);