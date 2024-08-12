FUN1(VAR1 *VAR2, VAR1 *VAR3, VAR4 *VAR5, const char *VAR6, int VAR7, uint8_t VAR8, const char *VAR9, const char *VAR10)
{
    memcpy(&VAR5->VAR11, VAR6, 4);
    VAR5->VAR12 = FUN2(VAR7);
    VAR5->VAR13 = VAR8;
    if (VAR9)
    {
        strncpy((char *)VAR5->VAR9, VAR9, sizeof VAR5->VAR9);
    }
    else
    {
        memcpy(VAR5->VAR9, VAR14, 6);
    }
    if (VAR10)
    {
        strncpy((char *)VAR5->VAR10, VAR10, sizeof(VAR5->VAR10));
    }
    else
    {
        memcpy(VAR5->VAR10, VAR15, 4);
        memcpy(VAR5->VAR10 + 4, VAR6, 4);
    }
    VAR5->VAR16 = FUN2(1);
    memcpy(VAR5->VAR17, VAR15, 4);
    VAR5->VAR18 = FUN2(1);
    VAR5->VAR19 = 0;
    FUN3(VAR2, VAR20, VAR3->VAR21, VAR5, VAR7, &VAR5->VAR19);
}