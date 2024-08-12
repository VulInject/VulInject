void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, VAR7 **VAR8)
{
    VAR9 *VAR10;
    AcpiEventStatusBits VAR11;
    bool VAR12 = FUN2(FUN3(VAR6), VAR13);
    VAR10 = FUN4(VAR4, VAR6, VAR8);
    if (!VAR10)
    {
        return;
    }
    VAR10->VAR14 = VAR6;
    if (VAR12)
    {
        VAR11 = VAR15;
    }
    else
    {
        VAR10->VAR16 = true;
        VAR11 = VAR17;
    }
    if (VAR6->VAR18)
    {
        if (!VAR12)
        {
            VAR10->VAR19 = true;
        }
        FUN5(FUN6(VAR2), VAR11);
    }
}