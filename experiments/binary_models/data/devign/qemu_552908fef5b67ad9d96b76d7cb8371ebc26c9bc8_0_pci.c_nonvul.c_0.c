static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR4, VAR2, VAR2);
    VAR6 *VAR7 = FUN3(VAR5);
    struct
    {
        uint32_t VAR8;
        uint32_t VAR9;
    } VAR10;
    int VAR11, VAR12;
    FUN4(&VAR7->VAR13, &VAR5->VAR14->VAR15, VAR7->VAR16 / (VAR17 / 512) + 1);
    VAR7->VAR18 = 0;
    for (;;)
    {
        if (VAR5->VAR19 == 0)
        {
            if (VAR5->VAR20 || (VAR5->VAR21 - VAR5->VAR8) >= VAR17)
                return VAR7->VAR18 != 0;
            FUN5(&VAR5->VAR14->VAR15, VAR5->VAR21, (VAR22 *)&VAR10, 8);
            VAR5->VAR21 += 8;
            VAR10.VAR8 = FUN6(VAR10.VAR8);
            VAR10.VAR9 = FUN6(VAR10.VAR9);
            VAR12 = VAR10.VAR9 & 0xfffe;
            if (VAR12 == 0)
                VAR12 = 0x10000;
            VAR5->VAR19 = VAR12;
            VAR5->VAR23 = VAR10.VAR8;
            VAR5->VAR20 = (VAR10.VAR9 & 0x80000000);
        }
        VAR11 = VAR5->VAR19;
        if (VAR11 > 0)
        {
            FUN7(&VAR7->VAR13, VAR5->VAR23, VAR11);
            VAR5->VAR23 += VAR11;
            VAR5->VAR19 -= VAR11;
            VAR7->VAR18 += VAR11;
        }
    }
    return 1;
}