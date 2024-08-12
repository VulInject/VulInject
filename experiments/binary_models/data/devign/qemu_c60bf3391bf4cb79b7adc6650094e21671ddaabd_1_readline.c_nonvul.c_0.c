static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8;
    char *VAR9;
    VAR2->VAR10 = 0;
    VAR9 = FUN2(VAR2->VAR11 + 1);
    memcpy(VAR9, VAR2->VAR12, VAR2->VAR11);
    VAR9[VAR2->VAR11] = '';
    VAR2->FUN3(VAR2->VAR13, VAR9);
    FUN4(VAR9);
    if (VAR2->VAR10 <= 0)
        return;
    if (VAR2->VAR10 == 1)
    {
        VAR3 = strlen(VAR2->VAR14[0]);
        for (VAR4 = VAR2->VAR15; VAR4 < VAR3; VAR4++)
        {
            FUN5(VAR2, VAR2->VAR14[0][VAR4]);
        }
        if (VAR3 > 0 && VAR2->VAR14[0][VAR3 - 1] != '')
            FUN5(VAR2, '');
    }
    else
    {
        VAR2->FUN6(VAR2->VAR13, "");
        VAR6 = 0;
        VAR8 = 0;
        for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
        {
            VAR3 = strlen(VAR2->VAR14[VAR4]);
            if (VAR4 == 0)
            {
                VAR8 = VAR3;
            }
            else
            {
                if (VAR3 < VAR8)
                    VAR8 = VAR3;
                for (VAR5 = 0; VAR5 < VAR8; VAR5++)
                {
                    if (VAR2->VAR14[VAR4][VAR5] != VAR2->VAR14[0][VAR5])
                        VAR8 = VAR5;
                }
            }
            if (VAR3 > VAR6)
                VAR6 = VAR3;
        }
        if (VAR8 > 0)
            for (VAR4 = VAR2->VAR15; VAR4 < VAR8; VAR4++)
            {
                FUN5(VAR2, VAR2->VAR14[0][VAR4]);
            }
        VAR6 += 2;
        if (VAR6 < 10)
            VAR6 = 10;
        else if (VAR6 > 80)
            VAR6 = 80;
        VAR7 = 80 / VAR6;
        VAR5 = 0;
        for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
        {
            VAR2->FUN6(VAR2->VAR13, "", VAR6, VAR2->VAR14[VAR4]);
            if (++VAR5 == VAR7 || VAR4 == (VAR2->VAR10 - 1))
            {
                VAR2->FUN6(VAR2->VAR13, "");
                VAR5 = 0;
            }
        }
        FUN7(VAR2);
    }
    for (VAR4 = 0; VAR4 < VAR2->VAR10; VAR4++)
    {
        FUN4(VAR2->VAR14[VAR4]);
    }
}