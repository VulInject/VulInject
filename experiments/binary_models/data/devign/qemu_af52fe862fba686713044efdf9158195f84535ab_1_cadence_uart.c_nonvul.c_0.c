static void FUN1(VAR1 *VAR2)
{
    QEMUSerialSetParams VAR3;
    unsigned int VAR4, VAR5;
    VAR4 = (VAR2->VAR6[VAR7] & VAR8) ? VAR9 / 8 : VAR9;
    VAR3.VAR10 = VAR4 / (VAR2->VAR6[VAR11] * (VAR2->VAR6[VAR12] + 1));
    VAR5 = 1;
    switch (VAR2->VAR6[VAR7] & VAR13)
    {
    case VAR14:
        VAR3.VAR15 = '';
        VAR5++;
        break;
    case VAR16:
        VAR3.VAR15 = '';
        VAR5++;
        break;
    default:
        VAR3.VAR15 = '';
        break;
    }
    switch (VAR2->VAR6[VAR7] & VAR17)
    {
    case VAR18:
        VAR3.VAR19 = 6;
        break;
    case VAR20:
        VAR3.VAR19 = 7;
        break;
    default:
        VAR3.VAR19 = 8;
        break;
    }
    switch (VAR2->VAR6[VAR7] & VAR21)
    {
    case VAR22:
        VAR3.VAR23 = 1;
        break;
    default:
        VAR3.VAR23 = 2;
        break;
    }
    VAR5 += VAR3.VAR19 + VAR3.VAR23;
    VAR2->VAR24 = (FUN2() / VAR3.VAR10) * VAR5;
    if (VAR2->VAR25)
    {
        FUN3(VAR2->VAR25, VAR26, &VAR3);
    }
}