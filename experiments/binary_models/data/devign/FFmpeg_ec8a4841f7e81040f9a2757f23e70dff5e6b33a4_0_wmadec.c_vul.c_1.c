static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10[VAR11];
    float VAR12;
    VAR13 *VAR14;
    FUN2(VAR2->VAR15, "", VAR2->VAR16 - 1, VAR2->VAR17);
    if (VAR2->VAR18)
    {
        VAR3 = FUN3(VAR2->VAR19 - 1) + 1;
        if (VAR2->VAR20)
        {
            VAR2->VAR20 = 0;
            VAR4 = FUN4(&VAR2->VAR21, VAR3);
            if (VAR4 >= VAR2->VAR19)
            {
                FUN5(VAR2->VAR15, VAR22, "", VAR2->VAR23 - VAR4);
                return -1;
                VAR2->VAR24 = VAR2->VAR23 - VAR4;
                VAR4 = FUN4(&VAR2->VAR21, VAR3);
                if (VAR4 >= VAR2->VAR19)
                {
                    FUN5(VAR2->VAR15, VAR22, "", VAR2->VAR23 - VAR4);
                    return -1;
                    VAR2->VAR25 = VAR2->VAR23 - VAR4;
                }
                else
                {
                    VAR2->VAR24 = VAR2->VAR25;
                    VAR2->VAR25 = VAR2->VAR26;
                    VAR4 = FUN4(&VAR2->VAR21, VAR3);
                    if (VAR4 >= VAR2->VAR19)
                    {
                        FUN5(VAR2->VAR15, VAR22, "", VAR2->VAR23 - VAR4);
                        return -1;
                        VAR2->VAR26 = VAR2->VAR23 - VAR4;
                    }
                    else
                    {
                        VAR2->VAR26 = VAR2->VAR23;
                        VAR2->VAR24 = VAR2->VAR23;
                        VAR2->VAR25 = VAR2->VAR23;
                        if (VAR2->VAR23 - VAR2->VAR25 >= VAR2->VAR19)
                        {
                            FUN5(VAR2->VAR15, VAR22, "");
                            return -1;
                            VAR2->VAR27 = 1 << VAR2->VAR25;
                            if ((VAR2->VAR28 + VAR2->VAR27) > VAR2->VAR29)
                            {
                                FUN5(VAR2->VAR15, VAR22, "");
                                return -1;
                                if (VAR2->VAR15->VAR30 == 2)
                                {
                                    VAR2->VAR31 = FUN6(&VAR2->VAR21);
                                    VAR4 = 0;
                                    for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                    {
                                        VAR5 = FUN6(&VAR2->VAR21);
                                        VAR2->VAR32[VAR6] = VAR5;
                                        VAR4 |= VAR5;
                                        VAR7 = VAR2->VAR23 - VAR2->VAR25;
                                        if (!VAR4)
                                            goto VAR33;
                                        VAR9 = 1;
                                        for (;;)
                                        {
                                            VAR5 = FUN4(&VAR2->VAR21, 7);
                                            VAR9 += VAR5;
                                            if (VAR5 != 127)
                                                break;
                                            VAR8 = FUN7(VAR9);
                                            VAR3 = VAR2->VAR34[VAR7] - VAR2->VAR35;
                                            for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                VAR10[VAR6] = VAR3;
                                            if (VAR2->VAR36)
                                            {
                                                for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                {
                                                    if (VAR2->VAR32[VAR6])
                                                    {
                                                        int VAR37, VAR3, VAR5;
                                                        VAR3 = VAR2->VAR38[VAR7];
                                                        for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                        {
                                                            VAR5 = FUN6(&VAR2->VAR21);
                                                            VAR2->VAR39[VAR6][VAR37] = VAR5;
                                                            if (VAR5)
                                                                VAR10[VAR6] -= VAR2->VAR40[VAR7][VAR37];
                                                            for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                            {
                                                                if (VAR2->VAR32[VAR6])
                                                                {
                                                                    int VAR37, VAR3, VAR41, VAR42;
                                                                    VAR3 = VAR2->VAR38[VAR7];
                                                                    VAR41 = (int)0x80000000;
                                                                    for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                    {
                                                                        if (VAR2->VAR39[VAR6][VAR37])
                                                                        {
                                                                            if (VAR41 == (int)0x80000000)
                                                                            {
                                                                                VAR41 = FUN4(&VAR2->VAR21, 7) - 19;
                                                                            }
                                                                            else
                                                                            {
                                                                                VAR42 = FUN8(&VAR2->VAR21, VAR2->VAR43.VAR44, VAR45, VAR46);
                                                                                if (VAR42 < 0)
                                                                                {
                                                                                    FUN5(VAR2->VAR15, VAR22, "");
                                                                                    return -1;
                                                                                    VAR41 += VAR42 - 18;
                                                                                    VAR2->VAR47[VAR6][VAR37] = VAR41;
                                                                                    if ((VAR2->VAR25 == VAR2->VAR23) || FUN6(&VAR2->VAR21))
                                                                                    {
                                                                                        for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                                                        {
                                                                                            if (VAR2->VAR32[VAR6])
                                                                                            {
                                                                                                if (VAR2->VAR48)
                                                                                                {
                                                                                                    if (FUN9(VAR2, VAR6) < 0)
                                                                                                        return -1;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    FUN10(VAR2, VAR6);
                                                                                                    VAR2->VAR49[VAR6] = VAR7;
                                                                                                    for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                                                                    {
                                                                                                        if (VAR2->VAR32[VAR6])
                                                                                                        {
                                                                                                            int VAR50;
                                                                                                            VAR51 *VAR52 = &VAR2->VAR53[VAR6][0];
                                                                                                            VAR50 = (VAR6 == 1 && VAR2->VAR31);
                                                                                                            memset(VAR52, 0, VAR2->VAR27 * sizeof(VAR51));
                                                                                                            FUN11(VAR2->VAR15, &VAR2->VAR21, &VAR2->VAR54[VAR50], VAR2->VAR55[VAR50], VAR2->VAR56[VAR50], 0, VAR52, 0, VAR10[VAR6], VAR2->VAR27, VAR2->VAR23, VAR8);
                                                                                                            if (VAR2->VAR57 == 1 && VAR2->VAR15->VAR30 >= 2)
                                                                                                            {
                                                                                                                FUN12(&VAR2->VAR21);
                                                                                                                {
                                                                                                                    int VAR58 = VAR2->VAR27 / 2;
                                                                                                                    VAR12 = 1.0 / (float)VAR58;
                                                                                                                    if (VAR2->VAR57 == 1)
                                                                                                                    {
                                                                                                                        VAR12 *= FUN13(VAR58);
                                                                                                                        for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                                                                                        {
                                                                                                                            if (VAR2->VAR32[VAR6])
                                                                                                                            {
                                                                                                                                VAR51 *VAR53;
                                                                                                                                float *VAR59, *VAR60, VAR61, VAR62, VAR63;
                                                                                                                                int VAR37, VAR64, VAR3, VAR65, VAR66, VAR67;
                                                                                                                                float VAR68[VAR69];
                                                                                                                                VAR53 = VAR2->VAR53[VAR6];
                                                                                                                                VAR60 = VAR2->VAR60[VAR6];
                                                                                                                                VAR67 = VAR2->VAR49[VAR6];
                                                                                                                                VAR61 = FUN14(10, VAR9 * 0.05) / VAR2->VAR70[VAR6];
                                                                                                                                VAR61 *= VAR12;
                                                                                                                                VAR59 = VAR2->VAR59[VAR6];
                                                                                                                                if (VAR2->VAR36)
                                                                                                                                {
                                                                                                                                    VAR62 = VAR61;
                                                                                                                                    for (VAR37 = 0; VAR37 < VAR2->VAR35; VAR37++)
                                                                                                                                    {
                                                                                                                                        *VAR59++ = VAR2->VAR71[VAR2->VAR72] * VAR60[VAR37 << VAR7 >> VAR67] * VAR62;
                                                                                                                                        VAR2->VAR72 = (VAR2->VAR72 + 1) & (VAR73 - 1);
                                                                                                                                        VAR65 = VAR2->VAR38[VAR7];
                                                                                                                                        VAR60 = VAR2->VAR60[VAR6] + (VAR2->VAR74[VAR7] << VAR7 >> VAR67);
                                                                                                                                        VAR66 = 0;
                                                                                                                                        for (VAR64 = 0; VAR64 < VAR65; VAR64++)
                                                                                                                                        {
                                                                                                                                            VAR3 = VAR2->VAR40[VAR2->VAR23 - VAR2->VAR25][VAR64];
                                                                                                                                            if (VAR2->VAR39[VAR6][VAR64])
                                                                                                                                            {
                                                                                                                                                float VAR75, VAR4;
                                                                                                                                                VAR75 = 0;
                                                                                                                                                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                {
                                                                                                                                                    VAR4 = VAR60[VAR37 << VAR7 >> VAR67];
                                                                                                                                                    VAR75 += VAR4 * VAR4;
                                                                                                                                                    VAR68[VAR64] = VAR75 / VAR3;
                                                                                                                                                    VAR66 = VAR64;
                                                                                                                                                    FUN2(VAR2->VAR15, "", VAR64, VAR68[VAR64], VAR3);
                                                                                                                                                    VAR60 += VAR3 << VAR7 >> VAR67;
                                                                                                                                                    VAR60 = VAR2->VAR60[VAR6] + (VAR2->VAR35 << VAR7 >> VAR67);
                                                                                                                                                    for (VAR64 = -1; VAR64 < VAR65; VAR64++)
                                                                                                                                                    {
                                                                                                                                                        if (VAR64 < 0)
                                                                                                                                                        {
                                                                                                                                                            VAR3 = VAR2->VAR74[VAR7] - VAR2->VAR35;
                                                                                                                                                        }
                                                                                                                                                        else
                                                                                                                                                        {
                                                                                                                                                            VAR3 = VAR2->VAR40[VAR2->VAR23 - VAR2->VAR25][VAR64];
                                                                                                                                                            if (VAR64 >= 0 && VAR2->VAR39[VAR6][VAR64])
                                                                                                                                                            {
                                                                                                                                                                VAR62 = FUN13(VAR68[VAR64] / VAR68[VAR66]);
                                                                                                                                                                VAR62 = VAR62 * FUN14(10, VAR2->VAR47[VAR6][VAR64] * 0.05);
                                                                                                                                                                VAR62 = VAR62 / (VAR2->VAR70[VAR6] * VAR2->VAR76);
                                                                                                                                                                VAR62 *= VAR12;
                                                                                                                                                                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                                {
                                                                                                                                                                    VAR63 = VAR2->VAR71[VAR2->VAR72];
                                                                                                                                                                    VAR2->VAR72 = (VAR2->VAR72 + 1) & (VAR73 - 1);
                                                                                                                                                                    *VAR59++ = VAR63 * VAR60[VAR37 << VAR7 >> VAR67] * VAR62;
                                                                                                                                                                    VAR60 += VAR3 << VAR7 >> VAR67;
                                                                                                                                                                }
                                                                                                                                                                else
                                                                                                                                                                {
                                                                                                                                                                    for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                                    {
                                                                                                                                                                        VAR63 = VAR2->VAR71[VAR2->VAR72];
                                                                                                                                                                        VAR2->VAR72 = (VAR2->VAR72 + 1) & (VAR73 - 1);
                                                                                                                                                                        *VAR59++ = ((*VAR53++) + VAR63) * VAR60[VAR37 << VAR7 >> VAR67] * VAR61;
                                                                                                                                                                        VAR60 += VAR3 << VAR7 >> VAR67;
                                                                                                                                                                        VAR3 = VAR2->VAR27 - VAR2->VAR34[VAR7];
                                                                                                                                                                        VAR62 = VAR61 * VAR60[((-1 << VAR7)) >> VAR67];
                                                                                                                                                                        for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                                        {
                                                                                                                                                                            *VAR59++ = VAR2->VAR71[VAR2->VAR72] * VAR62;
                                                                                                                                                                            VAR2->VAR72 = (VAR2->VAR72 + 1) & (VAR73 - 1);
                                                                                                                                                                        }
                                                                                                                                                                        else
                                                                                                                                                                        {
                                                                                                                                                                            for (VAR37 = 0; VAR37 < VAR2->VAR35; VAR37++)
                                                                                                                                                                                *VAR59++ = 0.0;
                                                                                                                                                                            VAR3 = VAR10[VAR6];
                                                                                                                                                                            for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                                            {
                                                                                                                                                                                *VAR59++ = VAR53[VAR37] * VAR60[VAR37 << VAR7 >> VAR67] * VAR61;
                                                                                                                                                                                VAR3 = VAR2->VAR27 - VAR2->VAR34[VAR7];
                                                                                                                                                                                for (VAR37 = 0; VAR37 < VAR3; VAR37++)
                                                                                                                                                                                    *VAR59++ = 0.0;
                                                                                                                                                                                for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                                                                                                                                                {
                                                                                                                                                                                    if (VAR2->VAR32[VAR6])
                                                                                                                                                                                    {
                                                                                                                                                                                        FUN15(VAR2, "", 3, VAR2->VAR60[VAR6], VAR2->VAR27);
                                                                                                                                                                                        FUN15(VAR2, "", 1, VAR2->VAR59[VAR6], VAR2->VAR27);
                                                                                                                                                                                        if (VAR2->VAR31 && VAR2->VAR32[1])
                                                                                                                                                                                        {
                                                                                                                                                                                            if (!VAR2->VAR32[0])
                                                                                                                                                                                            {
                                                                                                                                                                                                FUN2(VAR2->VAR15, "");
                                                                                                                                                                                                memset(VAR2->VAR59[0], 0, sizeof(float) * VAR2->VAR27);
                                                                                                                                                                                                VAR2->VAR32[0] = 1;
                                                                                                                                                                                                VAR2->VAR77.FUN16(VAR2->VAR59[0], VAR2->VAR59[1], VAR2->VAR27);
                                                                                                                                                                                            VAR33:
                                                                                                                                                                                                VAR14 = &VAR2->VAR78[VAR7];
                                                                                                                                                                                                for (VAR6 = 0; VAR6 < VAR2->VAR15->VAR30; VAR6++)
                                                                                                                                                                                                {
                                                                                                                                                                                                    int VAR58, VAR79;
                                                                                                                                                                                                    VAR58 = VAR2->VAR27 / 2;
                                                                                                                                                                                                    if (VAR2->VAR32[VAR6])
                                                                                                                                                                                                    {
                                                                                                                                                                                                        VAR14->FUN17(VAR14, VAR2->VAR80, VAR2->VAR59[VAR6]);
                                                                                                                                                                                                    }
                                                                                                                                                                                                    else if (!(VAR2->VAR31 && VAR6 == 1))
                                                                                                                                                                                                        memset(VAR2->VAR80, 0, sizeof(VAR2->VAR80));
                                                                                                                                                                                                    VAR79 = (VAR2->VAR29 / 2) + VAR2->VAR28 - VAR58;
                                                                                                                                                                                                    FUN18(VAR2, &VAR2->VAR81[VAR6][VAR79]);
                                                                                                                                                                                                    VAR2->VAR17++;
                                                                                                                                                                                                    VAR2->VAR28 += VAR2->VAR27;
                                                                                                                                                                                                    if (VAR2->VAR28 >= VAR2->VAR29)
                                                                                                                                                                                                        return 1;
                                                                                                                                                                                                    else
                                                                                                                                                                                                        return 0;