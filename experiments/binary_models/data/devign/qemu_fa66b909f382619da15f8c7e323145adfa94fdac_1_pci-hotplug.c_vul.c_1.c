static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = FUN2(VAR8, VAR12, FUN3(&VAR4->VAR13));
    if (!VAR9 || strcmp(VAR9->VAR12.VAR14->VAR15, "") != 0)
    {
        FUN4("");
        VAR6->VAR16 = FUN5(VAR6->VAR17, "", -1);
        VAR11 = FUN6(VAR9, VAR6, VAR6->VAR16);
        VAR6->VAR16 = VAR11->VAR18;
        if (VAR7)
            FUN7(VAR2, "", VAR9->VAR19, VAR11->VAR18);
        return 0;