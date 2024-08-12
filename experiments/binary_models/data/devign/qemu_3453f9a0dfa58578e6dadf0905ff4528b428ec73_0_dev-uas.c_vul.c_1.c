static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint16_t VAR5 = FUN2(VAR4->VAR6.VAR5);
    uint64_t VAR7 = FUN3(VAR4->VAR8.VAR9);
    VAR10 *VAR11 = FUN4(VAR2, VAR7);
    int VAR9 = FUN5(VAR7);
    VAR12 *VAR13;
    uint16_t VAR14;
    VAR13 = FUN6(VAR2, FUN2(VAR4->VAR6.VAR5));
    if (VAR13)
    {
        goto VAR15;
        if (VAR11 == NULL)
        {
            goto VAR16;
            switch (VAR4->VAR8.VAR17)
            {
            case VAR18:
                VAR14 = FUN2(VAR4->VAR8.VAR14);
                FUN7(VAR2->VAR11.VAR19, VAR5, VAR14);
                VAR13 = FUN6(VAR2, VAR14);
                if (VAR13 && VAR13->VAR11 == VAR11)
                {
                    FUN8(VAR13->VAR13);
                    FUN9(VAR2, VAR5, VAR20, 0);
                    break;
                case VAR21:
                    FUN10(VAR2->VAR11.VAR19, VAR5, VAR9);
                    FUN11(&VAR11->VAR22);
                    FUN9(VAR2, VAR5, VAR20, 0);
                    break;
                default:
                    FUN12(VAR2->VAR11.VAR19, VAR5, VAR4->VAR8.VAR17);
                    FUN9(VAR2, VAR5, VAR23, 0);
                    break;
                    return;
                VAR24:
                    FUN9(VAR2, VAR5, VAR25, 0);
                    return;
                VAR15:
                    FUN9(VAR2, VAR13->VAR5, VAR26, 0);
                    return;
                VAR16:
                    FUN9(VAR2, VAR5, VAR27, 0);