static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5)
{
    uint32_t VAR6 = 0;
    uint8_t VAR7 = (VAR2->VAR8[VAR9].VAR10 >> VAR11) & VAR12;
    if (VAR7 != 0)
    {
        VAR6 = 8 + ((VAR2->VAR8[VAR9].VAR10 >> 16) & 0x1F);
        VAR2->VAR13 = VAR6;
        memset(VAR2->VAR14, 0x0, sizeof(VAR2->VAR14));
    }
    else
    {
        VAR2->VAR13 = 0;
    }
    FUN2(VAR2->VAR15);
    VAR2->VAR15 = (VAR3 *)VAR4;
    VAR2->VAR16 = VAR5;
    VAR2->VAR17 = 4;
    VAR2->VAR18 = 1;
    VAR2->VAR19 = VAR2->VAR16;
    FUN3("", VAR20, VAR2->VAR16, VAR2->VAR17);
}