static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOV_atom_t VAR5)
{
    uint64_t VAR6 = FUN2(VAR4) + VAR5.VAR7;
    while (FUN2(VAR4) + 8 < VAR6)
    {
        uint32_t VAR8 = FUN3(VAR4);
        uint32_t VAR9 = FUN4(VAR4);
        uint64_t VAR10 = FUN2(VAR4) + VAR8 - 8;
        if (VAR8 < 8 || VAR10 > VAR6)
            break;
        switch (VAR9)
        {
        case FUN5(0xa9, '', '', ''):
            FUN6(VAR4, VAR2->VAR11->VAR12, sizeof(VAR2->VAR11->VAR12));
            break;
        case FUN5(0xa9, '', '', ''):
            FUN6(VAR4, VAR2->VAR11->VAR13, sizeof(VAR2->VAR11->VAR13));
            break;
        case FUN5(0xa9, '', '', ''):
            FUN6(VAR4, VAR2->VAR11->VAR14, sizeof(VAR2->VAR11->VAR14));
            break;
        case FUN5(0xa9, '', '', ''):
            FUN6(VAR4, VAR2->VAR11->VAR15, sizeof(VAR2->VAR11->VAR15));
            break;
        default:
            break;
        }
        FUN7(VAR4, VAR10, VAR16);
    }
    return 0;
}