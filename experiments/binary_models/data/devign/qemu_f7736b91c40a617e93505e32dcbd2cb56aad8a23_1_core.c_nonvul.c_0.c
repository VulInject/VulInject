static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    struct
    {
        uint32_t VAR6;
        uint32_t VAR7;
    } VAR8;
    int VAR9, VAR10;
    for (;;)
    {
        VAR9 = VAR5->VAR11 - VAR5->VAR12;
        if (VAR9 <= 0)
            break;
        if (VAR2->VAR13 == 0)
        {
            if (VAR2->VAR14 || (VAR2->VAR15 - VAR2->VAR6) >= VAR16)
                return 0;
            FUN3(VAR2->VAR15, (VAR17 *)&VAR8, 8);
            VAR2->VAR15 += 8;
            VAR8.VAR6 = FUN4(VAR8.VAR6);
            VAR8.VAR7 = FUN4(VAR8.VAR7);
            VAR10 = VAR8.VAR7 & 0xfffe;
            if (VAR10 == 0)
                VAR10 = 0x10000;
            VAR2->VAR13 = VAR10;
            VAR2->VAR18 = VAR8.VAR6;
            VAR2->VAR14 = (VAR8.VAR7 & 0x80000000);
        }
        if (VAR9 > VAR2->VAR13)
            VAR9 = VAR2->VAR13;
        if (VAR9 > 0)
        {
            if (VAR3)
            {
                FUN5(VAR2->VAR18, VAR5->VAR19 + VAR5->VAR12, VAR9);
            }
            else
            {
                FUN3(VAR2->VAR18, VAR5->VAR19 + VAR5->VAR12, VAR9);
            }
            VAR2->VAR18 += VAR9;
            VAR2->VAR13 -= VAR9;
            VAR5->VAR12 += VAR9;
        }
    }
    return 1;
}