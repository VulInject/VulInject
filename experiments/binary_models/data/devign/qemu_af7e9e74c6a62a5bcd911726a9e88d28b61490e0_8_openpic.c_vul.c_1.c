static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    int VAR9;
    FUN2("" VAR10 "", VAR11, VAR2, VAR3);
    if (VAR2 & 0xF)
        return;
    switch (VAR2)
    {
    case 0x00:
        break;
    case 0x40:
    case 0x50:
    case 0x60:
    case 0x70:
    case 0x80:
    case 0x90:
    case 0xA0:
    case 0xB0:
        FUN3(VAR6, VAR2, VAR3, FUN4());
        break;
    case 0x1000:
        break;
    case 0x1020:
        if (VAR3 & VAR12)
        {
            FUN5(&VAR6->VAR13.VAR14);
        }
        break;
    case 0x1080:
        break;
    case 0x1090:
        for (VAR9 = 0; VAR9 < VAR6->VAR15; VAR9++)
        {
            if ((VAR3 & (1 << VAR9)) && !(VAR6->VAR16 & (1 << VAR9)))
            {
                FUN2("", VAR9);
                VAR8 = &VAR6->VAR8[VAR9];
                FUN6(VAR8->VAR17[VAR18]);
            }
            else if (!(VAR3 & (1 << VAR9)) && (VAR6->VAR16 & (1 << VAR9)))
            {
                FUN2("", VAR9);
                VAR8 = &VAR6->VAR8[VAR9];
                FUN7(VAR8->VAR17[VAR18]);
            }
        }
        VAR6->VAR16 = VAR3;
        break;
    case 0x10A0:
    case 0x10B0:
    case 0x10C0:
    case 0x10D0:
    {
        int VAR9;
        VAR9 = (VAR2 - 0x10A0) >> 4;
        FUN8(VAR6, VAR6->VAR19 + VAR9, VAR3);
    }
    break;
    case 0x10E0:
        VAR6->VAR20 = VAR3 & VAR6->VAR21;
        break;
    default:
        break;
    }
}