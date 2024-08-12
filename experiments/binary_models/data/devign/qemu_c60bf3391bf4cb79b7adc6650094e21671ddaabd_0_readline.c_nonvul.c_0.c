static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (VAR2->VAR6 != VAR2->VAR7 || memcmp(VAR2->VAR8, VAR2->VAR9, VAR2->VAR6) != 0)
    {
        for (VAR3 = 0; VAR3 < VAR2->VAR10; VAR3++)
        {
            VAR2->FUN2(VAR2->VAR11, "");
        }
        VAR2->VAR8[VAR2->VAR6] = '';
        if (VAR2->VAR12)
        {
            VAR5 = strlen(VAR2->VAR8);
            for (VAR3 = 0; VAR3 < VAR5; VAR3++)
                VAR2->FUN2(VAR2->VAR11, "");
        }
        else
        {
            VAR2->FUN2(VAR2->VAR11, "", VAR2->VAR8);
        }
        VAR2->FUN2(VAR2->VAR11, "");
        memcpy(VAR2->VAR9, VAR2->VAR8, VAR2->VAR6);
        VAR2->VAR7 = VAR2->VAR6;
        VAR2->VAR10 = VAR2->VAR6;
    }
    if (VAR2->VAR13 != VAR2->VAR10)
    {
        VAR4 = VAR2->VAR13 - VAR2->VAR10;
        if (VAR4 > 0)
        {
            for (VAR3 = 0; VAR3 < VAR4; VAR3++)
            {
                VAR2->FUN2(VAR2->VAR11, "");
            }
        }
        else
        {
            VAR4 = -VAR4;
            for (VAR3 = 0; VAR3 < VAR4; VAR3++)
            {
                VAR2->FUN2(VAR2->VAR11, "");
            }
        }
        VAR2->VAR10 = VAR2->VAR13;
    }
    VAR2->FUN3(VAR2->VAR11);
}