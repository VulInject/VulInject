static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8;
    assert(VAR2);
    assert(FUN2(VAR4));
    VAR8 = FUN3(VAR2);
    while (!VAR2->VAR9)
    {
        unsigned int VAR10;
        if (!VAR2->VAR11)
        {
            VAR2->VAR11 = FUN4(VAR4, sizeof(VAR12));
            if (!VAR2->VAR11)
            {
                break;
                VAR2->VAR13 = 0;
                VAR2->VAR14 = 0;
                for (VAR10 = VAR2->VAR13; VAR10 < VAR2->VAR11->VAR15; VAR10++)
                {
                    size_t VAR16;
                    ssize_t VAR17;
                    VAR16 = VAR2->VAR11->VAR18[VAR10].VAR19 - VAR2->VAR14;
                    VAR17 = VAR8->FUN5(VAR2, VAR2->VAR11->VAR18[VAR10].VAR20 + VAR2->VAR14, VAR16);
                    if (VAR2->VAR9)
                    {
                        VAR2->VAR13 = VAR10;
                        if (VAR17 > 0)
                        {
                            VAR2->VAR14 += VAR17;
                            break;
                            VAR2->VAR14 = 0;
                            if (VAR2->VAR9)
                            {
                                break;
                                FUN6(VAR4, VAR2->VAR11, 0);
                                FUN7(VAR2->VAR11);
                                VAR2->VAR11 = NULL;
                                FUN8(VAR6, VAR4);