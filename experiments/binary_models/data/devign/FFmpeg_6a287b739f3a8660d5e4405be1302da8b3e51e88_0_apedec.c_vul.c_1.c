static inline int FUN1(VAR1 *VAR2, const uint32_t VAR3[], const uint16_t VAR4[])
{
    int VAR5, VAR6;
    VAR6 = FUN2(VAR2, 16);
    for (VAR5 = 0; VAR3[VAR5 + 1] <= VAR6; VAR5++)
        ;
    FUN3(VAR2, VAR4[VAR5], VAR3[VAR5]);