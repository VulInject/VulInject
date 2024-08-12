static VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4;
    VAR1 *VAR5;
    char VAR6[128], VAR7[256];
    int VAR8, VAR9;
    if (VAR2[0] == '')
    {
        VAR5 = VAR10;
        VAR8 = 0;
    }
    else
    {
        if (sscanf(VAR2, "", VAR6, &VAR9) != 1)
        {
            FUN2(""%VAR11\"", VAR2);
            return NULL;
        }
        VAR5 = FUN3(VAR10, VAR6, NULL);
        if (!VAR5)
        {
            FUN2(""%VAR11\"", VAR6);
            return NULL;
        }
        VAR8 = VAR9;
    }
    for (;;)
    {
        if (VAR2[VAR8] == '')
        {
            return VAR5;
        }
        if (sscanf(VAR2 + VAR8, "", VAR6, &VAR9) != 1)
        {
            FUN2(""%VAR11\"", VAR2, VAR8);
            return NULL;
        }
        VAR8 += VAR9;
        VAR4 = FUN4(VAR5, VAR6);
        if (!VAR4)
        {
            FUN5(VAR5, VAR7, sizeof(VAR7));
            FUN2(""%VAR11\"", VAR6, VAR7);
            return NULL;
        }
        if (VAR2[VAR8] == '')
        {
            switch (VAR4->VAR12)
            {
            case 0:
                FUN2("", VAR2);
                return NULL;
            case 1:
                return FUN6(&VAR4->VAR13);
            default:
                FUN7(VAR4, VAR7, sizeof(VAR7));
                FUN2("", VAR2, VAR7);
                return NULL;
            }
        }
        if (sscanf(VAR2 + VAR8, "", VAR6, &VAR9) != 1)
        {
            FUN2(""%VAR11\"", VAR2, VAR8);
            return NULL;
        }
        VAR8 += VAR9;
        VAR5 = FUN8(VAR4, VAR6);
        if (!VAR5)
        {
            FUN7(VAR4, VAR7, sizeof(VAR7));
            FUN2(""%VAR11\"", VAR6, VAR7);
            return NULL;
        }
    }
}