static int FUN1(VAR1 *VAR2)
{
    int64_t VAR3;
    uint32_t VAR4;
    int VAR5 = 0;
    int VAR6 = -1;
    VAR3 = 0;
    for (;;)
    {
        if ((VAR3 + 8) > (unsigned int)VAR2->VAR7)
            break;
        VAR4 = FUN2(VAR2->VAR8 + VAR3 + 4);
        switch (VAR4)
        {
        case FUN3('', '', '', ''):
            VAR6 = VAR3 + 4;
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
            VAR5 = VAR9;
            VAR3 = FUN4(4, FUN5(VAR2->VAR8 + VAR3)) + VAR3;
            break;
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
            VAR5 = FUN4(VAR5, VAR9 - 5);
            VAR3 = FUN4(4, FUN5(VAR2->VAR8 + VAR3)) + VAR3;
            break;
        case FUN3(0x82, 0x82, 0x7f, 0x7d):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
        case FUN3('', '', '', ''):
            VAR5 = FUN4(VAR5, VAR9 - 50);
            VAR3 = FUN4(4, FUN5(VAR2->VAR8 + VAR3)) + VAR3;
            break;
        default:
            VAR3 = FUN4(4, FUN5(VAR2->VAR8 + VAR3)) + VAR3;
        }
    }
    if (VAR4 > VAR9 - 50 && VAR6 != -1)
    {
        VAR3 = VAR6;
        while (VAR3 < (VAR2->VAR7 - 20))
        {
            if (FUN2(VAR2->VAR8 + VAR3) == FUN3('', '', '', '') && FUN5(VAR2->VAR8 + VAR3 + 8) == 1 && FUN2(VAR2->VAR8 + VAR3 + 16) == FUN3('', '', '', ''))
            {
                FUN6(NULL, VAR10, "");
                return 5;
            }
            else
                VAR3 += 2;
        }
    }
    return VAR5;
}