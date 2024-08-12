static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *class;
    VAR6 *VAR7;
    if (VAR8)
    {
        VAR4->VAR9 = 1;
        VAR10 = true;
    }
    VAR4->VAR11 = -1;
    VAR4->VAR12 = false;
    FUN3(VAR2, "", VAR13, VAR14, NULL);
    FUN3(VAR2, "", VAR15, NULL, NULL);
    FUN3(VAR2, "", VAR16, VAR17, &VAR18);
    class = FUN4(FUN5(VAR4));
    do
    {
        for (VAR7 = FUN6(class)->VAR19; VAR7 && VAR7->VAR20; VAR7++)
        {
            FUN7(VAR4, VAR7, &VAR18);
            FUN8(VAR4, VAR7, &VAR18);
        }
        class = FUN9(class);
    } while (class != FUN10(VAR21));
    FUN11(FUN5(VAR4), "", VAR22, (VAR1 **)&VAR4->VAR23, NULL, 0, &VAR18);
    FUN12(&VAR4->VAR24);
}