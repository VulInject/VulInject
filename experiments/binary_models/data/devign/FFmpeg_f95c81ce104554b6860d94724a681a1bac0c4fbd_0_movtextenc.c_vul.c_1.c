static void FUN1(void *VAR1, const char VAR2, int close)
{
    VAR3 *VAR4 = VAR1;
    if (!close)
    {
        if (!(VAR4->VAR5 & VAR6))
        {
            VAR4->VAR7 = FUN2(sizeof(*VAR4->VAR7));
            if (!VAR4->VAR7)
            {
                FUN3(&VAR4->VAR8);
                VAR4->VAR5 &= ~VAR6;
            }
            VAR4->VAR7->VAR9 = 0;
            VAR4->VAR7->VAR10 = FUN4(&VAR4->VAR11);
        }
        else
        {
            if (VAR4->VAR7->VAR9)
            {
                VAR4->VAR7->VAR12 = FUN4(&VAR4->VAR11);
                FUN5(&VAR4->VAR13, &VAR4->VAR14, VAR4->VAR7);
                VAR4->VAR7 = FUN2(sizeof(*VAR4->VAR7));
                if (!VAR4->VAR7)
                {
                    FUN6(VAR4);
                    FUN3(&VAR4->VAR8);
                    VAR4->VAR5 &= ~VAR6;
                }
                VAR4->VAR7->VAR9 = VAR4->VAR13[VAR4->VAR14 - 1]->VAR9;
                VAR4->VAR7->VAR10 = FUN4(&VAR4->VAR11);
            }
            else
            {
                VAR4->VAR7->VAR9 = 0;
                VAR4->VAR7->VAR10 = FUN4(&VAR4->VAR11);
            }
        }
        switch (VAR2)
        {
        case '':
            VAR4->VAR7->VAR9 |= VAR15;
            break;
        case '':
            VAR4->VAR7->VAR9 |= VAR16;
            break;
        case '':
            VAR4->VAR7->VAR9 |= VAR17;
            break;
        }
    }
    else
    {
        VAR4->VAR7->VAR12 = FUN4(&VAR4->VAR11);
        FUN5(&VAR4->VAR13, &VAR4->VAR14, VAR4->VAR7);
        VAR4->VAR7 = FUN2(sizeof(*VAR4->VAR7));
        if (!VAR4->VAR7)
        {
            FUN6(VAR4);
            FUN3(&VAR4->VAR8);
            VAR4->VAR5 &= ~VAR6;
        }
        VAR4->VAR7->VAR9 = VAR4->VAR13[VAR4->VAR14 - 1]->VAR9;
        switch (VAR2)
        {
        case '':
            VAR4->VAR7->VAR9 &= ~VAR15;
            break;
        case '':
            VAR4->VAR7->VAR9 &= ~VAR16;
            break;
        case '':
            VAR4->VAR7->VAR9 &= ~VAR17;
            break;
        }
        if (VAR4->VAR7->VAR9)
        {
            VAR4->VAR7->VAR10 = FUN4(&VAR4->VAR11);
        }
    }
    VAR4->VAR5 |= VAR6;