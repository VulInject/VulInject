void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    FUN2(VAR7, 1);
    int VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    assert(VAR2->VAR13[VAR5] >= 0);
    FUN3(VAR7, 1);
    VAR11 = (VAR6 - 1) | 1;
    VAR10 = VAR6 << 1;
    if (VAR2->VAR14)
    {
        if (!VAR2->VAR15)
        {
            if (VAR5 < 4)
                VAR4[0] = VAR4[0] * VAR2->VAR16;
            else
                VAR4[0] = VAR4[0] * VAR2->VAR17;
        }
        else
            VAR11 = 0;
        VAR8 = 1;
        VAR12 = 63;
    }
    else
    {
        VAR8 = 0;
        VAR12 = VAR2->VAR18.VAR19[VAR2->VAR13[VAR5]];
    }
    for (; VAR8 <= VAR12; VAR8++)
    {
        VAR9 = VAR4[VAR8];
        if (VAR9)
        {
            if (VAR9 < 0)
            {
                VAR9 = VAR9 * VAR10 - VAR11;
            }
            else
            {
                VAR9 = VAR9 * VAR10 + VAR11;
            }
            VAR4[VAR8] = VAR9;
        }
    }
    {
        register const vector short VAR20 = (const vector short)FUN4(0);
        short FUN5((FUN6(16))) VAR21[] = {VAR10, VAR10, VAR10, VAR10, VAR10, VAR10, VAR10, VAR10};
        short FUN5((FUN6(16))) VAR22[] = {VAR11, VAR11, VAR11, VAR11, VAR11, VAR11, VAR11, VAR11};
        short FUN5((FUN6(16))) VAR23[] = {-VAR11, -VAR11, -VAR11, -VAR11, -VAR11, -VAR11, -VAR11, -VAR11};
        register vector short VAR24, VAR25, VAR26, VAR27, VAR28;
        register vector bool short VAR29, VAR30;
        register short VAR31 = VAR4[0];
        register int VAR32 = 0;
        VAR25 = FUN7(0, VAR21);
        VAR26 = FUN7(0, VAR22);
        VAR27 = FUN7(0, VAR23);
        for (VAR32 = 0; (VAR32 <= VAR12) && ((((unsigned long)VAR4) + (VAR32 << 1)) & 0x0000000F); VAR32++)
        {
            VAR9 = VAR4[VAR32];
            if (VAR9)
            {
                if (VAR9 < 0)
                {
                    VAR9 = VAR9 * VAR10 - VAR11;
                }
                else
                {
                    VAR9 = VAR9 * VAR10 + VAR11;
                }
                VAR4[VAR32] = VAR9;
            }
        }
        for (; (VAR32 + 7) <= VAR12; VAR32 += 8)
        {
            VAR24 = FUN7(VAR32 << 1, VAR4);
            VAR30 = FUN8(VAR24, VAR20);
            VAR29 = FUN9(VAR24, VAR20);
            VAR28 = FUN10(VAR26, VAR27, VAR30);
            VAR28 = FUN11(VAR24, VAR25, VAR28);
            VAR24 = FUN10(VAR28, VAR24, VAR29);
            FUN12(VAR24, VAR32 << 1, VAR4);
        }
        for (; VAR32 <= VAR12; VAR32++)
        {
            VAR9 = VAR4[VAR32];
            if (VAR9)
            {
                if (VAR9 < 0)
                {
                    VAR9 = VAR9 * VAR10 - VAR11;
                }
                else
                {
                    VAR9 = VAR9 * VAR10 + VAR11;
                }
                VAR4[VAR32] = VAR9;
            }
        }
        if (VAR8 == 1)
        {
            VAR4[0] = VAR31;
        }
    }
    FUN13(VAR7, VAR12 == 63);
}