static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    int64_t VAR8;
    VAR9 *VAR10 = NULL;
    uint64_t VAR11, VAR12;
    struct
    {
        uint64_t VAR13;
        uint64_t VAR14;
        uint32_t VAR15;
    } QEMU_PACKED VAR16;
    VAR6 = FUN2(VAR2, VAR4->VAR17);
    if (VAR6 < 0)
    {
        goto VAR18;
    }
    VAR6 = FUN2(VAR2, VAR4->VAR19);
    if (VAR6 < 0)
    {
        goto VAR18;
    }
    VAR6 = FUN3(VAR2);
    if (VAR6 < 0)
    {
        goto VAR18;
    }
    FUN4(VAR2->VAR20, VAR21);
    VAR7 = FUN5(VAR4->VAR22, VAR4->VAR23 / sizeof(VAR9));
    VAR12 = (VAR9)VAR4->VAR22 * sizeof(VAR9);
    VAR6 = FUN6(VAR2->VAR20, VAR4->VAR24, VAR7 * VAR4->VAR23, 0);
    if (VAR6 < 0)
    {
        goto VAR25;
    }
    memset(VAR4->VAR26, 0, VAR12);
    FUN4(VAR2->VAR20, VAR27);
    VAR6 = FUN6(VAR2->VAR20, VAR4->VAR23, (2 + VAR7) * VAR4->VAR23, 0);
    if (VAR6 < 0)
    {
        goto VAR25;
    }
    FUN4(VAR2->VAR20, VAR21);
    FUN4(VAR2->VAR20, VAR28);
    VAR16.VAR13 = FUN7(3 * VAR4->VAR23);
    VAR16.VAR14 = FUN7(VAR4->VAR23);
    VAR16.VAR15 = FUN8(1);
    VAR6 = FUN9(VAR2->VAR20, FUN10(VAR29, VAR24), &VAR16, sizeof(VAR16));
    if (VAR6 < 0)
    {
        goto VAR25;
    }
    VAR4->VAR24 = 3 * VAR4->VAR23;
    VAR10 = FUN11(VAR9, VAR4->VAR23 / sizeof(VAR9));
    if (!VAR10)
    {
        VAR6 = -VAR30;
        goto VAR25;
    }
    VAR4->VAR31 = VAR4->VAR23;
    VAR4->VAR32 = VAR4->VAR23 / sizeof(VAR9);
    FUN12(VAR4->VAR33);
    VAR4->VAR33 = VAR10;
    VAR10 = NULL;
    FUN4(VAR2->VAR20, VAR34);
    VAR11 = FUN7(2 * VAR4->VAR23);
    VAR6 = FUN9(VAR2->VAR20, VAR4->VAR23, &VAR11, sizeof(VAR11));
    if (VAR6 < 0)
    {
        goto VAR25;
    }
    VAR4->VAR33[0] = 2 * VAR4->VAR23;
    VAR4->VAR35 = 0;
    assert(3 + VAR7 <= VAR4->VAR36);
    VAR8 = FUN13(VAR2, 3 * VAR4->VAR23 + VAR12);
    if (VAR8 < 0)
    {
        VAR6 = VAR8;
        goto VAR25;
    }
    else if (VAR8 > 0)
    {
        FUN14("");
        FUN15();
    }
    VAR6 = FUN16(VAR2);
    if (VAR6 < 0)
    {
        goto VAR18;
    }
    VAR6 = FUN17(VAR2->VAR20->VAR2, (3 + VAR7) * VAR4->VAR23);
    if (VAR6 < 0)
    {
        goto VAR18;
    }
    return 0;
VAR25:
    VAR2->VAR37 = NULL;
VAR18:
    FUN12(VAR10);
    return VAR6;