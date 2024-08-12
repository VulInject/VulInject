static void FUN1(VAR1 *VAR2, uint8_t VAR3, VAR4 *VAR5, uint16_t VAR6)
{
    VAR7 *VAR8 = (VAR7 *)VAR2;
    uint16_t VAR9, VAR10;
    FUN2(VAR8, VAR3);
    VAR9 = VAR6;
    FUN3(VAR8->VAR3 + VAR11, &VAR9, 2);
    VAR9 = VAR12 | VAR13 | VAR14 | VAR15;
    FUN3(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN4(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN5((VAR9 & VAR15) == 0);
    FUN4(VAR8->VAR3 + VAR17, &VAR9, 2);
    FUN5((VAR9 & VAR18) == 0);
    FUN4(VAR8->VAR3 + VAR11, &VAR9, 2);
    FUN6(VAR9, ==, VAR6);
    while (VAR6 > 0)
    {
        FUN4(VAR8->VAR3 + VAR17, &VAR9, 2);
        FUN5((VAR9 & VAR19) != 0);
        FUN5((VAR9 & VAR20) == 0);
        FUN4(VAR8->VAR3 + VAR21, &VAR9, 2);
        FUN4(VAR8->VAR3 + VAR17, &VAR10, 2);
        if (FUN7(VAR6 == 1))
        {
            *VAR5 = VAR9 & 0xf;
            VAR5++;
            VAR6--;
        }
        else
        {
            memcpy(VAR5, &VAR9, 2);
            VAR5 += 2;
            VAR6 -= 2;
        }
    }
    FUN4(VAR8->VAR3 + VAR16, &VAR9, 2);
    FUN5((VAR9 & VAR15) == 0);
}