static unsigned int FUN1(VAR1 *VAR2)
{
    TCGv VAR3[2];
    FUN2(fprintf(VAR4, "", VAR2->VAR5, VAR2->VAR6));
    FUN3(VAR2, 0);
    VAR3[0] = FUN4();
    if (VAR2->VAR6 == VAR7)
    {
        FUN5(VAR2);
        FUN6(VAR3[0], VAR2->VAR5);
        if (VAR2->VAR8 & VAR9)
        {
            VAR3[1] = FUN4();
            FUN7(VAR3[0], VAR3[0], 0x39f);
            FUN7(VAR3[1], VAR10[VAR7], ~0x39f);
            FUN8(VAR3[0], VAR3[1], VAR3[0]);
            FUN9(VAR3[1]);
        }
    }
    else
        FUN6(VAR3[0], VAR2->VAR5);
    FUN10(VAR2, VAR2->VAR6, VAR3[0]);
    if (VAR2->VAR6 == VAR7)
    {
        FUN11(VAR2, VAR11, 4);
        VAR2->VAR12 = 1;
    }
    FUN9(VAR3[0]);
    return 2;
}