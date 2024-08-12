static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    const VAR7 *VAR9;
    int VAR10 = VAR6->VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15, VAR16, VAR17;
    int VAR18;
    VAR7 *VAR19;
    VAR20 *VAR21;
    if (VAR10 < 16)
    {
        FUN2(VAR2, VAR22, "");
        *VAR4 = 0;
        return VAR10;
    }
    VAR15 = VAR8[6];
    if (VAR15 < VAR23 || VAR15 > VAR24)
    {
        FUN2(VAR2, VAR25, "", VAR15);
        return FUN3(VAR26);
    }
    VAR8 += 16;
    VAR10 -= 16;
    VAR16 = 0;
    if (VAR15 == VAR27)
    {
        uint32_t VAR28;
        if (VAR10 < 4)
        {
            FUN2(VAR2, VAR25, "");
            return FUN3(VAR26);
        }
        VAR28 = FUN4(VAR8);
        VAR16 = FUN5(VAR28);
        VAR8 += 4;
        VAR10 -= 4;
    }
    else if (VAR15 == VAR24)
    {
        VAR16 = 1;
        VAR10 = 0;
    }
    VAR17 = VAR10 / VAR13->VAR29;
    VAR13->VAR30.VAR31 = ((VAR16 + VAR17) * VAR2->VAR32) / VAR2->VAR33;
    if ((VAR18 = VAR2->FUN6(VAR2, &VAR13->VAR30)) < 0)
    {
        FUN2(VAR2, VAR25, "");
        return VAR18;
    }
    VAR19 = VAR13->VAR30.VAR3[0];
    VAR21 = (VAR20 *)VAR13->VAR30.VAR3[0];
    if (VAR16 > 0)
    {
        int VAR34 = VAR2->VAR32 * VAR16;
        if (VAR13->VAR35 == 2)
        {
            memset(VAR21, 0x00, VAR34 * 2);
            VAR21 += VAR34;
        }
        else
        {
            memset(VAR19, 0x80, VAR34);
            VAR19 += VAR34;
        }
    }
    if (VAR17 > 0)
    {
        VAR9 = VAR8 + VAR10;
        while (VAR9 - VAR8 >= VAR13->VAR29)
        {
            if (VAR13->VAR35 == 2)
            {
                FUN7(VAR21, VAR8, VAR13->VAR29, VAR2->VAR33);
                VAR21 += VAR2->VAR32;
            }
            else
            {
                memcpy(VAR19, VAR8, VAR13->VAR29);
                VAR19 += VAR2->VAR32;
            }
            VAR8 += VAR13->VAR29;
        }
    }
    *VAR4 = 1;
    *(VAR36 *)VAR3 = VAR13->VAR30;
    return VAR6->VAR11;
}