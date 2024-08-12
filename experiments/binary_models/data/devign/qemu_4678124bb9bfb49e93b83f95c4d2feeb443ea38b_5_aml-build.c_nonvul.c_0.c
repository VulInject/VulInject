FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR1 *VAR5, const char *VAR6, const char *VAR7)
{
    int VAR8;
    unsigned VAR9;
    VAR10 *VAR11;
    const unsigned VAR12 = (sizeof(VAR13) * VAR5->VAR14);
    const unsigned VAR15 = sizeof(VAR11->VAR16[0]);
    const size_t VAR17 = sizeof(*VAR11) + VAR12;
    VAR11 = FUN2(VAR2, VAR17);
    VAR9 = (char *)VAR11->VAR16 - VAR2->VAR18;
    for (VAR8 = 0; VAR8 < VAR5->VAR14; ++VAR8)
    {
        uint32_t VAR19 = FUN3(VAR5, VAR13, VAR8);
        uint32_t VAR20 = VAR9 + VAR15 * VAR8;
        FUN4(VAR4, VAR21, VAR20, VAR15, VAR21, VAR19);
    }
    FUN5(VAR4, VAR2, (void *)VAR11, "", VAR17, 1, VAR6, VAR7);
}