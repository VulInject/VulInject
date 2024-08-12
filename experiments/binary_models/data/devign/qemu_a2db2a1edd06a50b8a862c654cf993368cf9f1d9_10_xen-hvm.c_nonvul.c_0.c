static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    FUN3(VAR3);
    if (VAR5)
    {
        FUN4(VAR3, VAR5);
        if (VAR5->VAR3 != VAR6)
        {
            fprintf(VAR7, ""
                            "" VAR8 ""
                            "" VAR8 "" VAR9 "" VAR9 "" VAR9 "",
                    VAR5->VAR3, VAR5->VAR10, VAR5->VAR11, VAR5->VAR12, VAR5->VAR13, VAR5->VAR14, VAR5->VAR15);
            FUN5(false);
            return;
        }
        FUN6();
        if (FUN7())
        {
            if (FUN8())
            {
                FUN5(false);
            }
            if (FUN9())
            {
                FUN10(VAR16);
                FUN5(true);
            }
        }
        VAR5->VAR3 = VAR17;
        FUN11(VAR3->VAR18, VAR3->VAR19[VAR3->VAR20]);
    }
}