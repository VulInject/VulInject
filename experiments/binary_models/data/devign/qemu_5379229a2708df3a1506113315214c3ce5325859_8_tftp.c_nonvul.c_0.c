static int FUN1(struct VAR1 *VAR2, const char *VAR3[], uint32_t VAR4[], int VAR5, struct VAR6 *VAR7)
{
    struct sockaddr_in VAR8, VAR9;
    struct VAR10 *VAR11;
    struct VAR6 *VAR12;
    int VAR13, VAR14 = 0;
    VAR11 = FUN2(VAR2->VAR15);
    if (!VAR11)
        return -1;
    memset(VAR11->VAR16, 0, VAR11->VAR17);
    VAR11->VAR16 += VAR18;
    VAR12 = (void *)VAR11->VAR16;
    VAR11->VAR16 += sizeof(struct VAR19);
    VAR12->VAR20 = FUN3(VAR21);
    for (VAR13 = 0; VAR13 < VAR5; VAR13++)
    {
        VAR14 += snprintf(VAR12->VAR22.VAR23 + VAR14, sizeof(VAR12->VAR22.VAR23) - VAR14, "", VAR3[VAR13]) + 1;
        VAR14 += snprintf(VAR12->VAR22.VAR23 + VAR14, sizeof(VAR12->VAR22.VAR23) - VAR14, "", VAR4[VAR13]) + 1;
    }
    VAR8.VAR24 = VAR7->VAR25.VAR26;
    VAR8.VAR27 = VAR7->VAR28.VAR29;
    VAR9.VAR24 = VAR2->VAR30;
    VAR9.VAR27 = VAR2->VAR31;
    VAR11->VAR32 = sizeof(struct VAR6) - 514 + VAR14 - sizeof(struct VAR25) - sizeof(struct VAR33);
    FUN4(NULL, VAR11, &VAR8, &VAR9, VAR34);
    return 0;
}