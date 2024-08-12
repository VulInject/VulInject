static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    int VAR7;
    if (VAR4[0] == VAR8)
    {
        VAR7 = FUN2(VAR4 + 7);
    }
    else
    {
        VAR7 = VAR4[4];
    }
    VAR5 = VAR4[2] >> 6;
    VAR6 = VAR4[2] & 0x3f;
    switch (VAR5)
    {
    case 0:
        switch (VAR6)
        {
        case VAR9:
            FUN3(&VAR4[0], 16 + 6);
            VAR4[2] = 0x70;
            VAR4[3] = 0;
            VAR4[4] = 0;
            VAR4[5] = 0;
            VAR4[6] = 0;
            VAR4[7] = 0;
            VAR4[8] = VAR9;
            VAR4[9] = 16 - 10;
            VAR4[10] = 0x00;
            VAR4[11] = 0x05;
            VAR4[12] = 0x00;
            VAR4[13] = 0x00;
            VAR4[14] = 0x00;
            VAR4[15] = 0x00;
            FUN4(VAR2, 16, VAR7);
            break;
        case VAR10:
            FUN3(&VAR4[0], 24 + 6);
            VAR4[2] = 0x70;
            VAR4[3] = 0;
            VAR4[4] = 0;
            VAR4[5] = 0;
            VAR4[6] = 0;
            VAR4[7] = 0;
            VAR4[8] = VAR10;
            VAR4[9] = 24 - 10;
            VAR4[17] = 0;
            VAR4[19] = 0;
            VAR4[21] = 0;
            VAR4[23] = 0;
            FUN4(VAR2, 24, VAR7);
            break;
        case VAR11:
            FUN3(&VAR4[0], 28 + 6);
            VAR4[2] = 0x70;
            VAR4[3] = 0;
            VAR4[4] = 0;
            VAR4[5] = 0;
            VAR4[6] = 0;
            VAR4[7] = 0;
            VAR4[8] = VAR11;
            VAR4[9] = 28 - 10;
            VAR4[10] = 0x3b;
            VAR4[11] = 0x00;
            VAR4[12] = 0x71;
            VAR4[13] = 3 << 5;
            VAR4[14] = (1 << 0) | (1 << 3) | (1 << 5);
            if (VAR2->VAR12)
            {
                VAR4[14] |= 1 << 1;
            }
            VAR4[15] = 0x00;
            FUN3(&VAR4[16], 704);
            VAR4[18] = 0;
            VAR4[19] = 2;
            FUN3(&VAR4[20], 512);
            FUN3(&VAR4[22], 704);
            VAR4[24] = 0;
            VAR4[25] = 0;
            VAR4[26] = 0;
            VAR4[27] = 0;
            FUN4(VAR2, 28, VAR7);
            break;
        default:
            goto VAR13;
        }
        break;
    case 1:
        goto VAR13;
    case 2:
        goto VAR13;
    default:
    case 3:
        FUN5(VAR2, VAR14, VAR15);
        break;
    }
    return;
VAR13:
    FUN5(VAR2, VAR14, VAR16);
}