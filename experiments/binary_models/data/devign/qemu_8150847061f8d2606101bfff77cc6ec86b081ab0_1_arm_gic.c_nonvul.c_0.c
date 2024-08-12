static VAR1 FUN1(VAR2 *VAR3, int VAR4, int VAR5, uint32_t VAR6, MemTxAttrs VAR7)
{
    switch (VAR5)
    {
    case 0x00:
        FUN2(VAR3, VAR4, VAR6, VAR7);
        break;
    case 0x04:
        FUN3(VAR3, VAR4, VAR6, VAR7);
        break;
    case 0x08:
        if (VAR3->VAR8 && !VAR7.VAR9)
        {
            VAR3->VAR10[VAR4] = FUN4(VAR6 & 0x7, VAR11);
        }
        else
        {
            VAR3->VAR12[VAR4] = FUN4(VAR6 & 0x7, VAR13);
        }
        break;
    case 0x10:
        FUN5(VAR3, VAR4, VAR6 & 0x3ff);
        return VAR14;
    case 0x1c:
        if (!FUN6(VAR3) || (VAR3->VAR8 && !VAR7.VAR9))
        {
            return VAR14;
        }
        else
        {
            VAR3->VAR10[VAR4] = FUN4(VAR6 & 0x7, VAR11);
        }
        break;
    case 0xd0:
    case 0xd4:
    case 0xd8:
    case 0xdc:
        FUN7(VAR15, "");
        break;
    default:
        FUN7(VAR16, "", (int)VAR5);
        return VAR17;
    }
    FUN8(VAR3);
    return VAR14;
}