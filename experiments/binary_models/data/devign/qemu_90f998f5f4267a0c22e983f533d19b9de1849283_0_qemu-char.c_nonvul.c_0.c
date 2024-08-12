static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR4->VAR6)
    {
        VAR4->VAR6 = 0;
        if (VAR5 == VAR7)
            goto VAR8;
        switch (VAR5)
        {
        case '':
        case '':
            FUN2(VAR2);
            break;
        case '':
        {
            const char *VAR9 = "";
            FUN3(VAR2, (VAR10 *)VAR9, strlen(VAR9));
            FUN4(0);
            break;
        }
        case '':
            FUN5();
            break;
        case '':
            FUN6(VAR2, VAR11);
            break;
        case '':
            FUN7(VAR4, VAR4->VAR12, VAR13);
            VAR4->VAR12++;
            if (VAR4->VAR12 >= VAR4->VAR14)
                VAR4->VAR12 = 0;
            FUN7(VAR4, VAR4->VAR12, VAR15);
            break;
        case '':
            VAR4->VAR16 = !VAR4->VAR16;
            VAR4->VAR17 = -1;
            VAR4->VAR18 = 0;
            break;
        }
    }
    else if (VAR5 == VAR7)
    {
        VAR4->VAR6 = 1;
    }
    else
    {
    VAR8:
        return 1;
    }
    return 0;
}