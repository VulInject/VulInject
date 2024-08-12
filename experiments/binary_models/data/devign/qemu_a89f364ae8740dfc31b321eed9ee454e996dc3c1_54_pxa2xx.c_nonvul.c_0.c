static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR1;
    VAR7 *VAR8;
    switch (VAR2)
    {
    case VAR9:
        if (VAR3 & (1 << 3))
            FUN2(VAR6);
        VAR6->VAR10[0] = VAR3 & 0xff3d;
        if (!VAR6->VAR11 && (VAR3 & 1) && VAR6->VAR12)
        {
            for (VAR8 = VAR6->VAR13; VAR6->VAR14 > 0; VAR6->VAR14--, VAR8++)
                VAR6->FUN3(VAR6->VAR1, *VAR8);
            VAR6->VAR15 &= ~(1 << 7);
        }
        if (VAR3 & (1 << 4))
            FUN4("", VAR16);
        VAR6->VAR11 = (VAR3 & 9) == 1;
        FUN5(VAR6);
        break;
    case VAR17:
        VAR6->VAR10[1] = VAR3 & 0x0039;
        if (VAR3 & (1 << 5))
            FUN4("", VAR16);
        if (VAR3 & (1 << 4))
            VAR6->VAR14 = 0;
        FUN5(VAR6);
        break;
    case VAR18:
        VAR6->VAR19 = VAR3 & 0x0078;
        FUN5(VAR6);
        break;
    case VAR20:
        VAR6->VAR15 &= ~(VAR3 & (3 << 5));
        FUN5(VAR6);
        break;
    case VAR21:
        VAR6->VAR22 = VAR3 & 0x007f;
        break;
    case VAR23:
        if (VAR6->VAR12 && VAR6->VAR11)
        {
            VAR6->VAR12--;
            FUN5(VAR6);
            VAR6->FUN3(VAR6->VAR1, VAR3);
        }
        else if (VAR6->VAR14 < 16)
        {
            VAR6->VAR13[VAR6->VAR14++] = VAR3;
            FUN5(VAR6);
        }
        break;
    default:
        FUN4("" VAR24 "", VAR16, VAR2);
    }
}