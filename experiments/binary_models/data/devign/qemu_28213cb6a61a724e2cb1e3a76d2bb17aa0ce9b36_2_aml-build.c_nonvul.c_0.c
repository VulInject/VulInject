FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *VAR7, int VAR8, uint8_t VAR9, const char *VAR10, const char *VAR11)
{
    unsigned VAR12 = (char *)VAR6 - VAR4->VAR13;
    unsigned VAR14 = (char *)&VAR6->VAR15 - VAR4->VAR13;
    memcpy(&VAR6->VAR16, VAR7, 4);
    VAR6->VAR17 = FUN2(VAR8);
    VAR6->VAR18 = VAR9;
    if (VAR10)
    {
        strncpy((char *)VAR6->VAR10, VAR10, sizeof VAR6->VAR10);
    }
    else
    {
        memcpy(VAR6->VAR10, VAR19, 6);
    }
    if (VAR11)
    {
        strncpy((char *)VAR6->VAR11, VAR11, sizeof(VAR6->VAR11));
    }
    else
    {
        memcpy(VAR6->VAR11, VAR20, 4);
        memcpy(VAR6->VAR11 + 4, VAR7, 4);
    }
    VAR6->VAR21 = FUN2(1);
    memcpy(VAR6->VAR22, VAR20, 4);
    VAR6->VAR23 = FUN2(1);
    FUN3(VAR2, VAR24, VAR12, VAR8, VAR14);
}