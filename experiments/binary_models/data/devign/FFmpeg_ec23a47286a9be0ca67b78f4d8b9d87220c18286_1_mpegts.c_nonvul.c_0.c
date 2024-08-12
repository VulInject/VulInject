static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = &VAR2->VAR8;
    uint8_t VAR9[VAR10];
    int VAR11, VAR12;
    int VAR13, VAR14 = 0;
    int64_t VAR15;
    VAR5->VAR16 = 0;
    VAR11 = 0;
    for (;;)
    {
        if (VAR5->VAR16)
            break;
        VAR11++;
        if (VAR3 != 0 && VAR11 >= VAR3)
            break;
        VAR15 = FUN2(VAR8);
        VAR12 = FUN3(VAR8, VAR9, VAR5->VAR17);
        if (VAR12 != VAR5->VAR17)
            return VAR18;
        if (VAR9[0] != 0x47)
        {
            VAR14 = 0;
            for (VAR13 = 0; VAR13 < VAR5->VAR17; VAR13++)
            {
                if (VAR9[VAR13] == 0x47)
                {
                    VAR14 = 1;
                    break;
                }
            }
            if (VAR14)
            {
                FUN4(VAR8, VAR15 + VAR13, VAR19);
                continue;
            }
            return VAR20;
        }
        FUN5(VAR2, VAR9);
    }
    return 0;
}