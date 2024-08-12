static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = NULL;
    VAR7 *VAR8 = NULL;
    size_t VAR9;
    uint32_t VAR10;
    uint32_t VAR11;
    uint32_t VAR12;
    uint32_t VAR13 = 0;
    uint64_t VAR14;
    VAR3 *VAR15 = NULL;
    VAR9 = sizeof(VAR5);
    VAR6 = FUN2(VAR9);
    strncpy(VAR6->VAR16, VAR17, strlen(VAR17));
    VAR6->VAR18 = FUN3(VAR2, 6);
    VAR10 = VAR2->VAR19.VAR20;
    VAR6->VAR10 = FUN3(VAR2, VAR10);
    VAR11 = sizeof(struct VAR7) + VAR2->VAR21;
    VAR11 = FUN4(VAR11, VAR10);
    VAR6->VAR11 = FUN3(VAR2, VAR11);
    VAR6->VAR22 = FUN3(VAR2, FUN5(VAR2->VAR22, VAR23));
    VAR6->VAR24 = FUN3(VAR2, VAR2->VAR24);
    VAR12 = FUN4(VAR2->VAR25, VAR10) * 2;
    VAR6->VAR12 = FUN3(VAR2, VAR12);
    strncpy(VAR6->VAR26.VAR27, VAR28, sizeof(VAR6->VAR26.VAR27));
    if (VAR2->VAR29 & VAR30)
    {
        VAR13 |= VAR30;
        if (VAR2->VAR29 & VAR31)
        {
            VAR13 |= VAR31;
            if (VAR2->VAR29 & VAR32)
            {
                VAR13 |= VAR32;
                VAR6->VAR13 = FUN3(VAR2, VAR13);
                if (FUN6(VAR2->VAR33, 0, VAR6, VAR9) < 0)
                {
                    FUN7(VAR4, "");
                    goto VAR34;
                    VAR9 = sizeof(VAR7);
                    VAR8 = FUN2(VAR9);
                    VAR8->VAR35 = FUN8(VAR2, VAR2->VAR22);
                    VAR8->VAR36 = FUN8(VAR2, VAR2->VAR19.VAR36);
                    VAR8->VAR37 = FUN3(VAR2, VAR38);
                    VAR14 = VAR39 * VAR10 + VAR9;
                    VAR8->VAR14 = FUN8(VAR2, VAR14);
                    VAR8->VAR21 = FUN8(VAR2, VAR2->VAR21);
                    if (FUN6(VAR2->VAR33, VAR39 * VAR10, VAR8, VAR9) < 0)
                    {
                        FUN7(VAR4, "");
                        goto VAR34;
                        VAR2->VAR40 = FUN2(VAR2->VAR21);
                        VAR2->VAR41 = 0;
                        FUN9(VAR42, VAR2, &VAR15);
                        if (VAR15)
                        {
                            FUN10(VAR4, VAR15);
                            goto VAR34;
                            if (FUN6(VAR2->VAR33, VAR14, VAR2->VAR40, VAR2->VAR21) < 0)
                            {
                                FUN7(VAR4, "");
                                goto VAR34;
                                VAR2->VAR43 = (VAR39 + VAR11) * VAR10;
                                VAR2->VAR44 = (VAR39 + VAR11 + VAR12) * VAR10;
                            VAR34:
                                FUN11(VAR6);
                                FUN11(VAR8);
                                FUN11(VAR2->VAR40)