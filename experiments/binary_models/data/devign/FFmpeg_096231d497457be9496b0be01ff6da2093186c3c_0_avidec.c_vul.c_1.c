static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = VAR2->VAR8;
    int VAR9;
    unsigned int VAR10[8];
    unsigned int VAR11;
    int64_t VAR12, VAR13;
VAR14:
    memset(VAR10, -1, sizeof(VAR10));
    for (VAR12 = VAR13 = FUN2(VAR8); !FUN3(VAR8); VAR12++)
    {
        int VAR15;
        for (VAR15 = 0; VAR15 < 7; VAR15++)
            VAR10[VAR15] = VAR10[VAR15 + 1];
        VAR10[7] = FUN4(VAR8);
        VAR11 = VAR10[4] + (VAR10[5] << 8) + (VAR10[6] << 16) + (VAR10[7] << 24);
        VAR9 = FUN5(VAR10 + 2);
        if (VAR12 + (VAR16)VAR11 > VAR5->VAR17 || VAR10[0] > 127)
            if ((VAR10[0] == '' && VAR10[1] == '' && VAR9 < VAR2->VAR18) || (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '') || (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == ''))
            {
                FUN6(VAR8, VAR11);
                goto VAR14;
                if (VAR10[0] == '' && VAR10[1] == '' && VAR10[2] == '' && VAR10[3] == '')
                {
                    FUN6(VAR8, 4);
                    goto VAR14;
                    VAR9 = FUN5(VAR10);
                    if (!((VAR12 - VAR5->VAR19) & 1) && FUN5(VAR10 + 1) < VAR2->VAR18)
                        if (VAR10[2] == '' && VAR10[3] == '' && VAR9 < VAR2->VAR18)
                        {
                            FUN6(VAR8, VAR11);
                            goto VAR14;
                            if (VAR9 < VAR2->VAR18)
                            {
                                VAR20 *VAR21;
                                VAR22 *VAR23;
                                VAR21 = VAR2->VAR24[VAR9];
                                VAR23 = VAR21->VAR6;
                                if (VAR2->VAR18 >= 2)
                                {
                                    VAR20 *VAR25 = VAR2->VAR24[1];
                                    VAR22 *VAR26 = VAR25->VAR6;
                                    if (VAR10[2] == '' && VAR10[3] == '' && VAR9 == 0 && VAR21->VAR27->VAR28 == VAR29 && VAR25->VAR27->VAR28 == VAR30 && VAR23->VAR31 == '' * 256 + '' && (VAR10[2] * 256 + VAR10[3] == VAR26->VAR31 || !VAR26->VAR32))
                                    {
                                        VAR9 = 1;
                                        VAR21 = VAR25;
                                        VAR23 = VAR26;
                                        FUN7(VAR2, VAR33, "");
                                        if ((VAR21->VAR34 >= VAR35 && VAR11 == 0) || VAR21->VAR34 >= VAR36)
                                        {
                                            if (!VAR3)
                                            {
                                                VAR23->VAR37 += FUN8(VAR23, VAR11);
                                                FUN6(VAR8, VAR11);
                                                goto VAR14;
                                                if (VAR10[2] == '' && VAR10[3] == '' && VAR11 <= 4 * 256 + 4)
                                                {
                                                    int VAR38 = FUN4(VAR8);
                                                    int VAR39 = (VAR38 + FUN4(VAR8) - 1) & 0xFF;
                                                    FUN9(VAR8);
                                                    for (; VAR38 <= VAR39; VAR38++)
                                                        VAR23->VAR40[VAR38] = 0xFF << 24 | FUN10(VAR8) >> 8;
                                                    VAR23->VAR41 = 1;
                                                    goto VAR14;
                                                }
                                                else if (((VAR23->VAR32 < 5 || VAR13 + 9 > VAR12) && VAR10[2] < 128 && VAR10[3] < 128) || VAR10[2] * 256 + VAR10[3] == VAR23->VAR31)
                                                {
                                                    if (VAR3)
                                                        return 0;
                                                    if (VAR10[2] * 256 + VAR10[3] == VAR23->VAR31)
                                                        VAR23->VAR32++;
                                                    else
                                                    {
                                                        VAR23->VAR31 = VAR10[2] * 256 + VAR10[3];
                                                        VAR23->VAR32 = 0;
                                                        VAR5->VAR42 = VAR9;
                                                        VAR23->VAR43 = VAR11 + 8;
                                                        VAR23->VAR44 = VAR11;
                                                        if (VAR11 || !VAR23->VAR45)
                                                        {
                                                            uint64_t VAR46 = FUN2(VAR8) - 8;
                                                            if (!VAR21->VAR47 || !VAR21->VAR48 || VAR21->VAR47[VAR21->VAR48 - 1].VAR46 < VAR46)
                                                            {
                                                                FUN11(VAR21, VAR46, VAR23->VAR37, VAR11, 0, VAR49);
                                                                return 0;
                                                                if (VAR8->VAR50)
                                                                    return VAR8->VAR50;
                                                                return VAR51