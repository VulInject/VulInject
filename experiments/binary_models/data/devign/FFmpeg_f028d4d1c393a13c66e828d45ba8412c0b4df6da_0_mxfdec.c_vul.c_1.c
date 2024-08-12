static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    KLVPacket VAR8;
    int64_t VAR9 = 0;
    VAR6->VAR10 = VAR11;
    if (!FUN2(VAR2->VAR12, VAR13, 14))
    {
        FUN3(VAR2, VAR14, "");
        return VAR15;
    }
    FUN4(VAR2->VAR12, -14, VAR16);
    VAR6->VAR17 = VAR2;
    VAR6->VAR18 = FUN5(VAR2->VAR12);
    while (!VAR2->VAR12->VAR19)
    {
        const VAR20 *VAR21;
        if (FUN6(&VAR8, VAR2->VAR12) < 0)
        {
            if (FUN7(VAR6) <= 0)
                break;
            else
                continue;
        }
        FUN8(VAR2, "", VAR8.VAR22);
        FUN9(VAR2, "" VAR23 "" VAR24 "", VAR8.VAR25, VAR8.VAR26);
        if (FUN10(VAR8.VAR22, VAR27) || FUN10(VAR8.VAR22, VAR28) || FUN10(VAR8.VAR22, VAR29) || FUN10(VAR8.VAR22, VAR30))
        {
            if (!VAR6->VAR31->VAR9)
            {
                FUN11(VAR2, VAR6, &VAR8);
            }
            if (!VAR9)
                VAR9 = VAR8.VAR26;
            if (FUN12(VAR6) <= 0)
                break;
            continue;
        }
        else if (!memcmp(VAR8.VAR22, VAR13, 13) && VAR8.VAR22[13] >= 2 && VAR8.VAR22[13] <= 4 && VAR6->VAR31)
        {
            if (FUN7(VAR6) <= 0)
                break;
        }
        for (VAR21 = VAR32; VAR21->read; VAR21++)
        {
            if (FUN10(VAR8.VAR22, VAR21->VAR22))
            {
                int VAR33;
                if (VAR8.VAR22[5] == 0x53)
                {
                    VAR33 = FUN13(VAR6, &VAR8, VAR21->read, VAR21->VAR34, VAR21->VAR35);
                }
                else
                {
                    uint64_t VAR36 = FUN5(VAR2->VAR12) + VAR8.VAR25;
                    VAR33 = VAR21->read(VAR6, VAR2->VAR12, 0, VAR8.VAR25, VAR8.VAR22, VAR8.VAR26);
                    FUN4(VAR2->VAR12, VAR36, VAR37);
                }
                if (VAR33 < 0)
                {
                    FUN3(VAR2, VAR14, "");
                    return VAR33;
                }
                break;
            }
        }
        if (!VAR21->read)
            FUN14(VAR2->VAR12, VAR8.VAR25);
    }
    if (!VAR9)
    {
        FUN3(VAR2, VAR14, "");
        return VAR15;
    }
    FUN4(VAR2->VAR12, VAR9, VAR37);
    FUN15(VAR6);
    return FUN16(VAR6);
}