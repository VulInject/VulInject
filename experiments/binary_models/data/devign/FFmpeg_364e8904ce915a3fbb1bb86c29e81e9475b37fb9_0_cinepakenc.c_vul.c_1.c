static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5, unsigned char *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    AVPicture VAR16, VAR17, VAR18;
    int64_t VAR19 = 0, VAR20, VAR21;
    int64_t VAR22 = 0, VAR23, VAR24;
    int VAR25;
    if (VAR2->VAR26 == VAR27)
    {
        int VAR28;
        for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11 += 2)
        {
            for (VAR28 = 0; VAR28 < VAR2->VAR30; VAR28 += 2)
            {
                VAR31 *VAR32[2];
                int32_t VAR33, VAR34, VAR35, VAR36, VAR37, VAR38;
                VAR32[0] = ((VAR39 *)VAR4)->VAR40[0] + VAR28 * 3 + VAR11 * ((VAR39 *)VAR4)->VAR41[0];
                VAR32[1] = VAR32[0] + ((VAR39 *)VAR4)->VAR41[0];
                FUN2(VAR2, VAR28, VAR11, (VAR39 *)VAR2->VAR42, &VAR18);
                VAR33 = VAR34 = VAR35 = 0;
                for (VAR10 = 0; VAR10 < 4; ++VAR10)
                {
                    int VAR43, VAR44;
                    VAR43 = (VAR10 & 1);
                    VAR44 = (VAR10 >= 2);
                    VAR36 = VAR32[VAR44][VAR43 * 3 + 0];
                    VAR37 = VAR32[VAR44][VAR43 * 3 + 1];
                    VAR38 = VAR32[VAR44][VAR43 * 3 + 2];
                    VAR33 += VAR36;
                    VAR34 += VAR37;
                    VAR35 += VAR38;
                    VAR36 = (2396625 * VAR36 + 4793251 * VAR37 + 1198732 * VAR38) >> 23;
                    if (VAR36 < 0)
                        VAR36 = 0;
                    else if (VAR36 > 255)
                        VAR36 = 255;
                    VAR18.VAR40[0][VAR43 + VAR44 * VAR18.VAR41[0]] = VAR36;
                }
                VAR36 = (-299683 * VAR33 - 599156 * VAR34 + 898839 * VAR35) >> 23;
                if (VAR36 < -128)
                    VAR36 = -128;
                else if (VAR36 > 127)
                    VAR36 = 127;
                VAR18.VAR40[1][0] = VAR36 + 128;
                VAR36 = (748893 * VAR33 - 599156 * VAR34 - 149737 * VAR35) >> 23;
                if (VAR36 < -128)
                    VAR36 = -128;
                else if (VAR36 > 127)
                    VAR36 = 127;
                VAR18.VAR40[2][0] = VAR36 + 128;
            }
        }
    }
    for (VAR8 = VAR2->VAR45; VAR8 <= VAR2->VAR46 && VAR8 <= VAR2->VAR29 / VAR47; VAR8++)
    {
        VAR20 = 0;
        VAR13 = 0;
        VAR23 = 0;
        for (VAR11 = 0, VAR9 = 1; VAR11 < VAR2->VAR29; VAR9++, VAR11 = VAR12)
        {
            int VAR48;
            VAR12 = VAR9 * VAR2->VAR29 / VAR8;
            if (VAR12 & 3)
                VAR12 += 4 - (VAR12 & 3);
            VAR48 = VAR12 - VAR11;
            if (VAR48 <= 0)
            {
                FUN3(VAR2->VAR49, VAR50, "", VAR9, VAR8);
                continue;
            }
            if (VAR2->VAR26 == VAR27)
                FUN2(VAR2, 0, VAR11, (VAR39 *)VAR2->VAR42, &VAR17);
            else
                FUN2(VAR2, 0, VAR11, (VAR39 *)VAR4, &VAR17);
            FUN2(VAR2, 0, VAR11, (VAR39 *)VAR2->VAR51, &VAR16);
            FUN2(VAR2, 0, VAR11, (VAR39 *)VAR2->VAR52, &VAR18);
            if ((VAR14 = FUN4(VAR2, VAR11, VAR48, VAR5, &VAR16, &VAR17, &VAR18, VAR2->VAR53 + VAR13 + VAR54, &VAR21, &VAR24)) < 0)
                return VAR14;
            VAR20 += VAR21;
            VAR23 += VAR24;
            VAR13 += VAR14;
        }
        if (VAR19 == 0 || VAR20 < VAR19)
        {
            VAR19 = VAR20;
            VAR22 = VAR23;
            VAR15 = VAR13 + FUN5(VAR2, VAR2->VAR53, VAR8, VAR13, VAR5);
            FUN3(VAR2->VAR49, VAR50, "", VAR8, (long long int)VAR23, VAR15);
            FUN6(VAR3 *, VAR2->VAR55, VAR2->VAR52);
            memcpy(VAR6, VAR2->VAR53, VAR15);
            VAR25 = VAR8;
        }
        if (VAR8 - VAR25 > 4)
            break;
    }
    if (!VAR2->VAR56)
    {
        if (VAR25 == VAR2->VAR46)
        {
            VAR2->VAR46 = VAR25 + 1;
            if (VAR2->VAR46 >= VAR2->VAR57)
                VAR2->VAR46 = VAR2->VAR57;
        }
        else
        {
            VAR2->VAR46 = VAR25;
        }
        VAR2->VAR45 = VAR2->VAR46 - 1;
        if (VAR2->VAR45 < VAR2->VAR58)
            VAR2->VAR45 = VAR2->VAR58;
    }
    else
    {
        VAR2->VAR46 = VAR25 + VAR2->VAR56;
        if (VAR2->VAR46 >= VAR2->VAR57)
            VAR2->VAR46 = VAR2->VAR57;
        VAR2->VAR45 = VAR25 - VAR2->VAR56;
        if (VAR2->VAR45 < VAR2->VAR58)
            VAR2->VAR45 = VAR2->VAR58;
    }
    return VAR15;
}