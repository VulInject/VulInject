void FUN1(VAR1 *VAR2, yuv2planar1_fn VAR3, yuv2planarX_fn VAR4, yuv2interleavedX_fn VAR5, yuv2packed1_fn VAR6, yuv2packed2_fn VAR7, yuv2packedX_fn VAR8, yuv2anyX_fn VAR9, int VAR10)
{
    VAR11 *VAR12 = NULL;
    VAR11 *VAR13 = NULL;
    int VAR14 = VAR2->VAR15 - (VAR2->VAR16 ? 2 : 1);
    if (FUN2(VAR2->VAR17) || (FUN3(VAR2->VAR17) && !FUN4(VAR2->VAR17)))
    {
        if (!FUN3(VAR2->VAR17))
        {
            VAR13 = VAR2->VAR18[VAR14].VAR19;
            VAR13->VAR20[0] = VAR10 ? (VAR21 *)VAR2->VAR22 : VAR2->VAR23;
            VAR13->VAR24 = VAR2->VAR25;
            VAR13->VAR26 = VAR2->VAR27;
            VAR13->VAR28 = VAR10;
            --VAR14;
            if (VAR5)
                VAR13->VAR29 = VAR5;
            else if (VAR2->VAR25 == 1)
                VAR13->VAR29 = VAR3;
            else
                VAR13->VAR29 = VAR4;
        }
        VAR12 = VAR2->VAR18[VAR14].VAR19;
        VAR12->VAR20[0] = VAR10 ? (VAR21 *)VAR2->VAR30 : VAR2->VAR31;
        VAR12->VAR20[1] = VAR10 ? (VAR21 *)VAR2->VAR32 : VAR2->VAR31;
        VAR12->VAR24 = VAR2->VAR33;
        VAR12->VAR26 = VAR2->VAR34;
        VAR12->VAR28 = VAR10;
        if (VAR2->VAR33 == 1)
            VAR12->VAR29 = VAR3;
        else
            VAR12->VAR29 = VAR4;
    }
    else
    {
        VAR12 = VAR2->VAR18[VAR14].VAR19;
        VAR13 = &VAR12[1];
        VAR12->VAR20[0] = VAR2->VAR31;
        VAR12->VAR24 = VAR2->VAR33;
        VAR12->VAR26 = VAR2->VAR34;
        VAR13->VAR20[0] = VAR2->VAR23;
        VAR13->VAR24 = VAR2->VAR25;
        VAR13->VAR26 = VAR2->VAR27;
        VAR12->VAR28 = VAR10;
        VAR13->VAR28 = VAR10;
        if (VAR8)
        {
            if (VAR2->VAR6 && VAR2->VAR33 == 1 && VAR2->VAR25 <= 2)
                VAR12->VAR29 = VAR6;
            else if (VAR2->VAR7 && VAR2->VAR33 == 2 && VAR2->VAR25 == 2)
                VAR12->VAR29 = VAR7;
            VAR12->VAR8 = VAR8;
        }
        else
            VAR12->VAR29 = VAR9;
    }
}