static void FUN1(VAR1 *VAR2)
{
    if (!VAR2->VAR3)
    {
        if (VAR2->VAR4->VAR5)
        {
            VAR2->VAR4->FUN2(VAR2);
        }
        else
        {
            if (VAR2->VAR4->VAR6)
            {
                VAR2->VAR4->FUN3(VAR2);
                if (VAR2->VAR7)
                {
                    VAR2->FUN4(VAR2->VAR8, VAR2->VAR3);
                    if (FUN5(VAR2))
                    {
                        FUN6(VAR2);
                    }
                    else
                    {
                        const char *VAR9 = NULL;
                        if (VAR2->VAR3 < 0)
                        {
                            VAR9 = strerror(-VAR2->VAR3);
                            FUN7(VAR2, VAR9);
                            if (VAR2->VAR10)
                            {
                                FUN8(VAR2, VAR11);
                                FUN9(VAR2->VAR10);
                                FUN10(VAR2);