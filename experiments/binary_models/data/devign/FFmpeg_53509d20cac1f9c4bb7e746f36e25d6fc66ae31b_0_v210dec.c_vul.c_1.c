static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    VAR14 *VAR15 = VAR2->VAR16;
    const VAR17 *VAR18 = VAR6->VAR3;
    VAR19 *VAR20, *VAR21, *VAR22;
    if (VAR8->VAR23)
        VAR12 = VAR8->VAR23;
    else
    {
        int VAR24 = ((VAR2->VAR25 + 47) / 48) * 48;
        VAR12 = VAR24 * 8 / 3;
    }
    VAR13 = !((VAR26)VAR18 & 0xf) && !(VAR12 & 0xf);
    if (VAR13 != VAR8->VAR13)
    {
        VAR8->VAR13 = VAR13;
        if (VAR27)
            FUN2(VAR8);
    }
    if (VAR15->VAR3[0])
        VAR2->FUN3(VAR2, VAR15);
    if (VAR6->VAR28 < VAR12 * VAR2->VAR29)
    {
        FUN4(VAR2, VAR30, "");
        return -1;
    }
    VAR15->VAR31 = 0;
    if (VAR2->FUN5(VAR2, VAR15) < 0)
        return -1;
    VAR20 = (VAR19 *)VAR15->VAR3[0];
    VAR21 = (VAR19 *)VAR15->VAR3[1];
    VAR22 = (VAR19 *)VAR15->VAR3[2];
    VAR15->VAR32 = VAR33;
    VAR15->VAR34 = 1;
    for (VAR10 = 0; VAR10 < VAR2->VAR29; VAR10++)
    {
        const VAR35 *VAR36 = (const VAR35 *)VAR18;
        uint32_t VAR37;
        VAR11 = (VAR2->VAR25 / 6) * 6;
        VAR8->FUN6(VAR36, VAR20, VAR21, VAR22, VAR11);
        VAR20 += VAR11;
        VAR21 += VAR11 >> 1;
        VAR22 += VAR11 >> 1;
        VAR36 += (VAR11 << 1) / 3;
        if (VAR11 < VAR2->VAR25 - 1)
        {
            FUN7(VAR21, VAR20, VAR22);
            VAR37 = FUN8(*VAR36++);
            *VAR20++ = VAR37 & 0x3FF;
        }
        if (VAR11 < VAR2->VAR25 - 3)
        {
            *VAR21++ = (VAR37 >> 10) & 0x3FF;
            *VAR20++ = (VAR37 >> 20) & 0x3FF;
            VAR37 = FUN8(*VAR36++);
            *VAR22++ = VAR37 & 0x3FF;
            *VAR20++ = (VAR37 >> 10) & 0x3FF;
        }
        VAR18 += VAR12;
        VAR20 += VAR15->VAR38[0] / 2 - VAR2->VAR25;
        VAR21 += VAR15->VAR38[1] / 2 - VAR2->VAR25 / 2;
        VAR22 += VAR15->VAR38[2] / 2 - VAR2->VAR25 / 2;
    }
    *VAR4 = sizeof(VAR14);
    *(VAR14 *)VAR3 = *VAR2->VAR16;
    return VAR6->VAR28;
}