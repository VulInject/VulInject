static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    struct partition_record VAR7[4];
    uint8_t VAR8[VAR9];
    int VAR10;
    int VAR11 = 4;
    int VAR12;
    VAR12 = FUN2(VAR2, 0, VAR8, sizeof(VAR8));
    if (VAR12 < 0)
    {
        FUN3("", strerror(-VAR12));
        FUN4(VAR13);
    }
    if (VAR8[510] != 0x55 || VAR8[511] != 0xaa)
    {
        return -VAR14;
    }
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        FUN5(&VAR8[446 + 16 * VAR10], &VAR7[VAR10]);
        if (!VAR7[VAR10].system || !VAR7[VAR10].VAR15)
        {
            continue;
        }
        if (VAR7[VAR10].system == 0xF || VAR7[VAR10].system == 0x5)
        {
            struct partition_record VAR16[4];
            uint8_t VAR17[VAR9];
            int VAR18;
            VAR12 = FUN2(VAR2, VAR7[VAR10].VAR19 * VAR9, VAR17, sizeof(VAR17));
            if (VAR12 < 0)
            {
                FUN3("", strerror(-VAR12));
                FUN4(VAR13);
            }
            for (VAR18 = 0; VAR18 < 4; VAR18++)
            {
                FUN5(&VAR17[446 + 16 * VAR18], &VAR16[VAR18]);
                if (!VAR16[VAR18].system || !VAR16[VAR18].VAR15)
                {
                    continue;
                }
                if ((VAR11 + VAR18 + 1) == VAR3)
                {
                    *VAR5 = (VAR20)VAR16[VAR18].VAR19 << 9;
                    *VAR6 = (VAR20)VAR16[VAR18].VAR15 << 9;
                    return 0;
                }
            }
            VAR11 += 4;
        }
        else if ((VAR10 + 1) == VAR3)
        {
            *VAR5 = (VAR20)VAR7[VAR10].VAR19 << 9;
            *VAR6 = (VAR20)VAR7[VAR10].VAR15 << 9;
            return 0;
        }
    }
    return -VAR21;
}