static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR3;
    const VAR9 *VAR10 = VAR6->VAR3;
    const VAR9 *VAR11;
    int VAR12 = VAR6->VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    int VAR17, VAR18, VAR19;
    int VAR20;
    VAR9 *VAR21;
    VAR22 *VAR23;
    if (VAR12 < 16)
    {
        FUN2(VAR2, VAR24, "");
        *VAR4 = 0;
        return VAR12;
    }
    VAR17 = VAR10[6];
    if (VAR17 < VAR25 || VAR17 > VAR26)
    {
        FUN2(VAR2, VAR27, "", VAR17);
        return FUN3(VAR28);
    }
    VAR10 += 16;
    VAR12 -= 16;
    VAR18 = 0;
    if (VAR17 == VAR29)
    {
        uint32_t VAR30;
        if (VAR12 < 4)
        {
            FUN2(VAR2, VAR27, "");
            return FUN3(VAR28);
        }
        VAR30 = FUN4(VAR10);
        VAR18 = FUN5(VAR30);
        VAR10 += 4;
        VAR12 -= 4;
    }
    else if (VAR17 == VAR26)
    {
        VAR18 = 1;
        VAR12 = 0;
    }
    VAR19 = VAR12 / VAR15->VAR31;
    VAR8->VAR32 = ((VAR18 + VAR19) * VAR2->VAR33) / VAR2->VAR34;
    if ((VAR20 = FUN6(VAR2, VAR8, 0)) < 0)
    {
        FUN2(VAR2, VAR27, "");
        return VAR20;
    }
    VAR21 = VAR8->VAR3[0];
    VAR23 = (VAR22 *)VAR8->VAR3[0];
    if (VAR18 > 0)
    {
        int VAR35 = VAR2->VAR33 * VAR18;
        if (VAR15->VAR36 == 2)
        {
            memset(VAR23, 0x00, VAR35 * 2);
            VAR23 += VAR35;
        }
        else
        {
            memset(VAR21, 0x80, VAR35);
            VAR21 += VAR35;
        }
    }
    if (VAR19 > 0)
    {
        VAR11 = VAR10 + VAR12;
        while (VAR10 < VAR11)
        {
            if (VAR15->VAR36 == 2)
            {
                FUN7(VAR23, VAR10, VAR15->VAR31, VAR2->VAR34);
                VAR23 += VAR2->VAR33;
            }
            else
            {
                memcpy(VAR21, VAR10, VAR15->VAR31);
                VAR21 += VAR2->VAR33;
            }
            VAR10 += VAR15->VAR31;
        }
    }
    *VAR4 = 1;
    return VAR6->VAR13;
}