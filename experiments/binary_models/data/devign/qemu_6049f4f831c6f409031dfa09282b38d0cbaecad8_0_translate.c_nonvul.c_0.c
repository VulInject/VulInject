VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    int VAR4, VAR5, VAR6, VAR7;
    VAR3 = FUN2(sizeof(VAR1));
    FUN3(VAR3);
    FUN4();
    FUN5(VAR3, 1);
    VAR4 = VAR8;
    VAR5 = (VAR9 | VAR10 | VAR11 | VAR12 | VAR13 | VAR14);
    VAR7 = FUN6(VAR15);
    for (VAR6 = 0; VAR6 < VAR7; VAR6++)
    {
        if (strcmp(VAR2, VAR15[VAR6].VAR16) == 0)
        {
            VAR4 = VAR15[VAR6].VAR4;
            VAR5 = VAR15[VAR6].VAR5;
            break;
        }
    }
    VAR3->VAR4 = VAR4;
    VAR3->VAR5 = VAR5;
    VAR3->VAR17 = 0x1F00;
    VAR3->VAR17 |= 1 << 3;
    FUN7(VAR3, (VAR18 | VAR19 | VAR20 | VAR21 | VAR22 | VAR23));
    FUN8(VAR3);
    VAR3->VAR24[VAR25] = 0;
    VAR3->VAR24[VAR26] = 0;
    VAR3->VAR24[VAR27] = 0;
    {
        uint64_t VAR28;
        VAR28 = VAR3->VAR24[VAR29];
        VAR3->VAR24[VAR30] = 0;
        VAR3->VAR24[VAR31] = 0;
        VAR3->VAR24[VAR32] = 0;
        VAR3->VAR24[VAR33] = 0;
        VAR3->VAR24[VAR34] = 0;
        VAR3->VAR24[VAR35] = 31;
        VAR3->VAR24[VAR36] = 0;
        VAR3->VAR24[VAR37] = 0;
        VAR3->VAR24[VAR38] = 0;
        VAR3->VAR24[VAR39] = -1ULL;
    }
    FUN9(VAR3);
    return VAR3;
}