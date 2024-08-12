static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR5 *VAR6;
    if (VAR2 < 0)
    {
        FUN2("", strerror(-VAR2));
        FUN3(VAR7);
    }
    if (VAR4->VAR8)
    {
        assert(VAR4->VAR9 == 0);
        VAR4->VAR8 = false;
    }
    else if (VAR4->VAR9 > 0)
    {
        int VAR10 = VAR4->VAR11 - VAR4->VAR9;
        VAR4->VAR11--;
        VAR4->VAR9--;
        if (VAR4->VAR12 && VAR10 % VAR4->VAR12 == 0)
        {
            if (!VAR4->VAR9 || !VAR4->VAR13)
            {
                VAR14 *VAR15;
                if (VAR4->VAR13)
                {
                    VAR4->VAR8 = true;
                    VAR15 = VAR16;
                }
                else
                {
                    VAR15 = VAR17;
                }
                VAR6 = FUN4(VAR4->VAR18, VAR15, VAR4);
                if (!VAR6)
                {
                    FUN2("");
                    FUN3(VAR7);
                }
            }
            if (VAR4->VAR13)
            {
                return;
            }
        }
    }
    while (VAR4->VAR11 > VAR4->VAR9 && VAR4->VAR9 < VAR4->VAR19)
    {
        if (VAR4->write)
        {
            VAR6 = FUN5(VAR4->VAR18, VAR4->VAR20, VAR4->VAR21, 0, VAR16, VAR4);
        }
        else
        {
            VAR6 = FUN6(VAR4->VAR18, VAR4->VAR20, VAR4->VAR21, 0, VAR16, VAR4);
        }
        if (!VAR6)
        {
            FUN2("");
            FUN3(VAR7);
        }
        VAR4->VAR9++;
        VAR4->VAR20 += VAR4->VAR22;
        VAR4->VAR20 %= VAR4->VAR23;
    }
}