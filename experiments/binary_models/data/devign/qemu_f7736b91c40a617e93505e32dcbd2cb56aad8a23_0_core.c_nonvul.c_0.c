static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    struct
    {
        uint32_t VAR6;
        uint32_t VAR7;
    } VAR8;
    int VAR9, VAR10;
    FUN3(&VAR5->VAR11, VAR5->VAR12 / (VAR13 / 512) + 1);
    VAR5->VAR14 = 0;
    for (;;)
    {
        if (VAR2->VAR15 == 0)
        {
            if (VAR2->VAR16 || (VAR2->VAR17 - VAR2->VAR6) >= VAR13)
                return VAR5->VAR14 != 0;
            FUN4(VAR2->VAR17, (VAR18 *)&VAR8, 8);
            VAR2->VAR17 += 8;
            VAR8.VAR6 = FUN5(VAR8.VAR6);
            VAR8.VAR7 = FUN5(VAR8.VAR7);
            VAR10 = VAR8.VAR7 & 0xfffe;
            if (VAR10 == 0)
                VAR10 = 0x10000;
            VAR2->VAR15 = VAR10;
            VAR2->VAR19 = VAR8.VAR6;
            VAR2->VAR16 = (VAR8.VAR7 & 0x80000000);
        }
        VAR9 = VAR2->VAR15;
        if (VAR9 > 0)
        {
            FUN6(&VAR5->VAR11, VAR2->VAR19, VAR9);
            VAR2->VAR19 += VAR9;
            VAR2->VAR15 -= VAR9;
            VAR5->VAR14 += VAR9;
        }
    }
    return 1;
}