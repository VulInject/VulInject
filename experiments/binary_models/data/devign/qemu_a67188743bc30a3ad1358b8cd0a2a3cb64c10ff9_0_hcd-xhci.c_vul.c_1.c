static VAR1 FUN1(VAR2 *VAR3, unsigned int VAR4, uint64_t VAR5, bool VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    dma_addr_t VAR13, VAR14, VAR15;
    uint64_t VAR16;
    uint32_t VAR17[2];
    uint32_t VAR18[4];
    uint32_t VAR19[5];
    int VAR20;
    TRBCCode VAR21;
    FUN2(VAR4);
    assert(VAR4 >= 1 && VAR4 <= VAR3->VAR22);
    VAR15 = FUN3(VAR3->VAR23, VAR3->VAR24);
    VAR16 = FUN4(&VAR3->VAR25, VAR15 + 8 * VAR4);
    VAR13 = FUN5(VAR5);
    VAR14 = FUN5(VAR16);
    FUN6("" VAR26 "", VAR13);
    FUN6("" VAR26 "", VAR14);
    FUN7(VAR3, VAR13, VAR17, sizeof(VAR17));
    if (VAR17[0] != 0x0 || VAR17[1] != 0x3)
    {
        fprintf(VAR27, "", VAR17[0], VAR17[1]);
        return VAR28;
    }
    FUN7(VAR3, VAR13 + 32, VAR18, sizeof(VAR18));
    FUN7(VAR3, VAR13 + 64, VAR19, sizeof(VAR19));
    FUN6("", VAR18[0], VAR18[1], VAR18[2], VAR18[3]);
    FUN6("", VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4]);
    VAR10 = FUN8(VAR3, VAR18);
    if (VAR10 == NULL)
    {
        fprintf(VAR27, "");
        return VAR28;
    }
    VAR12 = VAR10->VAR12;
    if (!VAR12)
    {
        fprintf(VAR27, "", VAR10->VAR29);
        return VAR30;
    }
    for (VAR20 = 0; VAR20 < VAR3->VAR22; VAR20++)
    {
        if (VAR20 == VAR4 - 1)
        {
            continue;
        }
        if (VAR3->VAR31[VAR20].VAR10 == VAR10)
        {
            fprintf(VAR27, "", VAR10->VAR29, VAR20 + 1);
            return VAR28;
        }
    }
    VAR8 = &VAR3->VAR31[VAR4 - 1];
    VAR8->VAR10 = VAR10;
    VAR8->VAR32 = VAR14;
    if (VAR6)
    {
        VAR18[3] = VAR33 << VAR34;
    }
    else
    {
        USBPacket VAR35;
        VAR18[3] = (VAR36 << VAR34) | VAR4;
        FUN9(VAR12);
        FUN10(&VAR35, VAR37, FUN11(VAR12, VAR37, 0), 0, 0, false, false);
        FUN12(VAR12, &VAR35, VAR38 | VAR39, VAR4, 0, 0, NULL);
        assert(VAR35.VAR40 != VAR41);
    }
    VAR21 = FUN13(VAR3, VAR4, 1, VAR14 + 32, VAR19);
    FUN6("", VAR18[0], VAR18[1], VAR18[2], VAR18[3]);
    FUN6("", VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4]);
    FUN14(VAR3, VAR14, VAR18, sizeof(VAR18));
    FUN14(VAR3, VAR14 + 32, VAR19, sizeof(VAR19));
    return VAR21;