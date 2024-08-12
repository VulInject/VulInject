static int FUN1(VAR1 *VAR2, TRBCCode VAR3)
{
    int VAR4 = 0;
    if (VAR3 && (VAR2->VAR5 || VAR2->VAR6))
    {
        VAR2->VAR7 = VAR3;
        FUN2(VAR2);
    }
    if (VAR2->VAR5)
    {
        FUN3(&VAR2->VAR8);
        VAR2->VAR5 = 0;
        VAR4 = 1;
    }
    if (VAR2->VAR6)
    {
        VAR9 *VAR10 = VAR2->VAR11->VAR12[VAR2->VAR13 - 1].VAR14[VAR2->VAR15 - 1];
        if (VAR10)
        {
            VAR10->VAR16 = NULL;
            FUN4(VAR10->VAR17);
        }
        VAR2->VAR6 = 0;
        VAR4 = 1;
    }
    FUN5(VAR2->VAR18);
    VAR2->VAR18 = NULL;
    VAR2->VAR19 = 0;
    return VAR4;
}