static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = FUN2(VAR3);
    FUN3(VAR3);
    if (VAR5)
    {
        ioreq_t copy = *VAR5;
        FUN4();
        FUN5(VAR3, &copy);
        VAR5->VAR6 = copy.VAR6;
        if (VAR5->VAR3 != VAR7)
        {
            fprintf(VAR8, ""
                            "" VAR9 ""
                            "" VAR9 "",
                    VAR5->VAR3, VAR5->VAR10, VAR5->VAR11, VAR5->VAR6, VAR5->VAR12, VAR5->VAR13, VAR5->VAR14);
            FUN6(false);
            return;
        }
        FUN7();
        if (FUN8())
        {
            if (FUN9())
            {
                FUN6(false);
            }
            if (FUN10())
            {
                FUN11(VAR15);
                FUN6(true);
            }
        }
        VAR5->VAR3 = VAR16;
        FUN12(VAR3->VAR17, VAR3->VAR18[VAR3->VAR19]);
    }
}