static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2, VAR3, VAR5);
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    MultiReqBuffer VAR11 = {
        .VAR12 = 0,
    };
    FUN3(&VAR4->VAR5);
    FUN4(VAR4->VAR13->VAR14.VAR15);
    for (;;)
    {
        FUN5(VAR4->VAR16, &VAR4->VAR17);
        for (;;)
        {
            VAR10 = FUN6(VAR4->VAR16, &VAR4->VAR17, &VAR7);
            if (VAR10 < 0)
            {
                assert(VAR7 == NULL);
                break;
            }
            FUN7(VAR4, VAR7->VAR18, VAR7->VAR19, VAR7->VAR20);
            VAR9 = FUN8(VAR8);
            VAR9->VAR21 = FUN9(VAR4->VAR16);
            VAR9->VAR7 = VAR7;
            FUN10(VAR9, &VAR11);
        }
        FUN11(VAR4->VAR13->VAR14.VAR15, &VAR11);
        if (FUN12(VAR10 == -VAR22))
        {
            if (FUN13(VAR4->VAR16, &VAR4->VAR17))
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    FUN14(VAR4->VAR13->VAR14.VAR15);
}