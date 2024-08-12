static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    unsigned char VAR12[256];
    int VAR13;
    unsigned int VAR14;
    unsigned int VAR15;
    VAR6->VAR16 = NULL;
    VAR6->VAR17 = NULL;
    VAR6->VAR18 = 0;
    if (FUN2(VAR9, VAR12, 16) != 16)
        return FUN3(VAR19);
    VAR14 = FUN4(&VAR12[4]);
    VAR6->VAR20 = FUN4(&VAR12[8]);
    if (VAR6->VAR20 == 0)
    {
        if (FUN2(VAR9, VAR12, 20) != 20)
            return FUN3(VAR19);
        VAR6->VAR21 = VAR22;
        VAR6->VAR23 = 22050;
        VAR6->VAR24 = 1;
        VAR6->VAR25 = 8;
    }
    else
    {
        if (FUN2(VAR9, VAR12, 32) != 32)
            return FUN3(VAR19);
        VAR6->VAR23 = FUN5(&VAR12[24]);
        VAR6->VAR24 = VAR12[21];
        VAR6->VAR25 = VAR12[22];
        if (VAR12[23] == 2)
            VAR6->VAR21 = VAR26;
        else if (VAR6->VAR25 == 8)
            VAR6->VAR21 = VAR22;
        else if (VAR6->VAR25 == 16)
            VAR6->VAR21 = VAR27;
        else
            VAR6->VAR21 = VAR28;
    }
    if (FUN4(&VAR12[0]) != VAR29)
        return VAR30;
    if (FUN4(&VAR12[8]) == VAR31)
    {
        VAR6->VAR32 = VAR33;
    }
    else
        VAR6->VAR32 = VAR28;
    if (VAR6->VAR32)
    {
        VAR11 = FUN6(VAR2, 0);
        if (!VAR11)
            return FUN3(VAR34);
        VAR6->VAR35 = VAR11->VAR36;
        VAR11->VAR37->VAR38 = VAR39;
        VAR11->VAR37->VAR40 = VAR6->VAR32;
        VAR11->VAR37->VAR41 = 0;
        VAR11->VAR37->VAR42 = FUN4(&VAR12[16]);
        VAR11->VAR37->VAR43 = FUN4(&VAR12[12]);
    }
    if (VAR6->VAR21)
    {
        VAR11 = FUN6(VAR2, 0);
        if (!VAR11)
            return FUN3(VAR34);
        VAR6->VAR44 = VAR11->VAR36;
        VAR11->VAR37->VAR38 = VAR45;
        VAR11->VAR37->VAR40 = VAR6->VAR21;
        VAR11->VAR37->VAR41 = 1;
        VAR11->VAR37->VAR46 = VAR6->VAR24;
        VAR11->VAR37->VAR47 = VAR6->VAR23;
        if (VAR6->VAR21 == VAR26)
        {
            VAR11->VAR37->VAR48 = 18 * 8 / 32;
            VAR11->VAR37->VAR49 = VAR11->VAR37->VAR46 * 18;
        }
        else
        {
            VAR11->VAR37->VAR48 = VAR6->VAR25;
            VAR11->VAR37->VAR49 = VAR11->VAR37->VAR46 * VAR11->VAR37->VAR48 / 8;
        }
        VAR11->VAR37->VAR50 = VAR11->VAR37->VAR46 * VAR11->VAR37->VAR47 * VAR11->VAR37->VAR48;
    }
    if (FUN2(VAR9, VAR12, 16) != 16)
        return FUN3(VAR19);
    if (FUN4(&VAR12[0]) != VAR51)
        return VAR30;
    VAR6->VAR52 = FUN4(&VAR12[8]);
    VAR6->VAR53 = FUN4(&VAR12[12]);
    if (VAR6->VAR53 >= VAR54 / sizeof(VAR55))
        return -1;
    VAR6->VAR16 = FUN7(VAR6->VAR53 * sizeof(VAR55));
    if (!VAR6->VAR16)
        return FUN3(VAR34);
    for (VAR13 = 0; VAR13 < VAR2->VAR56; VAR13++)
        FUN8(VAR2->VAR57[VAR13], 33, 1, VAR6->VAR52);
    VAR15 = 0;
    for (VAR13 = 0; VAR13 < VAR6->VAR53; VAR13++)
    {
        if (FUN2(VAR9, VAR12, 16) != 16)
        {
            FUN9(VAR6->VAR16);
            return FUN3(VAR19);
        }
        VAR6->VAR16[VAR13].VAR58 = VAR14 + FUN4(&VAR12[0]);
        VAR6->VAR16[VAR13].VAR59 = FUN4(&VAR12[4]);
        if (FUN4(&VAR12[8]) == 0xFFFFFFFF)
        {
            VAR6->VAR16[VAR13].VAR60 = VAR6->VAR44;
            VAR6->VAR16[VAR13].VAR61 = VAR15;
            VAR6->VAR16[VAR13].VAR61 *= VAR6->VAR52;
            VAR6->VAR16[VAR13].VAR61 /= VAR6->VAR23;
            if (VAR6->VAR21 == VAR26)
                VAR15 += (VAR6->VAR16[VAR13].VAR59 * 32 / (18 * VAR6->VAR24));
            else
                VAR15 += (VAR6->VAR16[VAR13].VAR59 / (VAR6->VAR24 * VAR6->VAR25 / 8));
        }
        else
        {
            VAR6->VAR16[VAR13].VAR60 = VAR6->VAR35;
            VAR6->VAR16[VAR13].VAR61 = FUN4(&VAR12[8]) & 0x7FFFFFFF;
            VAR6->VAR16[VAR13].VAR62 = (VAR12[8] & 0x80) ? 0 : 1;
        }
    }
    VAR6->VAR63 = 0;
    return 0;
}