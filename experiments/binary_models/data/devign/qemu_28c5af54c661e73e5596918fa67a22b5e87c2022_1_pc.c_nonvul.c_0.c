static void FUN1(int VAR1, const char *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = VAR7;
    int VAR8, VAR9[3] = {
                  0,
              };
    int VAR10;
    int VAR11, VAR12, VAR13;
    int VAR14;
    VAR10 = 640;
    FUN2(VAR6, 0x15, VAR10);
    FUN2(VAR6, 0x16, VAR10 >> 8);
    VAR10 = (VAR1 / 1024) - 1024;
    if (VAR10 > 65535)
        VAR10 = 65535;
    FUN2(VAR6, 0x17, VAR10);
    FUN2(VAR6, 0x18, VAR10 >> 8);
    FUN2(VAR6, 0x30, VAR10);
    FUN2(VAR6, 0x31, VAR10 >> 8);
    if (VAR1 > (16 * 1024 * 1024))
        VAR10 = (VAR1 / 65536) - ((16 * 1024 * 1024) / 65536);
    else
        VAR10 = 0;
    if (VAR10 > 65535)
        VAR10 = 65535;
    FUN2(VAR6, 0x34, VAR10);
    FUN2(VAR6, 0x35, VAR10 >> 8);
    VAR8 = strlen(VAR2);
    if (VAR8 > VAR15)
    {
        fprintf(VAR16, "");
        FUN3(1);
    }
    for (VAR14 = 0; VAR14 < VAR8; VAR14++)
    {
        VAR9[VAR14] = FUN4(VAR2[VAR14]);
        if (VAR9[VAR14] == 0)
        {
            fprintf(VAR16, "", VAR2[VAR14]);
            FUN3(1);
        }
    }
    FUN2(VAR6, 0x3d, (VAR9[1] << 4) | VAR9[0]);
    FUN2(VAR6, 0x38, (VAR9[2] << 4) | (VAR17 ? 0x0 : 0x1));
    VAR11 = FUN5(VAR18, 0);
    VAR12 = FUN5(VAR18, 1);
    VAR10 = (FUN6(VAR11) << 4) | FUN6(VAR12);
    FUN2(VAR6, 0x10, VAR10);
    VAR10 = 0;
    VAR13 = 0;
    if (VAR11 < 3)
        VAR13++;
    if (VAR12 < 3)
        VAR13++;
    switch (VAR13)
    {
    case 0:
        break;
    case 1:
        VAR10 |= 0x01;
        break;
    case 2:
        VAR10 |= 0x41;
        break;
    }
    VAR10 |= 0x02;
    VAR10 |= 0x04;
    FUN2(VAR6, VAR19, VAR10);
    FUN2(VAR6, 0x12, (VAR4[0] ? 0xf0 : 0) | (VAR4[1] ? 0x0f : 0));
    if (VAR4[0])
        FUN7(0x19, 0x1b, VAR4[0]);
    if (VAR4[1])
        FUN7(0x1a, 0x24, VAR4[1]);
    VAR10 = 0;
    for (VAR14 = 0; VAR14 < 4; VAR14++)
    {
        if (VAR4[VAR14])
        {
            int VAR20, VAR21, VAR22, VAR23;
            VAR23 = FUN8(VAR4[VAR14]);
            if (VAR23 == VAR24)
            {
                FUN9(VAR4[VAR14], &VAR20, &VAR21, &VAR22);
                if (VAR20 <= 1024 && VAR21 <= 16 && VAR22 <= 63)
                {
                    VAR23 = 0;
                }
                else
                {
                    VAR23 = 1;
                }
            }
            else
            {
                VAR23--;
            }
            VAR10 |= VAR23 << (VAR14 * 2);
        }
    }
    FUN2(VAR6, 0x39, VAR10);
}