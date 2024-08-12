static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5, VAR6 *VAR7, MemTxAttrs VAR8)
{
    switch (VAR5)
    {
    case 0x00:
        *VAR7 = FUN2(VAR3, VAR4, VAR8);
        break;
    case 0x04:
        *VAR7 = VAR3->VAR9[VAR4];
        break;
    case 0x08:
        if (VAR3->VAR10 && !VAR8.VAR11)
        {
            *VAR7 = VAR3->VAR12[VAR4];
        }
        else
        {
            *VAR7 = VAR3->VAR13[VAR4];
        }
        break;
    case 0x0c:
        *VAR7 = FUN3(VAR3, VAR4);
        break;
    case 0x14:
        *VAR7 = VAR3->VAR14[VAR4];
        break;
    case 0x18:
        *VAR7 = VAR3->VAR15[VAR4];
        break;
    case 0x1c:
        if (!FUN4(VAR3) || (VAR3->VAR10 && !VAR8.VAR11))
        {
            *VAR7 = 0;
        }
        else
        {
            *VAR7 = VAR3->VAR12[VAR4];
        }
        break;
    case 0xd0:
    case 0xd4:
    case 0xd8:
    case 0xdc:
        *VAR7 = VAR3->VAR16[(VAR5 - 0xd0) / 4][VAR4];
        break;
    default:
        FUN5(VAR17, "", (int)VAR5);
        return VAR18;
    }
    return VAR19;
}