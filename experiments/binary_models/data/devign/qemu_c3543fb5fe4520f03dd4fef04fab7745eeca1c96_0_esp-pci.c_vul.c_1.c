static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, DMADirection VAR6)
{
    dma_addr_t VAR7;
    DMADirection VAR8;
    if (VAR2->VAR9[VAR10] & VAR11)
    {
        VAR8 = VAR12;
    }
    else
    {
        VAR8 = VAR13;
    }
    if (VAR6 != VAR8)
    {
        FUN2();
        return;
    }
    if (VAR2->VAR9[VAR14] & VAR15)
    {
        FUN3(VAR16, "");
    }
    VAR7 = VAR2->VAR9[VAR17];
    if (VAR2->VAR9[VAR18] < VAR5)
    {
        VAR5 = VAR2->VAR9[VAR18];
    }
    FUN4(FUN5(VAR2), VAR7, VAR4, VAR5, VAR6);
    VAR2->VAR9[VAR18] -= VAR5;
    VAR2->VAR9[VAR19] += VAR5;