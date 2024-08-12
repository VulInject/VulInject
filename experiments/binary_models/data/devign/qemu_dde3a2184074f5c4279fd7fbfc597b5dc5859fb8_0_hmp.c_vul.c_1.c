static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5;
    VAR5 = FUN2(NULL);
    if (!VAR5->VAR6 || strcmp(VAR5->VAR3, "") == 0)
    {
        if (VAR5->VAR7)
        {
            int VAR8;
            if (VAR5->VAR9->VAR10)
            {
                VAR8 = VAR5->VAR9->VAR11 * 100 / VAR5->VAR9->VAR12;
            }
            else
            {
                VAR8 = 100;
            }
            FUN3(VAR3->VAR13, "", VAR8);
            FUN4(VAR3->VAR13);
        }
        FUN5(VAR3->VAR14, FUN6(VAR15) + 1000);
    }
    else
    {
        if (VAR3->VAR16)
        {
            FUN3(VAR3->VAR13, "");
        }
        FUN7(VAR3->VAR13);
        FUN8(VAR3->VAR14);
        FUN9(VAR3);
    }
    FUN10(VAR5);
}