static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5, **VAR6;
    int VAR7;
    ssize_t VAR8;
    for (;;)
    {
        char VAR9[16];
        VAR8 = read(VAR3->VAR10, VAR9, sizeof(VAR9));
        if (VAR8 == -1 && VAR11 == VAR12)
            continue;
        if (VAR8 == sizeof(VAR9))
            continue;
        break;
    }
    for (;;)
    {
        VAR6 = &VAR3->VAR13;
        for (;;)
        {
            VAR5 = *VAR6;
            if (!VAR5)
                goto VAR14;
            VAR7 = FUN2(&VAR5->VAR15);
            if (VAR7 == VAR16)
            {
                *VAR6 = VAR5->VAR17;
                FUN3(VAR5);
            }
            else if (VAR7 != VAR18)
            {
                if (VAR7 == 0)
                {
                    VAR7 = FUN4(&VAR5->VAR15);
                    if (VAR7 == VAR5->VAR15.VAR19)
                        VAR7 = 0;
                    else
                        VAR7 = -VAR20;
                }
                else
                {
                    VAR7 = -VAR7;
                }
                *VAR6 = VAR5->VAR17;
                VAR5->VAR21.FUN5(VAR5->VAR21.VAR1, VAR7);
                FUN3(VAR5);
                break;
            }
            else
            {
                VAR6 = &VAR5->VAR17;
            }
        }
    }
VAR14:;
}