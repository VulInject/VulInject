static int FUN1(VAR1 *VAR2, VAR3 *VAR4, MOVAtom VAR5)
{
    const uint32_t VAR6 = 20;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10 = NULL;
    uint32_t VAR11 = 0;
    uint32_t VAR12 = 0;
    GetBitContext VAR13;
    VAR10 = FUN2(VAR6 + VAR14);
    if (!VAR10)
    {
        return FUN3(VAR15);
    }
    if (FUN4(VAR4, VAR10, VAR6) < VAR6)
    {
        return VAR16;
    }
    FUN5(&VAR13, VAR10, 8 * VAR6);
    if (VAR2->VAR17->VAR18 < 1)
    {
        return 0;
    }
    VAR8 = VAR2->VAR17->VAR19[VAR2->VAR17->VAR18 - 1];
    VAR8->VAR20->VAR21 = FUN6(&VAR13, 32);
    if (VAR8->VAR20->VAR21 <= 0)
    {
        FUN7(VAR2->VAR17, VAR22, "", VAR8->VAR20->VAR21);
        return VAR16;
    }
    FUN8(&VAR13, 32);
    VAR8->VAR20->VAR23 = FUN6(&VAR13, 32);
    VAR8->VAR20->VAR24 = FUN9(&VAR13, 8);
    VAR11 = FUN9(&VAR13, 2);
    FUN10(&VAR13, 30);
    VAR12 = FUN9(&VAR13, 16);
    VAR8->VAR20->VAR25 = (VAR11 == 0) ? 512 : (VAR11 == 1) ? 1024
                                                              : (VAR11 == 2)   ? 2048
                                                              : (VAR11 == 3)   ? 4096
                                                                                             : 0;
    if (VAR12 > 0xff)
    {
        FUN7(VAR2->VAR17, VAR26, "");
    }
    VAR8->VAR20->VAR27 = ((VAR12 & 0x1) ? VAR28 : 0) | ((VAR12 & 0x2) ? VAR29 : 0) | ((VAR12 & 0x2) ? VAR30 : 0) | ((VAR12 & 0x4) ? VAR31 : 0) | ((VAR12 & 0x4) ? VAR32 : 0) | ((VAR12 & 0x8) ? VAR33 : 0);
    VAR8->VAR20->VAR34 = FUN11(VAR8->VAR20->VAR27);
    return 0;