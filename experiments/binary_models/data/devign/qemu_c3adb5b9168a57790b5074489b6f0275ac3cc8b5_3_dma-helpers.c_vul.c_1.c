static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR1;
    target_phys_addr_t VAR5, VAR6;
    void *VAR7;
    VAR4->VAR8 = NULL;
    VAR4->VAR9 += VAR4->VAR10.VAR11 / 512;
    FUN2(VAR4);
    FUN3(&VAR4->VAR10);
    if (VAR4->VAR12 == VAR4->VAR13->VAR14 || VAR2 < 0)
    {
        VAR4->VAR15.FUN4(VAR4->VAR15.VAR1, VAR2);
        FUN5(&VAR4->VAR10);
        FUN6(VAR4);
        return;
    }
    while (VAR4->VAR12 < VAR4->VAR13->VAR14)
    {
        VAR5 = VAR4->VAR13->VAR13[VAR4->VAR12].VAR16 + VAR4->VAR17;
        VAR6 = VAR4->VAR13->VAR13[VAR4->VAR12].VAR18 - VAR4->VAR17;
        VAR7 = FUN7(VAR5, &VAR6, !VAR4->VAR19);
        if (!VAR7)
            break;
        FUN8(&VAR4->VAR10, VAR7, VAR6);
        VAR4->VAR17 += VAR6;
        if (VAR4->VAR17 == VAR4->VAR13->VAR13[VAR4->VAR12].VAR18)
        {
            VAR4->VAR17 = 0;
            ++VAR4->VAR12;
        }
    }
    if (VAR4->VAR10.VAR11 == 0)
    {
        FUN9(VAR4, VAR20);
        return;
    }
    VAR4->VAR8 = VAR4->FUN10(VAR4->VAR21, VAR4->VAR9, &VAR4->VAR10, VAR4->VAR10.VAR11 / 512, VAR22, VAR4);
    if (!VAR4->VAR8)
    {
        FUN2(VAR4);
        FUN5(&VAR4->VAR10);
        return;
    }
}