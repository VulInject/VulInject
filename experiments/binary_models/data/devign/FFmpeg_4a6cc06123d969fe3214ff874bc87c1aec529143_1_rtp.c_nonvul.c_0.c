int FUN1(VAR1 *VAR2, int VAR3)
{
    ByteIOContext VAR4;
    VAR5 *VAR6;
    int VAR7;
    int VAR8;
    VAR9 *VAR10 = &VAR2->VAR11;
    uint32_t VAR12;
    uint32_t VAR13;
    uint32_t VAR14;
    uint32_t VAR15;
    uint32_t VAR16;
    uint32_t VAR17;
    uint32_t VAR18;
    uint64_t VAR19 = VAR2->VAR20;
    if (!VAR2->VAR21 || (VAR3 < 1))
        return -1;
    VAR2->VAR22 += VAR3;
    VAR8 = ((VAR2->VAR22 - VAR2->VAR23) * VAR24) / VAR25;
    VAR8 /= 50;
    if (VAR8 < 28)
        return -1;
    VAR2->VAR23 = VAR2->VAR22;
    if (FUN2(&VAR4) < 0)
        return -1;
    FUN3(&VAR4, (VAR26 << 6) + 1);
    FUN3(&VAR4, 201);
    FUN4(&VAR4, 7);
    FUN5(&VAR4, VAR2->VAR27);
    FUN5(&VAR4, VAR2->VAR27);
    VAR13 = VAR10->VAR28 + VAR10->VAR29;
    VAR17 = VAR13 - VAR10->VAR30 + 1;
    VAR12 = VAR17 - VAR10->VAR31;
    VAR12 = FUN6(VAR12, 0xffffff);
    VAR14 = VAR17 - VAR10->VAR32;
    VAR10->VAR32 = VAR17;
    VAR15 = VAR10->VAR31 - VAR10->VAR33;
    VAR10->VAR33 = VAR10->VAR31;
    VAR16 = VAR14 - VAR15;
    if (VAR14 == 0 || VAR16 <= 0)
        VAR18 = 0;
    else
        VAR18 = (VAR16 << 8) / VAR14;
    VAR18 = (VAR18 << 24) | VAR12;
    FUN5(&VAR4, VAR18);
    FUN5(&VAR4, VAR13);
    FUN5(&VAR4, VAR10->VAR34 >> 4);
    if (VAR2->VAR20 == VAR35)
    {
        FUN5(&VAR4, 0);
        FUN5(&VAR4, 0);
    }
    else
    {
        uint32_t VAR36 = VAR2->VAR20 >> 16;
        uint32_t VAR37 = VAR19 - VAR2->VAR20;
        FUN5(&VAR4, VAR36);
        FUN5(&VAR4, VAR37);
    }
    FUN3(&VAR4, (VAR26 << 6) + 1);
    FUN3(&VAR4, 202);
    VAR7 = strlen(VAR2->VAR38);
    FUN4(&VAR4, (6 + VAR7 + 3) / 4);
    FUN5(&VAR4, VAR2->VAR27);
    FUN3(&VAR4, 0x01);
    FUN3(&VAR4, VAR7);
    FUN7(&VAR4, VAR2->VAR38, VAR7);
    for (VAR7 = (6 + VAR7) % 4; VAR7 % 4; VAR7++)
    {
        FUN3(&VAR4, 0);
    }
    FUN8(&VAR4);
    VAR7 = FUN9(&VAR4, &VAR6);
    if ((VAR7 > 0) && VAR6)
    {
        int VAR39;
        FUN10("", VAR7);
        VAR39 = FUN11(VAR2->VAR21, VAR6, VAR7);
        FUN10("", VAR39);
        FUN12(VAR6);
    }
    return 0;
}