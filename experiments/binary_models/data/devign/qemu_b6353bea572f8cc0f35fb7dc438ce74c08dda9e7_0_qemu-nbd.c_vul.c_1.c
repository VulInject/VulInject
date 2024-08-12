static int FUN1(VAR1 *VAR2, int VAR3, VAR4 *VAR5, VAR4 *VAR6)
{
    struct partition_record VAR7[4];
    uint8_t VAR8[512];
    int VAR9;
    int VAR10 = 4;
    if (FUN2(VAR2, 0, VAR8, 1))
        FUN3(VAR11, "");
    if (VAR8[510] != 0x55 || VAR8[511] != 0xaa)
    {
        VAR12 = -VAR11;
        return -1;
    }
    for (VAR9 = 0; VAR9 < 4; VAR9++)
    {
        FUN4(&VAR8[446 + 16 * VAR9], &VAR7[VAR9]);
        if (!VAR7[VAR9].VAR13)
            continue;
        if (VAR7[VAR9].system == 0xF || VAR7[VAR9].system == 0x5)
        {
            struct partition_record VAR14[4];
            uint8_t VAR15[512];
            int VAR16;
            if (FUN2(VAR2, VAR7[VAR9].VAR17, VAR15, 1))
                FUN3(VAR11, "");
            for (VAR16 = 0; VAR16 < 4; VAR16++)
            {
                FUN4(&VAR15[446 + 16 * VAR16], &VAR14[VAR16]);
                if (!VAR14[VAR16].VAR13)
                    continue;
                if ((VAR10 + VAR16 + 1) == VAR3)
                {
                    *VAR5 = (VAR18)VAR14[VAR16].VAR17 << 9;
                    *VAR6 = (VAR18)VAR14[VAR16].VAR13 << 9;
                    return 0;
                }
            }
            VAR10 += 4;
        }
        else if ((VAR9 + 1) == VAR3)
        {
            *VAR5 = (VAR18)VAR7[VAR9].VAR17 << 9;
            *VAR6 = (VAR18)VAR7[VAR9].VAR13 << 9;
            return 0;
        }
    }
    VAR12 = -VAR19;
    return -1;
}