static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = &VAR8->VAR12;
    const VAR13 *VAR14 = VAR6->VAR3;
    int VAR15 = VAR6->VAR16;
    int VAR17, VAR18;
    float *VAR19;
    float VAR20[VAR21];
    float VAR22;
    float *VAR23;
    float VAR24;
    float VAR25, VAR26;
    float VAR27[VAR21];
    float VAR28[VAR29];
    float VAR30[VAR29];
    float VAR31;
    int VAR32, VAR33, VAR34;
    VAR8->VAR35.VAR36 = 4 * VAR29;
    if ((VAR34 = VAR2->FUN2(VAR2, &VAR8->VAR35)) < 0)
    {
        FUN3(VAR2, VAR37, "");
        return VAR34;
    }
    VAR19 = (float *)VAR8->VAR35.VAR3[0];
    VAR18 = FUN4(VAR8, VAR14);
    VAR17 = ((VAR38[VAR8->VAR39] + 7) >> 3) + 1;
    if (VAR15 < VAR17)
    {
        FUN3(VAR2, VAR37, "", VAR15);
        *VAR4 = 0;
        return VAR15;
    }
    if (!VAR8->VAR40 || VAR8->VAR39 > VAR41)
        FUN3(VAR2, VAR37, "");
    if (VAR8->VAR39 == VAR41)
        FUN5(VAR2, "", 1);
    if (VAR8->VAR39 >= VAR41)
        return -1;
    FUN6((VAR42 *)&VAR8->VAR12, sizeof(VAR10), VAR14 + VAR18, VAR43[VAR8->VAR39]);
    if (VAR8->VAR39 == VAR44)
    {
        FUN7(VAR11->VAR45, VAR8->VAR46);
    }
    else
    {
        FUN8(VAR11->VAR45, VAR8->VAR46);
    }
    FUN9(VAR8->VAR46, VAR8->VAR47);
    FUN10(VAR8->VAR46, VAR48, VAR49 - 1);
    VAR26 = FUN11(VAR8->VAR46, VAR8->VAR50);
    VAR8->VAR46[VAR49 - 1] *= 2.0;
    FUN12(VAR8->VAR51[3], VAR8->VAR46, VAR49);
    if (VAR8->VAR52)
    {
        VAR8->VAR52 = 0;
        memcpy(VAR8->VAR53, VAR8->VAR51[3], VAR49 * sizeof(double));
    }
    FUN13(VAR8->VAR51, VAR8->VAR53);
    for (VAR32 = 0; VAR32 < 4; VAR32++)
        FUN14(VAR8->VAR51[VAR32], VAR8->VAR54[VAR32], VAR49);
    for (VAR32 = 0; VAR32 < 4; VAR32++)
    {
        const VAR55 *VAR56 = &VAR11->VAR57[VAR32];
        float *VAR58 = VAR19 + VAR32 * VAR29;
        FUN15(VAR8, VAR56, VAR32);
        FUN16(VAR8->VAR59, VAR56->VAR60, VAR56->VAR61, VAR8->VAR39);
        FUN17(VAR8, VAR8->VAR59);
        FUN18(VAR56->VAR62, VAR8->VAR39, &VAR22, &VAR8->VAR63[0]);
        VAR8->VAR64[0] = FUN19(VAR22, FUN20(VAR8->VAR59, VAR8->VAR59, VAR21) / VAR21, VAR8->VAR65, VAR66, VAR67);
        VAR25 = FUN21(VAR8->VAR68, VAR8->VAR63[0], VAR8->VAR59, VAR8->VAR64[0]);
        VAR8->VAR69 = VAR25 * 0.25 + 0.25;
        for (VAR33 = 0; VAR33 < VAR21; VAR33++)
        {
            VAR8->VAR70[VAR33] *= VAR8->VAR63[0];
            VAR8->VAR70[VAR33] += VAR8->VAR64[0] * VAR8->VAR59[VAR33];
            VAR8->VAR70[VAR33] = FUN22(VAR8->VAR70[VAR33]);
        }
        VAR24 = FUN23(VAR8->VAR64[0], &VAR8->VAR71, VAR25, VAR26);
        VAR23 = FUN24(VAR8, VAR8->VAR59, VAR20);
        FUN25(VAR23, VAR25);
        FUN26(VAR8, VAR8->VAR54[VAR32], VAR27, VAR24, VAR23, &VAR8->VAR72[VAR49]);
        FUN27(&VAR8->VAR73[VAR74], &VAR8->VAR72[VAR49], VAR75, VAR8->VAR76);
        FUN28(&VAR8->VAR73[VAR74], &VAR8->VAR73[VAR74], VAR77, VAR78, VAR79, VAR8->VAR80, VAR21);
        FUN29(VAR58, &VAR8->VAR73[VAR81], VAR29);
        FUN28(VAR30, &VAR8->VAR73[VAR74], VAR77, VAR82, VAR83, VAR8->VAR84, VAR21);
        VAR31 = FUN30(VAR8, VAR30, VAR56->VAR31, VAR11->VAR85);
        FUN31(VAR8, VAR28, VAR27, VAR31);
        FUN32(VAR8, VAR32, &VAR8->VAR86[VAR87], VAR28, VAR8->VAR46, VAR8->VAR50);
        FUN33(VAR30, VAR88, VAR8->VAR89, &VAR8->VAR86[VAR87]);
        if (VAR8->VAR39 == VAR90)
            FUN33(VAR30, VAR91, VAR8->VAR92, VAR30);
        for (VAR33 = 0; VAR33 < VAR29; VAR33++)
            VAR58[VAR33] = (VAR58[VAR33] + VAR30[VAR33]) * (1.0f / (1 << 15));
        FUN34(VAR8);
    }
    memcpy(VAR8->VAR53, VAR8->VAR51[3], VAR49 * sizeof(VAR8->VAR51[3][0]));
    memcpy(VAR8->VAR50, VAR8->VAR46, VAR49 * sizeof(float));
    *VAR4 = 1;
    *(VAR93 *)VAR3 = VAR8->VAR35;
    return VAR17;
}