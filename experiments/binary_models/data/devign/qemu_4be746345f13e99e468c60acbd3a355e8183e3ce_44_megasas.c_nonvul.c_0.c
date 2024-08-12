static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct mfi_ld_list VAR5;
    size_t VAR6 = sizeof(VAR5), VAR7;
    uint32_t VAR8 = 0, VAR9 = VAR2->VAR10;
    uint64_t VAR11;
    VAR12 *VAR13;
    memset(&VAR5, 0, VAR6);
    if (VAR4->VAR14 < VAR6)
    {
        FUN2(VAR4->VAR15, VAR4->VAR14, VAR6);
        return VAR16;
    }
    if (FUN3(VAR2))
    {
        VAR9 = 0;
    }
    FUN4(VAR13, &VAR2->VAR17.VAR18.VAR19, VAR20)
    {
        VAR21 *VAR22 = FUN5(VAR21, VAR23, VAR13->VAR24);
        if (VAR8 >= VAR9)
        {
            break;
        }
        FUN6(VAR22->VAR25.VAR26, &VAR11);
        VAR5.VAR27[VAR8].VAR28.VAR29.VAR30 = VAR22->VAR31;
        VAR5.VAR27[VAR8].VAR28.VAR29.VAR32 = VAR22->VAR33;
        VAR5.VAR27[VAR8].VAR34 = VAR35;
        VAR5.VAR27[VAR8].VAR36 = FUN7(VAR11);
        VAR8++;
    }
    VAR5.VAR37 = FUN8(VAR8);
    FUN9(VAR4->VAR15, VAR8, VAR9);
    VAR7 = FUN10((VAR38 *)&VAR5, VAR6, &VAR4->VAR39);
    VAR4->VAR14 = VAR6 - VAR7;
    return VAR40;
}