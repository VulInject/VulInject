static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    struct partition_record VAR7[4];
    uint8_t VAR8[512];
    int VAR9;
    int VAR10 = 4;
    int VAR11;
    if ((VAR11 = FUN2(VAR2, 0, VAR8, 1)) < 0)
    {
        VAR12 = -VAR11;
        FUN3(VAR13, "");
    }
    if (VAR8[510] != 0x55 || VAR8[511] != 0xaa)
    {
        return -VAR14;
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        FUN4(&VAR8[446 + 16 * VAR9], &VAR7[VAR9]);
        if (!VAR7[VAR9].VAR15)
            continue;
        if (VAR7[VAR9].system == 0xF || VAR7[VAR9].system == 0x5)
        {
            struct partition_record VAR16[4];
            uint8_t VAR17[512];
            int VAR18;
            if ((VAR11 = FUN2(VAR2, VAR7[VAR9].VAR19, VAR17, 1)) < 0)
            {
                VAR12 = -VAR11;
                FUN3(VAR13, "");
            }
            for (VAR18 = 0; VAR18 < 4; VAR18++)
            {
                FUN4(&VAR17[446 + 16 * VAR18], &VAR16[VAR18]);
                if (!VAR16[VAR18].VAR15)
                    continue;
                if ((VAR10 + VAR18 + 1) == VAR3)
                {
                    *VAR5 = (VAR20)VAR16[VAR18].VAR19 << 9;
                    *VAR6 = (VAR20)VAR16[VAR18].VAR15 << 9;
                    return 0;
                }
            }
            VAR10 += 4;
        }
        else if ((VAR9 + 1) == VAR3)
        {
            *VAR5 = (VAR20)VAR7[VAR9].VAR19 << 9;
            *VAR6 = (VAR20)VAR7[VAR9].VAR15 << 9;
            return 0;
        }
    }
    return -VAR21;
}