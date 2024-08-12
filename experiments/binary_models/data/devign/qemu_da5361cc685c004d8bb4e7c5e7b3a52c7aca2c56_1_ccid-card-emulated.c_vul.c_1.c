static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    uint8_t VAR4[VAR5];
    int VAR6;
    VReaderStatus VAR7;
    VAR8 *VAR9;
    while (1)
    {
        FUN2(&VAR3->VAR10);
        FUN3(&VAR3->VAR11, &VAR3->VAR10);
        FUN4(&VAR3->VAR10);
        if (VAR3->VAR12)
        {
            VAR3->VAR12 = 0;
            break;
        }
        FUN2(&VAR3->VAR13);
        while (!FUN5(&VAR3->VAR14))
        {
            VAR9 = FUN6(&VAR3->VAR14);
            assert((unsigned long)VAR9 > 1000);
            FUN7(&VAR3->VAR14, VAR15);
            if (VAR9->VAR16.VAR17.VAR18 != VAR19)
            {
                FUN8(VAR3, 1, "");
                FUN9(VAR9);
                continue;
            }
            if (VAR3->VAR20 == NULL)
            {
                FUN8(VAR3, 1, "");
                FUN9(VAR9);
                continue;
            }
            VAR6 = sizeof(VAR4);
            VAR7 = FUN10(VAR3->VAR20, VAR9->VAR16.VAR17.VAR17, VAR9->VAR16.VAR17.VAR21, VAR4, &VAR6);
            FUN8(VAR3, 2, "", VAR6);
            if (VAR7 == VAR22)
            {
                FUN11(VAR3, VAR4, VAR6);
            }
            else
            {
                FUN12(VAR3, VAR7);
            }
            FUN9(VAR9);
        }
        FUN4(&VAR3->VAR13);
    }
    FUN2(&VAR3->VAR23);
    FUN13(&VAR3->VAR24);
    FUN4(&VAR3->VAR23);
    return NULL;
}