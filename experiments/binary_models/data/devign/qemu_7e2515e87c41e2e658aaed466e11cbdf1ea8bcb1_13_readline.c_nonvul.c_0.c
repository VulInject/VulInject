static void FUN1(void)
{
    int VAR1, VAR2, VAR3;
    if (VAR4 != VAR5 || memcmp(VAR6, VAR7, VAR4) != 0)
    {
        for (VAR1 = 0; VAR1 < VAR8; VAR1++)
        {
            FUN2("");
        }
        VAR6[VAR4] = '';
        if (VAR9)
        {
            VAR3 = strlen(VAR6);
            for (VAR1 = 0; VAR1 < VAR3; VAR1++)
                FUN2("");
        }
        else
        {
            FUN2("", VAR6);
        }
        FUN2("");
        memcpy(VAR7, VAR6, VAR4);
        VAR5 = VAR4;
        VAR8 = VAR4;
    }
    if (VAR10 != VAR8)
    {
        VAR2 = VAR10 - VAR8;
        if (VAR2 > 0)
        {
            for (VAR1 = 0; VAR1 < VAR2; VAR1++)
            {
                FUN2("");
            }
        }
        else
        {
            VAR2 = -VAR2;
            for (VAR1 = 0; VAR1 < VAR2; VAR1++)
            {
                FUN2("");
            }
        }
        VAR8 = VAR10;
    }
    FUN3();
}