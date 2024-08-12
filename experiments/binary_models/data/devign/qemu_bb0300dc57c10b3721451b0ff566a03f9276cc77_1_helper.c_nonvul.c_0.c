static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    x86_def_t VAR4, *VAR5 = &VAR4;
    if (FUN2(VAR5, VAR3) < 0)
        return -1;
    if (VAR5->VAR6)
    {
        VAR2->VAR7 = VAR5->VAR6;
        VAR2->VAR8 = VAR5->VAR9;
        VAR2->VAR10 = VAR5->VAR11;
    }
    else
    {
        VAR2->VAR7 = VAR12;
        VAR2->VAR8 = VAR13;
        VAR2->VAR10 = VAR14;
    }
    VAR2->VAR15 = VAR5->VAR16;
    VAR2->VAR17 = VAR5->VAR18;
    if (VAR5->VAR19 > 0x0f)
        VAR2->VAR20 = 0xf00 | ((VAR5->VAR19 - 0x0f) << 20);
    else
        VAR2->VAR20 = VAR5->VAR19 << 8;
    VAR2->VAR20 |= ((VAR5->VAR21 & 0xf) << 4) | ((VAR5->VAR21 >> 4) << 16);
    VAR2->VAR20 |= VAR5->VAR22;
    VAR2->VAR23 = VAR5->VAR24;
    VAR2->VAR25 = 0x0007040600070406ULL;
    VAR2->VAR26 = VAR5->VAR27;
    VAR2->VAR28 = VAR5->VAR29;
    VAR2->VAR30 = VAR5->VAR31;
    VAR2->VAR32 = VAR5->VAR33;
    {
        const char *VAR34 = VAR5->VAR34;
        int VAR35, VAR36, VAR37;
        if (!VAR34)
            VAR34 = "";
        VAR36 = strlen(VAR34);
        for (VAR37 = 0; VAR37 < 48; VAR37++)
        {
            if (VAR37 >= VAR36)
                VAR35 = '';
            else
                VAR35 = (VAR38)VAR34[VAR37];
            VAR2->VAR39[VAR37 >> 2] |= VAR35 << (8 * (VAR37 & 3));
        }
    }
    return 0;
}