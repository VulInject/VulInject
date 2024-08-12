static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = (VAR10 *)VAR8->VAR12->VAR3;
    VAR13 *VAR14 = VAR11->VAR15;
    CUcontext VAR16, VAR17 = VAR14->VAR17;
    VAR18 *VAR19 = VAR3;
    CUVIDSOURCEDATAPACKET VAR20;
    AVPacket VAR21 = {0};
    AVPacket VAR22 = {0};
    CUdeviceptr VAR23 = 0;
    int VAR24 = 0, VAR25 = 0;
    if (VAR8->VAR26 && VAR6->VAR27)
    {
        if ((VAR24 = FUN2(&VAR21, VAR6)) < 0)
        {
            FUN3(VAR2, VAR28, "");
            return VAR24;
        }
        if ((VAR24 = FUN4(VAR8->VAR26, &VAR21)) < 0)
        {
            FUN3(VAR2, VAR28, "");
            FUN5(&VAR21);
            return VAR24;
        }
        if ((VAR24 = FUN6(VAR8->VAR26, &VAR22)) < 0)
        {
            FUN3(VAR2, VAR28, "");
            return VAR24;
        }
        VAR6 = &VAR22;
    }
    VAR24 = FUN7(FUN8(VAR17));
    if (VAR24 < 0)
    {
        FUN5(&VAR22);
        return VAR24;
    }
    memset(&VAR20, 0, sizeof(VAR20));
    if (VAR6->VAR27)
    {
        VAR20.VAR29 = VAR6->VAR27;
        VAR20.VAR30 = VAR6->VAR3;
        if (VAR6->VAR31 != VAR32)
        {
            VAR20.VAR33 = VAR34;
            if (VAR2->VAR35.VAR36 && VAR2->VAR35.VAR37)
                VAR20.VAR38 = FUN9(VAR6->VAR31, VAR2->VAR35, (VAR39){1, 10000000});
            else
                VAR20.VAR38 = VAR6->VAR31;
        }
    }
    else
    {
        VAR20.VAR33 = VAR40;
    }
    VAR24 = FUN7(FUN10(VAR8->VAR41, &VAR20));
    FUN5(&VAR22);
    if (VAR24 < 0)
    {
        if (VAR8->VAR42)
            VAR24 = VAR8->VAR42;
        goto VAR43;
    }
    if (FUN11(VAR8->VAR44))
    {
        CUVIDPARSERDISPINFO VAR45;
        CUVIDPROCPARAMS VAR46;
        unsigned int VAR47 = 0;
        int VAR48 = 0;
        int VAR49;
        FUN12(VAR8->VAR44, &VAR45, sizeof(VAR50), NULL);
        memset(&VAR46, 0, sizeof(VAR46));
        VAR46.VAR51 = VAR45.VAR51;
        VAR46.VAR52 = 0;
        VAR46.VAR53 = VAR45.VAR53;
        VAR24 = FUN7(FUN13(VAR8->VAR54, VAR45.VAR55, &VAR23, &VAR47, &VAR46));
        if (VAR24 < 0)
            goto VAR43;
        if (VAR2->VAR56 == VAR57)
        {
            VAR24 = FUN14(VAR8->VAR58, VAR19, 0);
            if (VAR24 < 0)
            {
                FUN3(VAR2, VAR28, "");
                goto VAR43;
            }
            VAR24 = FUN15(VAR2, VAR19);
            if (VAR24 < 0)
            {
                FUN3(VAR2, VAR28, "");
                goto VAR43;
            }
            for (VAR49 = 0; VAR49 < 2; VAR49++)
            {
                CUDA_MEMCPY2D VAR59 = {
                    .VAR60 = VAR61,
                    .VAR62 = VAR61,
                    .VAR63 = VAR23,
                    .VAR64 = (VAR65)VAR19->VAR3[VAR49],
                    .VAR66 = VAR47,
                    .VAR67 = VAR19->VAR68[VAR49],
                    .VAR69 = VAR48,
                    .VAR70 = FUN16(VAR47, VAR19->VAR68[VAR49]),
                    .VAR71 = VAR2->VAR72 >> (VAR49 ? 1 : 0),
                };
                VAR24 = FUN7(FUN17(&VAR59));
                if (VAR24 < 0)
                    goto VAR43;
                VAR48 += VAR2->VAR72;
            }
        }
        else if (VAR2->VAR56 == VAR73)
        {
            VAR18 *VAR74 = FUN18();
            if (!VAR74)
            {
                FUN3(VAR2, VAR28, "");
                VAR24 = FUN19(VAR75);
                goto VAR43;
            }
            VAR74->VAR76 = VAR57;
            VAR74->VAR77 = FUN20(VAR8->VAR58);
            VAR74->VAR3[0] = (VAR78 *)VAR23;
            VAR74->VAR68[0] = VAR47;
            VAR74->VAR3[1] = (VAR78 *)(VAR23 + VAR2->VAR72 * VAR47);
            VAR74->VAR68[1] = VAR47;
            VAR74->VAR79 = VAR2->VAR79;
            VAR74->VAR80 = VAR2->VAR80;
            VAR24 = FUN21(VAR2, VAR19, 0);
            if (VAR24 < 0)
            {
                FUN3(VAR2, VAR28, "");
                FUN22(&VAR74);
                goto VAR43;
            }
            VAR24 = FUN23(VAR19, VAR74, 0);
            if (VAR24)
            {
                FUN3(VAR2, VAR28, "");
                FUN22(&VAR74);
                goto VAR43;
            }
            FUN22(&VAR74);
        }
        else
        {
            VAR24 = VAR81;
            goto VAR43;
        }
        VAR19->VAR79 = VAR2->VAR79;
        VAR19->VAR80 = VAR2->VAR80;
        if (VAR2->VAR35.VAR36 && VAR2->VAR35.VAR37)
            VAR19->VAR31 = FUN9(VAR45.VAR38, (VAR39){1, 10000000}, VAR2->VAR35);
        else
            VAR19->VAR31 = VAR45.VAR38;
        VAR19->VAR82 = VAR19->VAR31;
        FUN24(VAR19, -1);
        FUN25(VAR19, 0);
        FUN26(VAR19, -1);
        VAR19->VAR83 = !VAR45.VAR51;
        if (!VAR45.VAR51)
            VAR19->VAR53 = VAR45.VAR53;
        *VAR4 = 1;
    }
    else
    {
        *VAR4 = 0;
    }
VAR43:
    if (VAR23)
        VAR25 = FUN7(FUN27(VAR8->VAR54, VAR23));
    VAR25 = FUN7(FUN28(&VAR16));
    if (VAR25 < 0)
        return VAR25;
    else
        return VAR24;
}