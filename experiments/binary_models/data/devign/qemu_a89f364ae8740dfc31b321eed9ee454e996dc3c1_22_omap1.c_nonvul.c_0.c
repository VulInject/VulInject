static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    struct VAR5 *VAR6 = (struct VAR5 *)VAR1;
    int VAR7 = VAR2 & VAR8;
    if (VAR4 != 1)
    {
        FUN2(VAR1, VAR2, VAR3);
        return;
    }
    switch (VAR7)
    {
    case 0x00:
        VAR6->VAR9 = VAR3 & 0x3f;
        break;
    case 0x04:
        if ((VAR3 ^ VAR6->VAR10) & 1)
        {
            if (VAR3 & 1)
                FUN3("", VAR11, (int)((FUN4(VAR6->VAR12) >> 3) / ((VAR6->VAR13 & 2) ? 1 : 154) / (2 << (VAR3 & 3)) * ((VAR3 & (1 << 2)) ? 101 : 107) * ((VAR3 & (1 << 3)) ? 49 : 55) * ((VAR3 & (1 << 4)) ? 50 : 63) * ((VAR3 & (1 << 5)) ? 80 : 127) / (107 * 55 * 63 * 127)));
            else
                FUN3("", VAR11);
        }
        VAR6->VAR10 = VAR3 & 0x7f;
        break;
    case 0x08:
        VAR6->VAR13 = VAR3 & 3;
        break;
    default:
        FUN5(VAR2);
        return;
    }
}