static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    char *VAR6 = NULL;
    int VAR7;
    uint16_t VAR8;
    if (VAR2->VAR9)
    {
        int VAR10 = FUN2(VAR4);
        int VAR11 = FUN3(VAR4);
        if (VAR11 == FUN4('', '', '', ''))
        {
            FUN2(VAR4);
            FUN2(VAR4);
            VAR8 = VAR10 - 16;
            VAR5.VAR7 -= 16;
        }
        else
            return 0;
    }
    else
    {
        VAR8 = FUN5(VAR4);
        FUN5(VAR4);
        VAR5.VAR7 -= 4;
    }
    switch (VAR5.VAR12)
    {
    case FUN4(0xa9, '', '', ''):
        VAR6 = VAR2->VAR13->VAR14;
        VAR7 = sizeof(VAR2->VAR13->VAR14);
        break;
    case FUN4(0xa9, '', '', ''):
    case FUN4(0xa9, '', '', ''):
        VAR6 = VAR2->VAR13->VAR15;
        VAR7 = sizeof(VAR2->VAR13->VAR15);
        break;
    case FUN4(0xa9, '', '', ''):
        VAR6 = VAR2->VAR13->VAR16;
        VAR7 = sizeof(VAR2->VAR13->VAR16);
        break;
    case FUN4(0xa9, '', '', ''):
    case FUN4(0xa9, '', '', ''):
        VAR6 = VAR2->VAR13->VAR17;
        VAR7 = sizeof(VAR2->VAR13->VAR17);
        break;
    case FUN4(0xa9, '', '', ''):
        VAR6 = VAR2->VAR13->VAR18;
        VAR7 = sizeof(VAR2->VAR13->VAR18);
        break;
    }
    if (!VAR6)
        return 0;
    if (VAR5.VAR7 < 0)
        return -1;
    FUN6(VAR4, VAR6, FUN7(VAR7, VAR8, VAR5.VAR7));
    FUN8(VAR2->VAR13, "", (char *)&VAR5.VAR12, VAR6, VAR8, VAR5.VAR7);
    return 0;
}