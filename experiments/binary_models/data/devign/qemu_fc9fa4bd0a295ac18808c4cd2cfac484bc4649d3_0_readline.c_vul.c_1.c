static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR5;
    int VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    char *VAR12;
    VAR2->VAR13 = 0;
    VAR12 = FUN2(VAR2->VAR14 + 1);
    memcpy(VAR12, VAR2->VAR15, VAR2->VAR14);
    VAR12[VAR2->VAR14] = '';
    VAR2->FUN3(VAR12);
    FUN4(VAR12);
    if (VAR2->VAR13 <= 0)
        return;
    if (VAR2->VAR13 == 1)
    {
        VAR6 = strlen(VAR2->VAR16[0]);
        for (VAR7 = VAR2->VAR17; VAR7 < VAR6; VAR7++)
        {
            FUN5(VAR2, VAR2->VAR16[0][VAR7]);
            if (VAR6 > 0 && VAR2->VAR16[0][VAR6 - 1] != '')
                FUN5(VAR2, '');
        }
        else
        {
            FUN6(VAR4, "");
            VAR9 = 0;
            VAR11 = 0;
            for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
            {
                VAR6 = strlen(VAR2->VAR16[VAR7]);
                if (VAR7 == 0)
                {
                    VAR11 = VAR6;
                }
                else
                {
                    if (VAR6 < VAR11)
                        VAR11 = VAR6;
                    for (VAR8 = 0; VAR8 < VAR11; VAR8++)
                    {
                        if (VAR2->VAR16[VAR7][VAR8] != VAR2->VAR16[0][VAR8])
                            VAR11 = VAR8;
                        if (VAR6 > VAR9)
                            VAR9 = VAR6;
                        if (VAR11 > 0)
                            for (VAR7 = VAR2->VAR17; VAR7 < VAR11; VAR7++)
                            {
                                FUN5(VAR2, VAR2->VAR16[0][VAR7]);
                                VAR9 += 2;
                                if (VAR9 < 10)
                                    VAR9 = 10;
                                else if (VAR9 > 80)
                                    VAR9 = 80;
                                VAR10 = 80 / VAR9;
                                VAR8 = 0;
                                for (VAR7 = 0; VAR7 < VAR2->VAR13; VAR7++)
                                {
                                    FUN6(VAR2->VAR4, "", VAR9, VAR2->VAR16[VAR7]);
                                    if (++VAR8 == VAR10 || VAR7 == (VAR2->VAR13 - 1))
                                    {
                                        FUN6(VAR2->VAR4, "");
                                        VAR8 = 0;
                                        FUN7(VAR2);