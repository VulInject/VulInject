int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR11;
    if (VAR10->VAR12)
    {
        int VAR13 = VAR10->VAR14.VAR15 == VAR10->VAR16 ? 0 : (FUN2(&VAR10->VAR14) >> 3);
        int VAR17 = 0;
        if (VAR5 - VAR13 > 7)
        {
            int VAR18;
            for (VAR18 = VAR13; VAR18 < VAR5 - 4; VAR18++)
                if (VAR4[VAR18] == 0 && VAR4[VAR18 + 1] == 0 && VAR4[VAR18 + 2] == 1 && VAR4[VAR18 + 3] == 0xB6)
                {
                    VAR17 = !(VAR4[VAR18 + 4] & 0x40);
                    break;
                }
        }
        if (VAR17)
        {
            FUN3(&VAR10->VAR16, &VAR10->VAR19, VAR5 - VAR13 + VAR20);
            if (!VAR10->VAR16)
                return FUN4(VAR21);
            memcpy(VAR10->VAR16, VAR4 + VAR13, VAR5 - VAR13);
            VAR10->VAR22 = VAR5 - VAR13;
        }
    }
    return 0;
}