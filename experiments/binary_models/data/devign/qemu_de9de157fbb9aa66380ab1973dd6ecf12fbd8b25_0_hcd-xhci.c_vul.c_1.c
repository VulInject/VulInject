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
    assert(VAR4 >= 1 && VAR4 <= VAR3->VAR22);
    VAR15 = FUN2(VAR3->VAR23, VAR3->VAR24);
    VAR16 = FUN3(FUN4(VAR3), VAR15 + 8 * VAR4);
    VAR13 = FUN5(VAR5);
    VAR14 = FUN5(VAR16);
    FUN6("" VAR25 "", VAR13);
    FUN6("" VAR25 "", VAR14);
    FUN7(VAR3, VAR13, VAR17, sizeof(VAR17));
    if (VAR17[0] != 0x0 || VAR17[1] != 0x3)
    {
        fprintf(VAR26, "", VAR17[0], VAR17[1]);
        return VAR27;
    }
    FUN7(VAR3, VAR13 + 32, VAR18, sizeof(VAR18));
    FUN7(VAR3, VAR13 + 64, VAR19, sizeof(VAR19));
    FUN6("", VAR18[0], VAR18[1], VAR18[2], VAR18[3]);
    FUN6("", VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4]);
    VAR10 = FUN8(VAR3, VAR18);
    if (VAR10 == NULL)
    {
        fprintf(VAR26, "");
        return VAR27;
    }
    FUN9(VAR4, VAR10->VAR28);
    VAR12 = VAR10->VAR12;
    if (!VAR12)
    {
        fprintf(VAR26, "", VAR10->VAR28);
        return VAR29;
    }
    for (VAR20 = 0; VAR20 < VAR3->VAR22; VAR20++)
    {
        if (VAR20 == VAR4 - 1)
        {
            continue;
        }
        if (VAR3->VAR30[VAR20].VAR10 == VAR10)
        {
            fprintf(VAR26, "", VAR10->VAR28, VAR20 + 1);
            return VAR27;
        }
    }
    VAR8 = &VAR3->VAR30[VAR4 - 1];
    VAR8->VAR10 = VAR10;
    VAR8->VAR31 = VAR14;
    if (VAR6)
    {
        VAR18[3] = VAR32 << VAR33;
    }
    else
    {
        USBPacket VAR34;
        uint8_t VAR35[1];
        VAR18[3] = (VAR36 << VAR33) | VAR4;
        FUN10(VAR12);
        memset(&VAR34, 0, sizeof(VAR34));
        FUN11(&VAR34, VAR35, sizeof(VAR35));
        FUN12(&VAR34, VAR37, FUN13(VAR12, VAR37, 0), 0, 0, false, false);
        FUN14(VAR12, &VAR34, VAR38 | VAR39, VAR4, 0, 0, NULL);
        assert(VAR34.VAR40 != VAR41);
    }
    VAR21 = FUN15(VAR3, VAR4, 1, VAR14 + 32, VAR19);
    FUN6("", VAR18[0], VAR18[1], VAR18[2], VAR18[3]);
    FUN6("", VAR19[0], VAR19[1], VAR19[2], VAR19[3], VAR19[4]);
    FUN16(VAR3, VAR14, VAR18, sizeof(VAR18));
    FUN16(VAR3, VAR14 + 32, VAR19, sizeof(VAR19));
    VAR3->VAR30[VAR4 - 1].VAR42 = 1;
    return VAR21;
}