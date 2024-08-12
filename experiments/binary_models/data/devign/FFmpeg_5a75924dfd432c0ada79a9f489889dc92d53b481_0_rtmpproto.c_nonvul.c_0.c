static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint8_t VAR5[VAR6];
    uint32_t VAR7;
    uint32_t VAR8;
    uint8_t VAR9[VAR6];
    uint8_t VAR10[VAR6];
    uint32_t VAR11;
    uint32_t VAR12 = 0;
    int VAR13 = 0;
    int VAR14 = 0;
    int VAR15;
    VAR14 = FUN2(VAR4->VAR16, VAR5, 1);
    if (VAR14 <= 0)
    {
        FUN3(VAR2, VAR17, "");
        return FUN4(VAR18);
    }
    if (VAR5[0] != 3)
    {
        FUN3(VAR2, VAR17, "");
        return FUN4(VAR18);
    }
    if (FUN5(VAR4->VAR16, VAR5, 1) <= 0)
    {
        FUN3(VAR2, VAR17, "");
        return FUN4(VAR18);
    }
    VAR15 = FUN6(VAR4, &VAR7, &VAR11, VAR9, VAR6);
    if (VAR15)
    {
        FUN3(VAR2, VAR17, "");
        return VAR15;
    }
    if (VAR11)
        FUN3(VAR2, VAR19, "");
    VAR8 = VAR7;
    for (VAR13 = 8; VAR13 < (VAR6); VAR13 += 4)
        FUN7(VAR10 + VAR13, FUN8());
    VAR15 = FUN9(VAR4, VAR8, 0, VAR10, VAR6);
    if (VAR15)
    {
        FUN3(VAR2, VAR17, "");
        return VAR15;
    }
    VAR15 = FUN9(VAR4, VAR7, 0, VAR9, VAR6);
    if (VAR15)
    {
        FUN3(VAR2, VAR17, "");
        return VAR15;
    }
    VAR15 = FUN6(VAR4, &VAR12, &VAR11, VAR5, VAR6);
    if (VAR15)
    {
        FUN3(VAR2, VAR17, "");
        return VAR15;
    }
    if (VAR12 != VAR8)
        FUN3(VAR2, VAR19, "");
    if (memcmp(VAR5 + 8, VAR10 + 8, VAR6 - 8))
        FUN3(VAR2, VAR19, "");
    return 0;
}