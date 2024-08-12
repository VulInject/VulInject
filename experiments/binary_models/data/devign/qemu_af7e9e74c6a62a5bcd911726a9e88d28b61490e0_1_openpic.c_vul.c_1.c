static void FUN1(void *VAR1, hwaddr VAR2, uint32_t VAR3, int VAR4)
{
    VAR5 *VAR6 = VAR1;
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11, VAR12;
    FUN2("" VAR13 "", VAR14, VAR4, VAR2, VAR3);
    if (VAR4 < 0)
    {
        return;
    }
    if (VAR2 & 0xF)
        return;
    VAR10 = &VAR6->VAR10[VAR4];
    VAR2 &= 0xFF0;
    switch (VAR2)
    {
    case 0x40:
    case 0x50:
    case 0x60:
    case 0x70:
        VAR4 = (VAR2 - 0x40) >> 4;
        FUN3(VAR6, VAR6->VAR15 + VAR4, VAR6->VAR8[VAR6->VAR15 + VAR4].VAR16 | VAR3);
        FUN4(VAR6, VAR6->VAR15 + VAR4, 1);
        FUN4(VAR6, VAR6->VAR15 + VAR4, 0);
        break;
    case 0x80:
        VAR10->VAR17 = VAR3 & 0x0000000F;
        break;
    case 0x90:
        break;
    case 0xA0:
        break;
    case 0xB0:
        FUN2("");
        VAR11 = FUN5(VAR6, &VAR10->VAR18);
        FUN6(&VAR10->VAR18, VAR11);
        VAR10->VAR18.VAR19 = -1;
        VAR11 = FUN5(VAR6, &VAR10->VAR18);
        VAR12 = FUN5(VAR6, &VAR10->VAR20);
        VAR8 = &VAR6->VAR8[VAR12];
        if (VAR12 != -1 && (VAR11 == -1 || FUN7(VAR8->VAR21) > VAR10->VAR18.VAR22))
        {
            FUN2("", VAR4, VAR12);
            FUN8(VAR6, VAR4, VAR8);
        }
        break;
    default:
        break;
    }
}