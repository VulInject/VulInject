static void FUN1(VAR1 *VAR2, enum ide_dma_cmd VAR3)
{
    VAR2->VAR4 = VAR5 | VAR6 | VAR7 | VAR8;
    VAR2->VAR9 = 0;
    VAR2->VAR10 = 0;
    VAR2->VAR3 = VAR3;
    switch (VAR3)
    {
    case VAR11:
        FUN2(FUN3(VAR2->VAR12), &VAR2->VAR13, VAR2->VAR14 * VAR15, VAR16);
        break;
    case VAR17:
        FUN2(FUN3(VAR2->VAR12), &VAR2->VAR13, VAR2->VAR14 * VAR15, VAR18);
        break;
    default:
        break;
    }
    FUN4(VAR2, VAR19);
}