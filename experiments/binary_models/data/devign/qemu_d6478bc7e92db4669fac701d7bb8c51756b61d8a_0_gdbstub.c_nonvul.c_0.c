static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    if (VAR5 < 32)
    {
        VAR2->VAR6[VAR5] = FUN2(VAR4);
        return sizeof(VAR7);
    }
    else if (VAR5 < 64)
    {
        if (VAR8)
            return 0;
        VAR2->VAR9[VAR5 - 32] = FUN3(VAR4);
        return 8;
    }
    else
    {
        switch (VAR5)
        {
        case 64:
            VAR2->VAR10 = FUN2(VAR4);
            return sizeof(VAR7);
        case 65:
            FUN4(VAR2, FUN2(VAR4));
            return sizeof(VAR7);
        case 66:
        {
            uint32_t VAR11 = FUN5(VAR4);
            int VAR12;
            for (VAR12 = 0; VAR12 < 8; VAR12++)
                VAR2->VAR13[VAR12] = (VAR11 >> (32 - ((VAR12 + 1) * 4))) & 0xF;
            return 4;
        }
        case 67:
            VAR2->VAR14 = FUN2(VAR4);
            return sizeof(VAR7);
        case 68:
            VAR2->VAR15 = FUN2(VAR4);
            return sizeof(VAR7);
        case 69:
            VAR2->VAR16 = FUN2(VAR4);
            return sizeof(VAR7);
        case 70:
            if (VAR8)
                return 0;
            FUN6(VAR2, FUN2(VAR4), 0xffffffff);
            return sizeof(VAR7);
        }
    }
    return 0;
}