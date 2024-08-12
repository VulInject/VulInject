static void FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5, unsigned int VAR6, uint8_t VAR7)
{
    VAR8 *VAR9 = FUN2(VAR2);
    VAR10 *VAR11 = VAR9->VAR12.VAR13;
    VAR14 *VAR15 = FUN3(VAR11);
    unsigned int VAR16;
    uint8_t VAR17[VAR18];
    unsigned int VAR19 = 0;
    unsigned int *VAR20 = &VAR19;
    unsigned int VAR21 = sizeof(VAR17);
    if (VAR21 < 3)
    {
        VAR17[2] = VAR22;
        goto VAR23;
    }
    FUN4(VAR4[0] | 0x04);
    FUN4(VAR4[1]);
    FUN4(0);
    if (VAR5 < 2)
    {
        VAR17[2] = VAR24;
        goto VAR23;
    }
    if (VAR5 > VAR6)
    {
        VAR17[2] = VAR22;
        goto VAR23;
    }
    if ((VAR4[0] & 0x03) != 0)
    {
        VAR17[2] = VAR25;
        goto VAR23;
    }
    VAR16 = VAR4[0] >> 2;
    if ((VAR16 & 1) || !VAR9->VAR26[VAR16 / 2] || (VAR4[1] >= VAR9->VAR26[VAR16 / 2]->VAR27) || (!VAR9->VAR26[VAR16 / 2]->VAR28[VAR4[1]]))
    {
        VAR17[2] = VAR29;
        goto VAR23;
    }
    VAR9->VAR26[VAR16 / 2]->VAR28[VAR4[1]](VAR9, VAR4, VAR5, VAR17, VAR20, VAR21);
VAR23:
    VAR15->FUN5(VAR11, VAR7, VAR17, *VAR20);
    FUN6(VAR9);
}