void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    int VAR7 = VAR2->VAR8 & VAR9;
    int VAR10, VAR11 = VAR2->VAR12;
    VAR10 = VAR2->VAR12 != -1;
    VAR7 = VAR7 && (VAR2->VAR12 == -1);
    if (VAR6->VAR13 & (1u << VAR14))
    {
        if (VAR10 && VAR2->VAR12 != 0x1e0)
        {
            VAR2->VAR12 = 0x000;
        }
        if (VAR7 && !VAR6->VAR15)
        {
            return;
        }
    }
    VAR6->VAR15 = 0;
    if (VAR7)
    {
        VAR11 = FUN3(VAR6->VAR16, (VAR6->VAR13 >> 4) & 0xf);
        if (VAR11 == -1)
        {
            return;
        }
    }
    if (FUN4(VAR17))
    {
        const char *VAR18;
        switch (VAR2->VAR12)
        {
        case 0x0e0:
            VAR18 = "";
            break;
        case 0x040:
            VAR18 = "";
            break;
        case 0x0a0:
            VAR18 = "";
            break;
        case 0x180:
            VAR18 = "";
            break;
        case 0x1a0:
            VAR18 = "";
            break;
        case 0x800:
            VAR18 = "";
            break;
        case 0x820:
            VAR18 = "";
            break;
        case 0x100:
            VAR18 = "";
            break;
        case 0x060:
            VAR18 = "";
            break;
        case 0x0c0:
            VAR18 = "";
            break;
        case 0x120:
            VAR18 = "";
            break;
        case 0x080:
            VAR18 = "";
            break;
        case 0x160:
            VAR18 = "";
            break;
        default:
            VAR18 = VAR7 ? "" : "";
            break;
        }
        FUN5("", VAR11, VAR18);
        FUN6(VAR2, 0);
    }
    VAR6->VAR19 = FUN7(VAR6);
    VAR6->VAR20 = VAR6->VAR21;
    VAR6->VAR22 = VAR6->VAR23[15];
    VAR6->VAR13 |= (1u << VAR14) | (1u << VAR24) | (1u << VAR25);
    if (VAR6->VAR26 & (VAR27 | VAR28))
    {
        VAR6->VAR20 -= 2;
        VAR6->VAR26 &= ~(VAR27 | VAR28);
    }
    if (VAR10)
    {
        VAR6->VAR29 = VAR2->VAR12;
        switch (VAR2->VAR12)
        {
        case 0x000:
        case 0x020:
        case 0x140:
            VAR6->VAR13 &= ~(1u << VAR30);
            VAR6->VAR13 |= 0xf << 4;
            VAR6->VAR21 = 0xa0000000;
            break;
        case 0x040:
        case 0x060:
            VAR6->VAR21 = VAR6->VAR31 + 0x400;
            break;
        case 0x160:
            VAR6->VAR20 += 2;
        default:
            VAR6->VAR21 = VAR6->VAR31 + 0x100;
            break;
        }
        return;
    }
    if (VAR7)
    {
        VAR6->VAR32 = VAR11;
        VAR6->VAR21 = VAR6->VAR31 + 0x600;
        return;
    }
}