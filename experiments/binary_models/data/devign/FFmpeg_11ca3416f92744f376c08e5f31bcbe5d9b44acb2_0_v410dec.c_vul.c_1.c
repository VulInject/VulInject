static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR3;
    VAR12 *VAR13, *VAR14, *VAR15;
    uint32_t VAR16;
    int VAR17, VAR18;
    if (VAR8->VAR3[0])
        VAR2->FUN2(VAR2, VAR8);
    VAR8->VAR19 = 0;
    if (VAR2->FUN3(VAR2, VAR8) < 0)
    {
        FUN4(VAR2, VAR20, "");
        return FUN5(VAR21);
        VAR8->VAR22 = 1;
        VAR8->VAR23 = VAR24;
        VAR13 = (VAR12 *)VAR8->VAR3[0];
        VAR14 = (VAR12 *)VAR8->VAR3[1];
        VAR15 = (VAR12 *)VAR8->VAR3[2];
        for (VAR17 = 0; VAR17 < VAR2->VAR25; VAR17++)
        {
            for (VAR18 = 0; VAR18 < VAR2->VAR26; VAR18++)
            {
                VAR16 = FUN6(VAR11);
                VAR14[VAR18] = (VAR16 >> 2) & 0x3FF;
                VAR13[VAR18] = (VAR16 >> 12) & 0x3FF;
                VAR15[VAR18] = (VAR16 >> 22);
                VAR11 += 4;
                VAR13 += VAR8->VAR27[0] >> 1;
                VAR14 += VAR8->VAR27[1] >> 1;
                VAR15 += VAR8->VAR27[2] >> 1;
                *VAR4 = sizeof(VAR7);
                *(VAR7 *)VAR3 = *VAR8;
                return VAR6->VAR28