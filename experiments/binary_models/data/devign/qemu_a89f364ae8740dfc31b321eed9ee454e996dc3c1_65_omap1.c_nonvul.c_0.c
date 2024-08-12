static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    uint16_t VAR7;
    omap_clk VAR8;
    static const char *VAR9[8] = {
        "",
        "",
        "",
        "",
        "",
        "",
        "",
        "",
    };
    if (VAR4 != 2)
    {
        FUN2(VAR1, VAR2, VAR3);
        return;
    }
    switch (VAR2)
    {
    case 0x00:
        VAR7 = VAR6->VAR10.VAR11 ^ VAR3;
        VAR6->VAR10.VAR11 = VAR3 & 0x7fff;
        FUN3(VAR6, VAR7, VAR3);
        return;
    case 0x04:
        VAR7 = VAR6->VAR10.VAR12 ^ VAR3;
        VAR6->VAR10.VAR12 = VAR3 & 0x0fff;
        FUN4(VAR6, VAR7, VAR3);
        return;
    case 0x08:
        VAR7 = VAR6->VAR10.VAR13 ^ VAR3;
        VAR6->VAR10.VAR13 = VAR3 & 0x07ff;
        FUN5(VAR6, VAR7, VAR3);
        return;
    case 0x0c:
        VAR6->VAR10.VAR14 = VAR3 & 0x003f;
        return;
    case 0x10:
        VAR7 = VAR6->VAR10.VAR15 ^ VAR3;
        VAR6->VAR10.VAR15 = VAR3 & 0x0007;
        if (VAR3 & 9)
        {
            FUN6(VAR16);
            VAR6->VAR10.VAR17 = 0xa;
        }
        if (VAR7 & ~VAR3 & 4)
        {
            FUN7(VAR6);
            FUN8(VAR6->VAR18);
            FUN8(VAR6->VAR19);
        }
        if (VAR7 & 2)
        {
            VAR8 = FUN9(VAR6, "");
            FUN10(VAR8, (~VAR3 >> 1) & 1);
        }
        return;
    case 0x14:
        VAR6->VAR10.VAR20 = VAR3 & 0x0001;
        return;
    case 0x18:
        if ((VAR6->VAR10.VAR21 ^ (VAR3 >> 11)) & 7)
        {
            VAR6->VAR10.VAR21 = (VAR3 >> 11) & 7;
            FUN11("", VAR22, VAR9[VAR6->VAR10.VAR21]);
        }
        VAR6->VAR10.VAR17 &= VAR3 & 0x3f;
        return;
    case 0x1c:
        VAR7 = VAR6->VAR10.VAR23 ^ VAR3;
        VAR6->VAR10.VAR23 = VAR3 & 0x003f;
        FUN12(VAR6, VAR7, VAR3);
        return;
    case 0x20:
    default:
        FUN13(VAR2);
    }
}