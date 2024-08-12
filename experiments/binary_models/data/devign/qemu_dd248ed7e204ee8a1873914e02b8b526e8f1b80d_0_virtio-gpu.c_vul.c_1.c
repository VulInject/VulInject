static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4)
{
    struct VAR5 *VAR6;
    struct VAR7 *VAR8;
    pixman_format_code_t VAR9;
    uint32_t VAR10;
    int VAR11;
    struct virtio_gpu_set_scanout VAR12;
    FUN2(VAR12);
    FUN3(VAR12.VAR13, VAR12.VAR14, VAR12.VAR15.VAR16, VAR12.VAR15.VAR17, VAR12.VAR15.VAR18, VAR12.VAR15.VAR19);
    if (VAR12.VAR13 >= VAR2->VAR20.VAR21)
    {
        FUN4(VAR22, "", VAR23, VAR12.VAR13);
        VAR4->VAR24 = VAR25;
        return;
    }
    VAR2->VAR26 = 1;
    if (VAR12.VAR14 == 0)
    {
        VAR8 = &VAR2->VAR8[VAR12.VAR13];
        if (VAR8->VAR14)
        {
            VAR6 = FUN5(VAR2, VAR8->VAR14);
            if (VAR6)
            {
                VAR6->VAR27 &= ~(1 << VAR12.VAR13);
            }
        }
        if (VAR12.VAR13 == 0)
        {
            FUN4(VAR22, "", VAR23, VAR12.VAR13);
            VAR4->VAR24 = VAR25;
            return;
        }
        FUN6(VAR2->VAR8[VAR12.VAR13].VAR28, NULL);
        VAR8->VAR29 = NULL;
        VAR8->VAR16 = 0;
        VAR8->VAR17 = 0;
        return;
    }
    VAR6 = FUN5(VAR2, VAR12.VAR14);
    if (!VAR6)
    {
        FUN4(VAR22, "", VAR23, VAR12.VAR14);
        VAR4->VAR24 = VAR30;
        return;
    }
    if (VAR12.VAR15.VAR18 > VAR6->VAR16 || VAR12.VAR15.VAR19 > VAR6->VAR17 || VAR12.VAR15.VAR16 > VAR6->VAR16 || VAR12.VAR15.VAR17 > VAR6->VAR17 || VAR12.VAR15.VAR18 + VAR12.VAR15.VAR16 > VAR6->VAR16 || VAR12.VAR15.VAR19 + VAR12.VAR15.VAR17 > VAR6->VAR17)
    {
        FUN4(VAR22, ""
                                       "",
                      VAR23, VAR12.VAR13, VAR12.VAR14, VAR12.VAR15.VAR18, VAR12.VAR15.VAR19, VAR12.VAR15.VAR16, VAR12.VAR15.VAR17, VAR6->VAR16, VAR6->VAR17);
        VAR4->VAR24 = VAR31;
        return;
    }
    VAR8 = &VAR2->VAR8[VAR12.VAR13];
    VAR9 = FUN7(VAR6->VAR32);
    VAR11 = (FUN8(VAR9) + 7) / 8;
    VAR10 = (VAR12.VAR15.VAR18 * VAR11) + VAR12.VAR15.VAR19 * FUN9(VAR6->VAR32);
    if (!VAR8->VAR29 || FUN10(VAR8->VAR29) != ((VAR33 *)FUN11(VAR6->VAR32) + VAR10) || VAR8->VAR16 != VAR12.VAR15.VAR16 || VAR8->VAR17 != VAR12.VAR15.VAR17)
    {
        VAR34 *VAR35;
        void *VAR36 = (VAR33 *)FUN11(VAR6->VAR32) + VAR10;
        VAR35 = FUN12(VAR9, VAR12.VAR15.VAR16, VAR12.VAR15.VAR17, VAR36, FUN9(VAR6->VAR32));
        FUN13(VAR6->VAR32);
        FUN14(VAR35, VAR37, VAR6->VAR32);
        VAR8->VAR29 = FUN15(VAR35);
        if (!VAR8->VAR29)
        {
            VAR4->VAR24 = VAR38;
            return;
        }
        FUN6(VAR2->VAR8[VAR12.VAR13].VAR28, VAR8->VAR29);
    }
    VAR6->VAR27 |= (1 << VAR12.VAR13);
    VAR8->VAR14 = VAR12.VAR14;
    VAR8->VAR18 = VAR12.VAR15.VAR18;
    VAR8->VAR19 = VAR12.VAR15.VAR19;
    VAR8->VAR16 = VAR12.VAR15.VAR16;
    VAR8->VAR17 = VAR12.VAR15.VAR17;