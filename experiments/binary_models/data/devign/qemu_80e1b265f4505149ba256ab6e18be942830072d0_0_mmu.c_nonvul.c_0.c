void FUN1(VAR1 *VAR2, uint32_t VAR3)
{
    target_ulong VAR4;
    unsigned int VAR5;
    uint32_t VAR6, VAR7;
    uint32_t VAR8;
    int VAR9, VAR10, VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    VAR3 &= 0xff;
    for (VAR13 = 0; VAR13 < 2; VAR13++)
    {
        for (VAR12 = 0; VAR12 < 4; VAR12++)
        {
            for (VAR5 = 0; VAR5 < 16; VAR5++)
            {
                VAR6 = VAR2->VAR14[VAR13][VAR12][VAR5].VAR6;
                VAR7 = VAR2->VAR14[VAR13][VAR12][VAR5].VAR7;
                VAR8 = FUN2(VAR7, 13, 31);
                VAR9 = FUN2(VAR7, 0, 7);
                VAR10 = FUN2(VAR6, 4, 4);
                VAR11 = FUN2(VAR6, 3, 3);
                if (VAR11 && !VAR10 && (VAR9 == VAR3))
                {
                    VAR4 = VAR8 << VAR15;
                    FUN3(fprintf(VAR16, "", VAR3, VAR4));
                    FUN4(VAR2, VAR4);
                }
            }
        }
    }
}