static void FUN1(VAR1 *VAR2)
{
    if (VAR2)
    {
        unsigned VAR3 = FUN2(VAR2, "", 0);
        unsigned VAR4 = FUN2(VAR2, "", 0);
        unsigned VAR5 = FUN2(VAR2, "", 0);
        unsigned VAR6 = FUN2(VAR2, "", 0);
        if (VAR3 == 0 || VAR4 == 0)
        {
            VAR4 = VAR4 > 0 ? VAR4 : 1;
            VAR5 = VAR5 > 0 ? VAR5 : 1;
            VAR6 = VAR6 > 0 ? VAR6 : 1;
            if (VAR3 == 0)
            {
                VAR3 = VAR5 * VAR6 * VAR4;
            }
        }
        else if (VAR5 == 0)
        {
            VAR6 = VAR6 > 0 ? VAR6 : 1;
            VAR5 = VAR3 / (VAR4 * VAR6);
        }
        else if (VAR6 == 0)
        {
            VAR6 = VAR3 / (VAR5 * VAR4);
        }
        else if (VAR4 * VAR5 * VAR6 < VAR3)
        {
            fprintf(VAR7, ""
                            ""
                            "",
                    VAR4, VAR5, VAR6, VAR3);
            FUN3(1);
        }
        VAR8 = FUN2(VAR2, "", 0);
        VAR9 = VAR3;
        VAR10 = VAR5 > 0 ? VAR5 : 1;
        VAR11 = VAR6 > 0 ? VAR6 : 1;
    }
    if (VAR8 == 0)
    {
        VAR8 = VAR9;
    }
    if (VAR8 > VAR12)
    {
        fprintf(VAR7, "");
        FUN3(1);
    }
    if (VAR8 < VAR9)
    {
        fprintf(VAR7, "");
        FUN3(1);
    }
}