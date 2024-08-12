bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    int VAR8 = 0;
    bool VAR9 = false;
    FUN2(, VAR5)
    VAR10 = FUN3(VAR10);
    FUN4(VAR2);
    do
    {
        FUN5(VAR4, 0);
        while ((VAR6 = FUN6(VAR2, VAR4)))
        {
            VAR9 = true;
            VAR8 = FUN7(VAR2, VAR6);
            if (!VAR8)
            {
                FUN8(&VAR10, VAR6, VAR7);
            }
            else if (VAR8 == -VAR11)
            {
                while (!FUN9(&VAR10))
                {
                    VAR6 = FUN10(&VAR10);
                    FUN11(&VAR10, VAR6, VAR7);
                    FUN12(VAR6->VAR12->VAR13->VAR14.VAR15);
                    FUN13(VAR6->VAR12);
                    FUN14(VAR6->VAR4, &VAR6->VAR16, 0);
                    FUN15(VAR6);
                }
            }
        }
        FUN5(VAR4, 1);
    } while (VAR8 != -VAR11 && !FUN16(VAR4));
    FUN17(VAR6, &VAR10, VAR7, VAR7) { FUN18(VAR2, VAR6); }
    FUN19(VAR2);
    return VAR9;
}