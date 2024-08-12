static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    const VAR3 *VAR5 = VAR4;
    struct
    {
        uint8_t VAR6;
        uint8_t VAR7;
        uint8_t VAR8[2];
        uint8_t class;
        uint8_t VAR9[2];
        uint16_t VAR10;
        uint8_t VAR11;
    } VAR12 *VAR13;
    struct
    {
        uint16_t VAR10;
        uint8_t VAR14;
        uint8_t VAR15;
    } VAR12 *VAR16;
    enum VAR17
    {
        VAR18 = 1 << 0,
        VAR19 = 1 << 1,
        VAR20 = 1 << 2,
        VAR21 = 1 << 3,
        VAR22 = 1 << 4,
        VAR23 = 1 << 5,
        VAR24 = 1 << 6,
        VAR25 = 1 << 7,
    };
    enum VAR26
    {
        VAR27 = 0,
        VAR28,
        VAR29,
        VAR30,
        VAR31,
        VAR32,
        VAR33,
        VAR34,
    };
    unsigned int VAR35, VAR36;
    VAR13 = (void *)VAR5;
    VAR16 = (void *)VAR4;
    VAR35 = FUN2(VAR13->VAR10);
    if (!(VAR13->VAR7 & 0x01))
    {
        FUN3(VAR2, VAR37, VAR38);
        return;
    }
    VAR16->VAR15 = VAR22;
    VAR16->VAR14 = 0;
    if (VAR13->class & VAR22)
    {
        VAR16->VAR14 |= VAR31;
        VAR36 = FUN4(VAR2, VAR4);
    }
    else
    {
        VAR16->VAR14 = 0x80;
        VAR36 = sizeof(*VAR16);
    }
    VAR16->VAR10 = FUN5(VAR36 - sizeof(*VAR16));
    FUN6(VAR2, VAR36, VAR35);
}