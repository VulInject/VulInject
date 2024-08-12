static VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5;
    char VAR6[128];
    int VAR7, VAR8;
    if (VAR2[0] == '')
    {
        VAR5 = FUN2();
        VAR7 = 0;
    }
    else
    {
        if (sscanf(VAR2, "", VAR6, &VAR8) != 1)
        {
            assert(!VAR2[0]);
            VAR6[0] = VAR8 = 0;
        }
        VAR5 = FUN3(FUN2(), VAR6, NULL);
        if (!VAR5)
        {
            FUN4(VAR9, VAR6);
            return NULL;
        }
        else if (FUN5(VAR5))
        {
            FUN4(VAR10, "", VAR6);
            return NULL;
        }
        VAR7 = VAR8;
    }
    for (;;)
    {
        assert(VAR2[VAR7] == '' || !VAR2[VAR7]);
        while (VAR2[VAR7] == '')
        {
            VAR7++;
        }
        if (VAR2[VAR7] == '')
        {
            return VAR5;
        }
        if (sscanf(VAR2 + VAR7, "", VAR6, &VAR8) != 1)
        {
            FUN6();
            VAR6[0] = VAR8 = 0;
        }
        VAR7 += VAR8;
        VAR4 = FUN7(VAR5, VAR6);
        if (!VAR4)
        {
            FUN4(VAR11, VAR6);
            if (!FUN8())
            {
                FUN9(VAR5);
            }
            return NULL;
        }
        assert(VAR2[VAR7] == '' || !VAR2[VAR7]);
        while (VAR2[VAR7] == '')
        {
            VAR7++;
        }
        if (VAR2[VAR7] == '')
        {
            switch (VAR4->VAR12)
            {
            case 0:
                FUN4(VAR10, "", VAR6);
                return NULL;
            case 1:
                return FUN10(&VAR4->VAR13);
            default:
                FUN4(VAR10, "", VAR6);
                if (!FUN8())
                {
                    FUN11(VAR4);
                }
                return NULL;
            }
        }
        if (sscanf(VAR2 + VAR7, "", VAR6, &VAR8) != 1)
        {
            FUN6();
            VAR6[0] = VAR8 = 0;
        }
        VAR7 += VAR8;
        VAR5 = FUN12(VAR4, VAR6);
        if (!VAR5)
        {
            FUN4(VAR9, VAR6);
            if (!FUN8())
            {
                FUN11(VAR4);
            }
            return NULL;
        }
    }
}