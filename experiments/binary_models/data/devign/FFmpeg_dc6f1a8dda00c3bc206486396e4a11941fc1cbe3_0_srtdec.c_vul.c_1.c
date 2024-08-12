static VAR1 FUN1(const char **VAR2, int *VAR3, VAR4 *VAR5, VAR4 *VAR6, VAR4 *VAR7, VAR4 *VAR8)
{
    int VAR9;
    for (VAR9 = 0; VAR9 < 2; VAR9++)
    {
        int VAR10, VAR11, VAR12, VAR13;
        int VAR14, VAR15, VAR16, VAR17;
        if (sscanf(*VAR2, ""
                         "",
                   &VAR10, &VAR11, &VAR12, &VAR13, &VAR14, &VAR15, &VAR16, &VAR17, VAR5, VAR7, VAR6, VAR8) >= 8)
        {
            int64_t VAR18 = (VAR10 * 3600LL + VAR11 * 60LL + VAR12) * 1000LL + VAR13;
            int64_t VAR19 = (VAR14 * 3600LL + VAR15 * 60LL + VAR16) * 1000LL + VAR17;
            *VAR3 = VAR19 - VAR18;
            *VAR2 += strcspn(*VAR2, "") + 1;
            return VAR18;
        }
        *VAR2 += strcspn(*VAR2, "") + 1;
    }
    return VAR20;
}