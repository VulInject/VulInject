static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR9, VAR3, VAR3)->VAR10;
    struct VAR11 *VAR12 = NULL;
    size_t VAR13, VAR14, VAR15, VAR16;
    if (!FUN3(&VAR8->VAR17->VAR3))
        return -1;
    VAR13 = VAR8->VAR18 ? sizeof(struct VAR11) : sizeof(struct VAR19);
    VAR16 = VAR8->VAR20 ? sizeof(struct VAR19) : 0;
    if (!FUN4(VAR8, VAR6 + VAR13 - VAR16))
        return 0;
    if (!FUN5(VAR8, VAR5, VAR6))
        return VAR6;
    VAR14 = VAR15 = 0;
    while (VAR14 < VAR6)
    {
        VirtQueueElement VAR21;
        int VAR22, VAR23;
        struct iovec VAR24[VAR25];
        VAR23 = 0;
        if (FUN6(VAR8->VAR26, &VAR21) == 0)
        {
            if (VAR15 == 0)
                return -1;
            fprintf(VAR27, ""
                            ""
                            "",
                    VAR15, VAR8->VAR18, VAR14, VAR6, VAR13, VAR16, VAR8->VAR28.VAR29);
            FUN7(1);
        }
        if (VAR21.VAR30 < 1)
        {
            fprintf(VAR27, "");
            FUN7(1);
        }
        if (!VAR8->VAR18 && VAR21.VAR31[0].VAR32 != VAR13)
        {
            fprintf(VAR27, "");
            FUN7(1);
        }
        memcpy(&VAR24, &VAR21.VAR31[0], sizeof(VAR24[0]) * VAR21.VAR30);
        if (VAR15 == 0)
        {
            if (VAR8->VAR18)
                VAR12 = (struct VAR11 *)VAR24[0].VAR33;
            VAR14 += FUN8(VAR8, VAR24, VAR21.VAR30, VAR5 + VAR14, VAR6 - VAR14, VAR13);
            VAR23 += VAR13;
        }
        VAR22 = FUN9(VAR24, VAR21.VAR30, VAR5 + VAR14, VAR6 - VAR14);
        VAR23 += VAR22;
        VAR14 += VAR22;
        if (!VAR8->VAR18 && VAR14 < VAR6)
        {
            fprintf(VAR27, ""
                            ""
                            "",
                    VAR15, VAR8->VAR18, VAR14, VAR6, VAR13, VAR16);
            return VAR6;
        }
        FUN10(VAR8->VAR26, &VAR21, VAR23, VAR15++);
    }
    if (VAR12)
        VAR12->VAR34 = VAR15;
    FUN11(VAR8->VAR26, VAR15);
    FUN12(&VAR8->VAR28, VAR8->VAR26);
    return VAR6;
}