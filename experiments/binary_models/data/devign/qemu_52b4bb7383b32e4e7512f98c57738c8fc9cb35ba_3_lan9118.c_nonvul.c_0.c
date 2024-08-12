static void FUN1(VAR1 *VAR2, int VAR3, uint32_t VAR4)
{
    switch (VAR3)
    {
    case VAR5:
        if ((VAR2->VAR6 & VAR7) != 0 && (VAR4 & VAR7) == 0)
        {
            VAR2->VAR8 |= VAR9;
        }
        VAR2->VAR6 = VAR4 & ~VAR10;
        FUN2("", VAR4);
        break;
    case VAR11:
        VAR2->VAR12.VAR13.VAR14[4] = VAR4 & 0xff;
        VAR2->VAR12.VAR13.VAR14[5] = (VAR4 >> 8) & 0xff;
        FUN3(VAR2);
        break;
    case VAR15:
        VAR2->VAR12.VAR13.VAR14[0] = VAR4 & 0xff;
        VAR2->VAR12.VAR13.VAR14[1] = (VAR4 >> 8) & 0xff;
        VAR2->VAR12.VAR13.VAR14[2] = (VAR4 >> 16) & 0xff;
        VAR2->VAR12.VAR13.VAR14[3] = (VAR4 >> 24) & 0xff;
        FUN3(VAR2);
        break;
    case VAR16:
        VAR2->VAR17 = VAR4;
        break;
    case VAR18:
        VAR2->VAR19 = VAR4;
        break;
    case VAR20:
        VAR2->VAR21 = VAR4 & 0xffc2;
        if (VAR4 & 2)
        {
            FUN2("", (VAR4 >> 6) & 0x1f, VAR2->VAR22);
            FUN4(VAR2, (VAR4 >> 6) & 0x1f, VAR2->VAR22);
        }
        else
        {
            VAR2->VAR22 = FUN5(VAR2, (VAR4 >> 6) & 0x1f);
            FUN2("", (VAR4 >> 6) & 0x1f, VAR2->VAR22);
        }
        break;
    case VAR23:
        VAR2->VAR22 = VAR4 & 0xffff;
        break;
    case VAR24:
        VAR2->VAR25 = VAR4 & 0xffff0000;
        break;
    case VAR26:
        break;
    default:
        FUN6(VAR27, "", VAR2->VAR28 & 0xf, VAR4);
    }
}