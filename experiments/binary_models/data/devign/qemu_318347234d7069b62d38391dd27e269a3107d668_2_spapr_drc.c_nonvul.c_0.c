static VAR1 FUN1(VAR2 *VAR3, sPAPRDRAllocationState VAR4)
{
    VAR5 *VAR6 = FUN2(VAR3);
    FUN3(FUN4(VAR3), VAR4);
    if (VAR4 == VAR7)
    {
        if (!VAR3->VAR8)
        {
            return VAR9;
        }
        if (VAR3->VAR10 && VAR3->VAR11)
        {
            VAR3->VAR12 = true;
            return VAR9;
        }
    }
    if (VAR3->VAR13 != VAR14)
    {
        VAR3->VAR15 = VAR4;
        if (VAR3->VAR10 && VAR3->VAR15 == VAR16)
        {
            FUN5(FUN4(VAR3));
            VAR6->FUN6(VAR3, FUN7(VAR3->VAR8), NULL);
        }
        else if (VAR3->VAR15 == VAR7)
        {
            VAR3->VAR11 = false;
        }
    }
    return VAR17;
}