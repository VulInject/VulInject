void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, uint16_t VAR8[64])
{
    int VAR9, VAR10;
    const int VAR11 = VAR2->VAR12 != VAR13;
    int VAR14[3], VAR15[3];
    FUN2(VAR2->VAR16, &VAR9, &VAR10);
    if (VAR2->VAR17->VAR18 == VAR19 && VAR2->VAR16 == VAR20)
    {
        VAR15[0] = VAR14[0] = VAR15[1] = VAR14[1] = VAR15[2] = VAR14[2] = 1;
    }
    else
    {
        VAR15[0] = 2;
        VAR15[1] = 2 >> VAR10;
        VAR15[2] = 2 >> VAR10;
        VAR14[0] = 2;
        VAR14[1] = 2 >> VAR9;
        VAR14[2] = 2 >> VAR9;
    }
    FUN3(VAR4, VAR21);
    FUN4(VAR2, VAR4);
    FUN5(VAR4, VAR6, VAR8);
    switch (VAR2->VAR12)
    {
    case VAR13:
        FUN3(VAR4, VAR22);
        break;
    case VAR19:
        FUN3(VAR4, VAR23);
        break;
    default:
        assert(0);
    }
    FUN6(VAR4, 16, 17);
    if (VAR11 && VAR2->VAR16 == VAR20)
        FUN6(VAR4, 8, 9);
    else
        FUN6(VAR4, 8, 8);
    FUN6(VAR4, 16, VAR2->VAR24);
    FUN6(VAR4, 16, VAR2->VAR25);
    FUN6(VAR4, 8, 3);
    FUN6(VAR4, 8, 1);
    FUN6(VAR4, 4, VAR14[0]);
    FUN6(VAR4, 4, VAR15[0]);
    FUN6(VAR4, 8, 0);
    FUN6(VAR4, 8, 2);
    FUN6(VAR4, 4, VAR14[1]);
    FUN6(VAR4, 4, VAR15[1]);
    FUN6(VAR4, 8, 0);
    FUN6(VAR4, 8, 3);
    FUN6(VAR4, 4, VAR14[2]);
    FUN6(VAR4, 4, VAR15[2]);
    FUN6(VAR4, 8, 0);
    FUN3(VAR4, VAR26);
    FUN6(VAR4, 16, 12);
    FUN6(VAR4, 8, 3);
    FUN6(VAR4, 8, 1);
    FUN6(VAR4, 4, 0);
    FUN6(VAR4, 4, 0);
    FUN6(VAR4, 8, 2);
    FUN6(VAR4, 4, 1);
    FUN6(VAR4, 4, VAR11 ? 0 : 1);
    FUN6(VAR4, 8, 3);
    FUN6(VAR4, 4, 1);
    FUN6(VAR4, 4, VAR11 ? 0 : 1);
    FUN6(VAR4, 8, VAR11 ? VAR7 : 0);
    switch (VAR2->VAR12)
    {
    case VAR13:
        FUN6(VAR4, 8, 63);
        break;
    case VAR19:
        FUN6(VAR4, 8, 0);
        break;
    default:
        assert(0);
    }
    FUN6(VAR4, 8, 0);
}