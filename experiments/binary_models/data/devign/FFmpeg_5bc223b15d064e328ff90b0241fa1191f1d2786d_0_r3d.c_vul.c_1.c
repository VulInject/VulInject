static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    Atom VAR8;
    int VAR9 = 0;
    while (!VAR9)
    {
        if (FUN2(VAR2, &VAR8) < 0)
        {
            VAR9 = -1;
            break;
        }
        switch (VAR8.VAR10)
        {
        case FUN3('', '', '', ''):
            if (VAR2->VAR11[0]->VAR12 == VAR13)
                goto VAR14;
            if (!(VAR9 = FUN4(VAR2, VAR4, &VAR8)))
                return 0;
            break;
        case FUN3('', '', '', ''):
            if (!VAR6->VAR15)
                return -1;
            if (VAR2->VAR11[1]->VAR12 == VAR13)
                goto VAR14;
            if (!(VAR9 = FUN5(VAR2, VAR4, &VAR8)))
                return 0;
            break;
        default:
        VAR14:
            FUN6(VAR2->VAR16, VAR8.VAR17 - 8);
        }
    }
    return VAR9;
}