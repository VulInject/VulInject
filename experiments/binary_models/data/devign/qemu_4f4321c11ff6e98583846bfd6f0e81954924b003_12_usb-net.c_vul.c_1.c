static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR4->VAR6;
    int VAR7 = sizeof(VAR2->VAR8) - VAR2->VAR9;
    struct VAR10 *VAR11 = (struct VAR10 *)VAR2->VAR8;
    uint32_t VAR6;
    fprintf(VAR12, "", VAR4->VAR6);
    {
        int VAR13;
        fprintf(VAR12, "");
        for (VAR13 = 0; VAR13 < VAR4->VAR6; VAR13++)
        {
            if (!(VAR13 & 15))
                fprintf(VAR12, "", VAR13);
            fprintf(VAR12, "", VAR4->VAR14[VAR13]);
        }
        fprintf(VAR12, "");
    }
    if (VAR7 > VAR5)
        VAR7 = VAR5;
    memcpy(&VAR2->VAR8[VAR2->VAR9], VAR4->VAR14, VAR7);
    VAR2->VAR9 += VAR7;
    if (!FUN2(VAR2))
    {
        if (VAR5 < 64)
        {
            FUN3(&VAR2->VAR15->VAR16, VAR2->VAR8, VAR2->VAR9);
            VAR2->VAR9 = 0;
        }
        return VAR5;
    }
    VAR6 = FUN4(VAR11->VAR17);
    if (VAR2->VAR9 < 8 || VAR2->VAR9 < VAR6)
        return VAR5;
    if (FUN4(VAR11->VAR18) == VAR19)
    {
        uint32_t VAR20 = 8 + FUN4(VAR11->VAR21);
        uint32_t VAR22 = FUN4(VAR11->VAR23);
        if (VAR20 + VAR22 <= VAR6)
            FUN3(&VAR2->VAR15->VAR16, VAR2->VAR8 + VAR20, VAR22);
    }
    VAR2->VAR9 -= VAR6;
    memmove(VAR2->VAR8, &VAR2->VAR8[VAR6], VAR2->VAR9);
    return VAR5;
}