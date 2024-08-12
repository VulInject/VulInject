static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int *VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR10;
    while (!FUN2(VAR10))
    {
        ff_asf_guid VAR11;
        int VAR12, VAR13, VAR14;
        FUN3(VAR10, &VAR11);
        VAR12 = FUN4(VAR10);
        if (VAR12 < 32)
            break;
        VAR13 = FUN4(VAR10) & 0x7FFF;
        FUN5(VAR10, 8);
        VAR14 = 32;
        if (!FUN6(VAR11, VAR15))
        {
            if (FUN7(VAR2, VAR13) < 0)
            {
                ff_asf_guid VAR16, VAR17, VAR18;
                int VAR19;
                FUN5(VAR10, 28);
                FUN3(VAR10, &VAR16);
                FUN3(VAR10, &VAR17);
                FUN5(VAR10, 12);
                FUN3(VAR10, &VAR18);
                VAR19 = FUN4(VAR10);
                FUN8(VAR2, 0, VAR13, VAR16, VAR17, VAR18, VAR19);
                VAR14 += 92 + VAR19;
            }
        }
        else if (!FUN6(VAR11, VAR20))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0 && !((VAR22 *)VAR2->VAR23[VAR21]->VAR8)->VAR24)
            {
                ff_asf_guid VAR16, VAR17, VAR18;
                int VAR19;
                FUN5(VAR10, 12);
                FUN3(VAR10, &VAR16);
                FUN3(VAR10, &VAR17);
                FUN5(VAR10, 12);
                FUN3(VAR10, &VAR18);
                VAR19 = FUN4(VAR10);
                FUN8(VAR2, VAR2->VAR23[VAR21], VAR13, VAR16, VAR17, VAR18, VAR19);
                VAR14 += 76 + VAR19;
            }
        }
        else if (!FUN6(VAR11, VAR25) || !FUN6(VAR11, VAR26) || !FUN6(VAR11, VAR27) || !FUN6(VAR11, VAR28) || !FUN6(VAR11, VAR29) || !FUN6(VAR11, VAR30))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
            {
                VAR31 *VAR32 = VAR2->VAR23[VAR21];
                uint8_t VAR33[258];
                const VAR34 *VAR35 = VAR33;
                int VAR36;
                FUN5(VAR10, 8);
                VAR14 += 8;
                if (!FUN6(VAR11, VAR26) || !FUN6(VAR11, VAR27))
                {
                    FUN5(VAR10, 6);
                    VAR14 += 6;
                }
                VAR36 = FUN9(VAR12 - VAR14, sizeof(VAR33));
                FUN10(VAR10, VAR33, VAR36);
                VAR14 += VAR36;
                FUN11(VAR2, VAR32, 0, &VAR35, VAR33 + VAR36, NULL, 0, 0, NULL);
            }
        }
        else if (!FUN6(VAR11, VAR37))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
            {
                VAR31 *VAR32 = VAR2->VAR23[VAR21];
                int VAR38;
                FUN5(VAR10, 8);
                VAR38 = FUN12(VAR10);
                if (VAR38 == 2)
                    VAR32->VAR39 |= VAR40;
                else if (VAR38 == 3)
                    VAR32->VAR39 |= VAR41;
                VAR14 += 9;
            }
        }
        else if (!FUN6(VAR11, VAR42))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
            {
                FUN5(VAR10, 12);
                if (FUN4(VAR10))
                    FUN13(VAR2, VAR43, "", VAR21);
                VAR14 += 16;
            }
        }
        else if (!FUN6(VAR11, VAR44))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
            {
                VAR31 *VAR32 = VAR2->VAR23[VAR21];
                uint8_t VAR45[4];
                FUN5(VAR10, 12);
                FUN10(VAR10, VAR45, 3);
                if (VAR45[0])
                {
                    VAR45[3] = 0;
                    FUN14(&VAR32->VAR46, "", VAR45, 0);
                    if (!strcmp(VAR45, "") || !strcmp(VAR45, ""))
                        VAR32->VAR39 |= VAR41;
                }
                VAR14 += 15;
            }
        }
        else if (!FUN6(VAR11, VAR47))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
            {
                FUN5(VAR10, 8);
                VAR7->VAR48 = FUN15(VAR10);
                VAR14 += 16;
                if (VAR7->VAR48 == -1)
                    VAR7->VAR48 = VAR49;
                else
                {
                    VAR7->VAR50 = VAR7->VAR48;
                    if (VAR7->VAR51 == VAR49 || VAR7->VAR48 < VAR7->VAR51)
                        VAR7->VAR51 = VAR7->VAR48;
                    if (VAR3 == VAR52 && VAR7->VAR48 >= VAR4)
                    {
                        FUN5(VAR10, FUN16(VAR12) - VAR14);
                        return 0;
                    }
                }
            }
        }
        else if (!FUN6(VAR11, VAR53))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR3 == VAR54 && VAR21 >= 0 && VAR12 > 32 && VAR2->VAR23[VAR21]->VAR8)
            {
                VAR22 *VAR55 = VAR2->VAR23[VAR21]->VAR8;
                VAR55->VAR24 = 1;
                if (VAR5)
                {
                    *VAR5 = VAR12;
                }
                return VAR21;
            }
        }
        else if (!FUN6(VAR11, (const VAR56){0x83, 0x95, 0x74, 0x40, 0x9D, 0x6B, 0xEC, 0x4E, 0xB4, 0x3C, 0x67, 0xA1, 0x80, 0x1E, 0x1A, 0x9B}))
        {
            int VAR21 = FUN7(VAR2, VAR13);
            if (VAR21 >= 0)
                FUN13(VAR2, VAR43, "", VAR21);
        }
        else if (!FUN6(VAR11, (const VAR56){0x14, 0x56, 0x1A, 0x0C, 0xCD, 0x30, 0x40, 0x4F, 0xBC, 0xBF, 0xD0, 0x3E, 0x52, 0x30, 0x62, 0x07}) || !FUN6(VAR11, (const VAR56){0x79, 0x66, 0xB5, 0xE0, 0xB9, 0x12, 0xCC, 0x43, 0xB7, 0xDF, 0x57, 0x8C, 0xAA, 0x5A, 0x7B, 0x63}) || !FUN6(VAR11, (const VAR56){0x02, 0xAE, 0x5B, 0x2F, 0x8F, 0x7B, 0x60, 0x4F, 0x82, 0xD6, 0xE4, 0xEA, 0x2F, 0x1F, 0x4C, 0x99}) || !FUN6(VAR11, VAR57) || !FUN6(VAR11, (const VAR56){0xCC, 0x32, 0x64, 0xDD, 0x29, 0xE2, 0xDB, 0x40, 0x80, 0xF6, 0xD2, 0x63, 0x28, 0xD2, 0x76, 0x1F}) || !FUN6(VAR11, (const VAR56){0xE5, 0xC5, 0x67, 0x90, 0x5C, 0x4C, 0x05, 0x42, 0x86, 0xC8, 0x7A, 0xFE, 0x20, 0xFE, 0x1E, 0xFA}) || !FUN6(VAR11, (const VAR56){0x80, 0x6D, 0xF3, 0x41, 0x32, 0x41, 0xC2, 0x4C, 0xB1, 0x21, 0x01, 0xA4, 0x32, 0x19, 0xD8, 0x1B}) || !FUN6(VAR11, (const VAR56){0x51, 0x1D, 0xAB, 0x72, 0xD2, 0x87, 0x9B, 0x48, 0xBA, 0x11, 0x0E, 0x08, 0xDC, 0x21, 0x02, 0x43}) || !FUN6(VAR11, (const VAR56){0x65, 0x8F, 0xFC, 0x47, 0xBB, 0xE2, 0x34, 0x46, 0x9C, 0xEF, 0xFD, 0xBF, 0xE6, 0x26, 0x1D, 0x5C}) || !FUN6(VAR11, (const VAR56){0xCB, 0xC5, 0x68, 0x80, 0x04, 0x3C, 0x2B, 0x49, 0xB4, 0x7D, 0x03, 0x08, 0x82, 0x0D, 0xCE, 0x51}) || !FUN6(VAR11, (const VAR56){0xBC, 0x2E, 0xAF, 0x82, 0xA6, 0x30, 0x64, 0x42, 0xA8, 0x0B, 0xAD, 0x2E, 0x13, 0x72, 0xAC, 0x60}) || !FUN6(VAR11, (const VAR56){0x1E, 0xBE, 0xC3, 0xC5, 0x43, 0x92, 0xDC, 0x11, 0x85, 0xE5, 0x00, 0x12, 0x3F, 0x6F, 0x73, 0xB9}) || !FUN6(VAR11, (const VAR56){0x3B, 0x86, 0xA2, 0xB1, 0xEB, 0x1E, 0xC3, 0x44, 0x8C, 0x88, 0x1C, 0xA3, 0xFF, 0xE3, 0xE7, 0x6A}) || !FUN6(VAR11, (const VAR56){0x4E, 0x7F, 0x4C, 0x5B, 0xC4, 0xD0, 0x38, 0x4B, 0xA8, 0x3E, 0x21, 0x7F, 0x7B, 0xBF, 0x52, 0xE7}) || !FUN6(VAR11, (const VAR56){0x63, 0x36, 0xEB, 0xFE, 0xA1, 0x7E, 0xD9, 0x11, 0x83, 0x08, 0x00, 0x07, 0xE9, 0x5E, 0xAD, 0x8D}) || !FUN6(VAR11, (const VAR56){0x70, 0xE9, 0xF1, 0xF8, 0x89, 0xA4, 0x4C, 0x4D, 0x83, 0x73, 0xB8, 0x12, 0xE0, 0xD5, 0xF8, 0x1E}) || !FUN6(VAR11, VAR58) || !FUN6(VAR11, VAR59) || !FUN6(VAR11, VAR60) || !FUN6(VAR11, (const VAR56){0xF7, 0x10, 0x02, 0xB9, 0xEE, 0x7C, 0xED, 0x4E, 0xBD, 0x7F, 0x05, 0x40, 0x35, 0x86, 0x18, 0xA1}))
        {
        }
        else
            FUN13(VAR2, VAR43, "" VAR61 "", FUN17(VAR11));
        FUN5(VAR10, FUN16(VAR12) - VAR14);
    }
    return VAR62;
}