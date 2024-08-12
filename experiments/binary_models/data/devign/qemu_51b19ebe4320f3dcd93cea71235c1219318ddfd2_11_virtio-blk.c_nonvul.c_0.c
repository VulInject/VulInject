static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, VAR3, VAR5);
    VAR6 *VAR7 = FUN3(VAR4->VAR8);
    FUN4(&VAR4->VAR5);
    FUN5(VAR4->VAR9->VAR9.VAR10);
    for (;;)
    {
        MultiReqBuffer VAR11 = {};
        FUN6(VAR4->VAR8, &VAR4->VAR12);
        for (;;)
        {
            VAR13 *VAR14 = FUN7(VAR4->VAR8, &VAR4->VAR12, sizeof(VAR13));
            if (VAR14 == NULL)
            {
                break;
            }
            FUN8(VAR7, VAR14);
            FUN9(VAR4, VAR14->VAR15.VAR16, VAR14->VAR15.VAR17, VAR14->VAR15.VAR18);
            FUN10(VAR14, &VAR11);
        }
        if (VAR11.VAR19)
        {
            FUN11(VAR4->VAR9->VAR9.VAR10, &VAR11);
        }
        if (FUN12(!FUN13(VAR4->VAR8, &VAR4->VAR12)))
        {
            if (FUN14(VAR4->VAR8, &VAR4->VAR12))
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    FUN15(VAR4->VAR9->VAR9.VAR10);
}