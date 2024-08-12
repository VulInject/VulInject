static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6;
    int VAR7;
    FUN2(VAR2);
    FUN3(VAR2, VAR8, VAR5->VAR9);
    FUN3(VAR2, VAR10, VAR5->VAR11);
    FUN3(VAR2, VAR12, VAR5->VAR13);
    FUN3(VAR2, VAR14, VAR5->VAR15);
    if (VAR16)
    {
        FUN3(VAR2, VAR17, VAR5->VAR18);
    }
    if (VAR19)
    {
        FUN3(VAR2, VAR20, VAR5->VAR21);
    }
    if (VAR22)
    {
        FUN3(VAR2, VAR23, VAR5->VAR24);
    }
    if (VAR25)
    {
        FUN3(VAR2, VAR26, VAR5->VAR27);
    }
    if (VAR28)
    {
        FUN3(VAR2, VAR29, VAR5->VAR30);
    }
    if (VAR31)
    {
        FUN3(VAR2, VAR32, VAR5->VAR33);
    }
    if (VAR34)
    {
        FUN3(VAR2, VAR35, VAR5->VAR36);
    }
    if (VAR37)
    {
        FUN3(VAR2, VAR38, VAR5->VAR39);
    }
    if (VAR40)
    {
        FUN3(VAR2, VAR41, VAR5->VAR42);
        FUN3(VAR2, VAR43, VAR5->VAR44);
        FUN3(VAR2, VAR45, VAR5->VAR46);
        FUN3(VAR2, VAR47, VAR5->VAR48);
    }
    if (VAR3 >= VAR49)
    {
        FUN3(VAR2, VAR50, VAR5->VAR51);
        FUN3(VAR2, VAR52, VAR5->VAR53);
        FUN3(VAR2, VAR54, VAR5->VAR55);
        if (VAR56)
        {
            FUN3(VAR2, VAR57, VAR5->VAR58);
        }
        if (VAR59)
        {
            FUN3(VAR2, VAR60, VAR5->VAR61);
        }
        if (VAR62)
        {
            FUN3(VAR2, VAR63, VAR5->VAR64);
        }
        if (VAR65)
        {
            FUN3(VAR2, VAR66, 0);
            FUN3(VAR2, VAR67, 0);
            for (VAR6 = 0; VAR6 < VAR68; VAR6++)
            {
                FUN3(VAR2, VAR69 + VAR6, VAR5->VAR70[VAR6]);
            }
            for (VAR6 = 0; VAR6 < VAR71; VAR6++)
            {
                FUN3(VAR2, VAR72 + VAR6, VAR5->VAR73[VAR6]);
                FUN3(VAR2, VAR74 + VAR6, VAR5->VAR75[VAR6]);
            }
            FUN3(VAR2, VAR76, VAR5->VAR77);
            FUN3(VAR2, VAR78, VAR5->VAR79);
            FUN3(VAR2, VAR66, VAR5->VAR80);
            FUN3(VAR2, VAR67, VAR5->VAR81);
        }
        if (VAR82)
        {
            FUN3(VAR2, VAR83, VAR5->VAR84);
            FUN3(VAR2, VAR85, VAR5->VAR86);
        }
        if (VAR87)
        {
            FUN3(VAR2, VAR88, VAR5->VAR89);
        }
        if (VAR90)
        {
            FUN3(VAR2, VAR91, VAR5->VAR92);
        }
        if (VAR93)
        {
            int VAR94;
            for (VAR94 = 0; VAR94 < VAR95; VAR94++)
                FUN3(VAR2, VAR96 + VAR94, VAR5->VAR97[VAR94]);
            FUN3(VAR2, VAR98, VAR99);
        }
        if (VAR100)
        {
            FUN3(VAR2, VAR101, VAR5->VAR102);
        }
        if (VAR2->VAR103)
        {
            int VAR94;
            FUN3(VAR2, VAR104, VAR5->VAR105);
            FUN3(VAR2, VAR106, VAR5->VAR107);
            FUN3(VAR2, VAR108, VAR5->VAR109);
            FUN3(VAR2, VAR110, VAR5->VAR111);
            for (VAR94 = 0; VAR94 < FUN4(VAR5->VAR112); VAR94++)
            {
                FUN3(VAR2, VAR113 + VAR94, VAR5->VAR112[VAR94]);
            }
        }
        if (VAR114)
        {
            int VAR94;
            for (VAR94 = 0; VAR94 < FUN4(VAR5->VAR115); VAR94++)
            {
                FUN3(VAR2, VAR116 + VAR94 * 2, VAR5->VAR115[VAR94]);
            }
            for (VAR94 = 0; VAR94 < FUN4(VAR5->VAR117); VAR94++)
            {
                FUN3(VAR2, VAR118 + VAR94 * 2, VAR5->VAR117[VAR94]);
            }
        }
        if (VAR119)
        {
            uint64_t VAR120 = FUN5(0, VAR2->VAR121);
            FUN3(VAR2, VAR122, VAR5->VAR123);
            FUN3(VAR2, VAR124, VAR5->VAR125[0]);
            FUN3(VAR2, VAR126, VAR5->VAR125[1]);
            FUN3(VAR2, VAR127, VAR5->VAR125[2]);
            FUN3(VAR2, VAR128, VAR5->VAR125[3]);
            FUN3(VAR2, VAR129, VAR5->VAR125[4]);
            FUN3(VAR2, VAR130, VAR5->VAR125[5]);
            FUN3(VAR2, VAR131, VAR5->VAR125[6]);
            FUN3(VAR2, VAR132, VAR5->VAR125[7]);
            FUN3(VAR2, VAR133, VAR5->VAR125[8]);
            FUN3(VAR2, VAR134, VAR5->VAR125[9]);
            FUN3(VAR2, VAR135, VAR5->VAR125[10]);
            for (VAR6 = 0; VAR6 < VAR136; VAR6++)
            {
                uint64_t VAR137 = VAR5->VAR138[VAR6].VAR137;
                VAR137 &= VAR120;
                FUN3(VAR2, FUN6(VAR6), VAR5->VAR138[VAR6].VAR139);
                FUN3(VAR2, FUN7(VAR6), VAR137);
            }
        }
    }
    if (VAR5->VAR140)
    {
        int VAR6;
        FUN3(VAR2, VAR141, VAR5->VAR142);
        FUN3(VAR2, VAR143, VAR5->VAR144);
        if (VAR145)
        {
            FUN3(VAR2, VAR146, VAR5->VAR147);
        }
        for (VAR6 = 0; VAR6 < (VAR5->VAR140 & 0xff) * 4; VAR6++)
        {
            FUN3(VAR2, VAR148 + VAR6, VAR5->VAR149[VAR6]);
        }
    }
    VAR7 = FUN8(FUN9(VAR2), VAR150, VAR2->VAR151);
    if (VAR7 < 0)
    {
        return VAR7;
    }
    assert(VAR7 == VAR2->VAR151->VAR152);
    return 0;
}