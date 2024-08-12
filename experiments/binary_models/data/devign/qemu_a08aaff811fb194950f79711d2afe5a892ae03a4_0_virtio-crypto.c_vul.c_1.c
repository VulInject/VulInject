FUN1(VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, struct VAR7 *VAR8, unsigned int VAR9)
{
    VAR10 *VAR11 = FUN2(VAR2);
    VAR12 *VAR13;
    uint32_t VAR14 = 0, VAR15 = 0;
    uint32_t VAR16 = 0;
    uint32_t VAR17 = 0, VAR18 = 0;
    uint32_t VAR19 = 0, VAR20 = 0;
    uint32_t VAR21 = 0, VAR22 = 0;
    size_t VAR23, VAR24 = 0;
    size_t VAR25;
    if (VAR4)
    {
        VAR16 = FUN3(&VAR4->VAR16);
        VAR14 = FUN3(&VAR4->VAR26);
        VAR15 = FUN3(&VAR4->VAR27);
    }
    else if (VAR6)
    {
        VAR16 = FUN3(&VAR6->VAR16);
        VAR14 = FUN3(&VAR6->VAR26);
        VAR15 = FUN3(&VAR6->VAR27);
        VAR17 = FUN3(&VAR6->VAR17);
        VAR18 = FUN3(&VAR6->VAR18);
        VAR19 = FUN3(&VAR6->VAR19);
        VAR21 = FUN3(&VAR6->VAR21);
        VAR22 = FUN3(&VAR6->VAR22);
        VAR20 = FUN3(&VAR6->VAR20);
    }
    else
    {
        return NULL;
    }
    VAR23 = VAR16 + VAR17 + VAR14 + VAR15 + VAR18;
    if (FUN4(VAR23 > VAR11->VAR28.VAR29))
    {
        FUN5(VAR2, "");
        return NULL;
    }
    VAR13 = FUN6(sizeof(VAR12) + VAR23);
    VAR13->VAR16 = VAR16;
    VAR13->VAR14 = VAR14;
    VAR13->VAR15 = VAR15;
    VAR13->VAR17 = VAR17;
    VAR13->VAR30 = VAR18;
    VAR13->VAR19 = VAR19;
    VAR13->VAR20 = VAR20;
    VAR13->VAR21 = VAR21;
    VAR13->VAR22 = VAR22;
    if (VAR13->VAR16 > 0)
    {
        FUN7("" VAR31 "", VAR13->VAR16);
        VAR13->VAR32 = VAR13->VAR33 + VAR24;
        VAR25 = FUN8(VAR8, VAR9, 0, VAR13->VAR32, VAR13->VAR16);
        if (FUN4(VAR25 != VAR13->VAR16))
        {
            FUN5(VAR2, "");
            goto VAR34;
        }
        FUN9(&VAR8, &VAR9, VAR13->VAR16);
        VAR24 += VAR13->VAR16;
    }
    if (VAR13->VAR17 > 0)
    {
        FUN7("" VAR31 "", VAR13->VAR17);
        VAR13->VAR35 = VAR13->VAR33 + VAR24;
        VAR25 = FUN8(VAR8, VAR9, 0, VAR13->VAR35, VAR13->VAR17);
        if (FUN4(VAR25 != VAR13->VAR17))
        {
            FUN5(VAR2, "");
            goto VAR34;
        }
        FUN9(&VAR8, &VAR9, VAR13->VAR17);
        VAR24 += VAR13->VAR17;
    }
    if (VAR13->VAR14 > 0)
    {
        FUN7("" VAR31 "", VAR13->VAR14);
        VAR13->VAR36 = VAR13->VAR33 + VAR24;
        VAR25 = FUN8(VAR8, VAR9, 0, VAR13->VAR36, VAR13->VAR14);
        if (FUN4(VAR25 != VAR13->VAR14))
        {
            FUN5(VAR2, "");
            goto VAR34;
        }
        FUN9(&VAR8, &VAR9, VAR13->VAR14);
        VAR24 += VAR13->VAR14;
    }
    VAR13->VAR37 = VAR13->VAR33 + VAR24;
    VAR24 += VAR13->VAR15;
    FUN7("" VAR31 "", VAR13->VAR15);
    if (VAR18 > 0)
    {
        FUN7("" VAR31 "", VAR18);
        VAR13->VAR38 = VAR13->VAR33 + VAR24;
    }
    return VAR13;
VAR34:
    FUN10(VAR13);
    return NULL;
}