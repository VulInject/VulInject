static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    int VAR5;
    int VAR6;
    int VAR7;
    int VAR8;
    for (VAR7 = 0; VAR7 < FUN2(VAR2); VAR7++)
    {
        VAR8 = 1 << VAR7;
        VAR2->VAR9[VAR7] = 1023;
        if (!VAR2->VAR10 || !VAR2->VAR11[VAR7])
        {
            FUN3(VAR2->VAR12[VAR7]);
            return;
        }
        VAR4 = 0x100;
        VAR3 = 1023;
        for (VAR5 = 0; VAR5 < VAR13; VAR5++)
        {
            if (FUN4(VAR5, VAR8) && FUN5(VAR5, VAR8))
            {
                if (FUN6(VAR5, VAR7) < VAR4)
                {
                    VAR4 = FUN6(VAR5, VAR7);
                    VAR3 = VAR5;
                }
            }
        }
        VAR6 = 0;
        if (VAR4 <= VAR2->VAR14[VAR7])
        {
            VAR2->VAR9[VAR7] = VAR3;
            if (VAR4 < VAR2->VAR15[VAR7])
            {
                FUN7("", VAR3);
                VAR6 = 1;
            }
        }
        FUN8(VAR2->VAR12[VAR7], VAR6);
    }
}