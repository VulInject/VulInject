static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR4;
    VAR5 *VAR6 = VAR2->VAR7[0]->VAR8;
    if (VAR4->VAR9)
    {
        VAR10 *VAR11 = VAR2->VAR12;
        int64_t VAR13 = FUN2(VAR4);
        FUN3(VAR4, VAR11->VAR14, VAR15);
        FUN4(VAR4, VAR13 - VAR11->VAR14 - 8);
        FUN3(VAR4, VAR13, VAR15);
        if (!VAR6->VAR16)
        {
            FUN5(VAR4, "");
            FUN4(VAR4, VAR11->VAR17 + 24);
            FUN4(VAR4, VAR11->VAR18);
            FUN4(VAR4, VAR11->VAR18 * FUN6(VAR6->VAR19, VAR6->VAR20));
            FUN7(VAR4, 0);
            FUN7(VAR4, 0);
            FUN8(VAR4, VAR11->VAR21, VAR11->VAR17);
            FUN9(&VAR11->VAR21);
            VAR11->VAR22 = 0;
        }
        FUN10(VAR4);
    }
    return 0;
}