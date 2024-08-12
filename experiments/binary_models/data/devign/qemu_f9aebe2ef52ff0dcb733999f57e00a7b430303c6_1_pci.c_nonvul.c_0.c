static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    VAR2->VAR4 = 0;
    FUN2(VAR2);
    FUN3(VAR2->VAR5 + VAR6, FUN4(VAR2->VAR7 + VAR6) | FUN4(VAR2->VAR8 + VAR6));
    VAR2->VAR5[VAR9] = 0x0;
    VAR2->VAR5[VAR10] = 0x0;
    for (VAR3 = 0; VAR3 < VAR11; ++VAR3)
    {
        VAR12 *VAR13 = &VAR2->VAR14[VAR3];
        if (!VAR13->VAR15)
        {
            continue;
        }
        if (!(VAR13->VAR16 & VAR17) && VAR13->VAR16 & VAR18)
        {
            FUN5(VAR2->VAR5 + FUN6(VAR2, VAR3), VAR13->VAR16);
        }
        else
        {
            FUN7(VAR2->VAR5 + FUN6(VAR2, VAR3), VAR13->VAR16);
        }
    }
    FUN8(VAR2);
}