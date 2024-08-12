static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7 = 0;
    if (VAR6->VAR8)
    {
        int VAR9;
        VAR7 = FUN2(VAR6->VAR10[0], VAR4);
        if (VAR7 < 0)
            goto VAR11;
        VAR9 = 1;
        while (VAR9)
        {
            VAR7 = FUN3(VAR6->VAR10[VAR9 - 1], VAR4);
            if (VAR7 == FUN4(VAR12))
            {
                VAR7 = 0;
                VAR9--;
                continue;
            }
            else if (VAR7 < 0)
                goto VAR11;
            if (!(VAR6->VAR13[VAR9 - 1] & 1))
            {
                VAR7 = FUN5(VAR6->VAR14->VAR15, VAR6->VAR10[VAR9 - 1]->VAR16);
                if (VAR7 < 0)
                    goto VAR11;
                VAR6->VAR13[VAR9 - 1] |= 1;
            }
            if (VAR9 < VAR6->VAR8)
            {
                if (!(VAR6->VAR13[VAR9] & 2))
                {
                    VAR7 = FUN5(VAR6->VAR10[VAR9]->VAR16, VAR6->VAR10[VAR9 - 1]->VAR16);
                    if (VAR7 < 0)
                        goto VAR11;
                    VAR6->VAR13[VAR9] |= 2;
                }
                VAR7 = FUN2(VAR6->VAR10[VAR9], VAR4);
                if (VAR7 < 0)
                    goto VAR11;
                VAR9++;
            }
            else
                FUN6(VAR2, VAR4, VAR6, 0);
        }
    }
    else
        FUN6(VAR2, VAR4, VAR6, 0);
VAR11:
    if (VAR7 < 0 && VAR7 != VAR17)
    {
        FUN7(NULL, VAR18, ""
                                   "",
               VAR6->VAR19, VAR6->VAR20);
        if (VAR21)
            FUN8(1);
    }
}