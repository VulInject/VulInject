static void FUN1(VAR1 *VAR2)
{
    uint8_t VAR3, VAR4, VAR5;
    int VAR6, VAR7, VAR8;
    if (VAR2->VAR9 == 0)
    {
        return;
        VAR8 = VAR2->VAR10 & VAR11;
        FUN2(VAR2->VAR10);
        VAR2->VAR9--;
        VAR7 = VAR2->VAR12.VAR13[VAR8];
        VAR5 = VAR7 & 0x7f;
        VAR4 = VAR5 | ((VAR2->VAR12.VAR14 & (1 << 8)) >> 1);
        VAR3 = VAR15[VAR4];
        VAR2->VAR12.VAR14 &= ~(1 << 8);
        switch (VAR3)
        {
        case 0x00:
            return;
        case 0xe0:
            assert(VAR5 == 0x1d);
            if (VAR2->VAR12.VAR14 & (1 << 9))
            {
                VAR2->VAR12.VAR14 ^= (1 << 8) | (1 << 9);
                return;
            case 0xe1 ... 0xe7:
                if (VAR7 & (1 << 7))
                {
                    VAR2->VAR12.VAR14 &= ~(1 << (VAR3 & 0x0f));
                    return;
                case 0xe8 ... 0xe9:
                    VAR2->VAR12.VAR14 |= 1 << (VAR3 & 0x0f);
                    return;
                case 0xea ... 0xef:
                    FUN3();
                default:
                    break;
                    if (VAR7 & (1 << 7))
                    {
                        for (VAR6 = VAR2->VAR12.VAR16 - 1; VAR6 >= 0; VAR6--)
                        {
                            if (VAR2->VAR12.VAR5[VAR6] == VAR3)
                            {
                                VAR2->VAR12.VAR5[VAR6] = VAR2->VAR12.VAR5[--VAR2->VAR12.VAR16];
                                VAR2->VAR12.VAR5[VAR2->VAR12.VAR16] = 0x00;
                                break;
                                if (VAR6 < 0)
                                {
                                    return;
                                }
                                else
                                {
                                    for (VAR6 = VAR2->VAR12.VAR16 - 1; VAR6 >= 0; VAR6--)
                                    {
                                        if (VAR2->VAR12.VAR5[VAR6] == VAR3)
                                        {
                                            break;
                                            if (VAR6 < 0)
                                            {
                                                if (VAR2->VAR12.VAR16 < sizeof(VAR2->VAR12.VAR5))
                                                {
                                                    VAR2->VAR12.VAR5[VAR2->VAR12.VAR16++] = VAR3;
                                                }
                                                else
                                                {
                                                    return