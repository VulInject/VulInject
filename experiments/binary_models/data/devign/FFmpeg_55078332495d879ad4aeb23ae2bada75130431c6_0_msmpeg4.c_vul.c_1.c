static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12;
    VAR13 *VAR14;
    VAR15 *VAR16;
    const VAR17 *VAR18;
    int VAR19, VAR20;
    if (VAR2->VAR21)
    {
        VAR19 = 1;
        VAR20 = 0;
        FUN2(VAR22);
        VAR7 = FUN3(VAR2, VAR5, &VAR12);
        {
            static int VAR23;
            if (VAR5 == 0)
                VAR23 = 0;
            if (VAR5 == 4)
                FUN4("", VAR23);
            VAR23 += VAR23 + VAR12;
        }
        if (VAR7 < 0)
        { fprintf ( VAR24 , ""dc VAR25+ L VAR26: %d if ( ! VAR2 -> VAR27 ) return - 1 ;
        }
    }
    else
    {
        VAR14 = &VAR28[3 + VAR2->VAR29];
        if (VAR7 > 256 * VAR2->VAR30)
        { fprintf ( VAR24 , ""cool a new vlc VAR31 ,contact the ffmpeg developers and upload the VAR32\VAR5""illegal 3. VAR33, vlc encoding VAR34\VAR5""illegal 3. VAR33, esc 1 encoding VAR34\VAR5""illegal 3. VAR33, esc 2 encoding VAR34\VAR5""|VAR7| overflow in 3. VAR33\VAR5""illegal vlc code in ESC3 VAR7=%VAR35\VAR5""run overflow in ESC3 VAR8=%d VAR10=%d VAR7=%VAR35\VAR5""illegal vlc code in ESC2 VAR7=%VAR35\VAR5""run overflow in ESC2 VAR8=%d VAR10=%d VAR7=%VAR35\VAR5""illegal vlc code in ESC1 VAR7=%VAR35\VAR5""run overflow in ESC1 VAR8=%d VAR10=%d VAR7=%VAR35\VAR5""illegal vlc code VAR7=%VAR35\VAR5""run overflow VAR8=%d VAR10=%d VAR7=%VAR35\VAR5""ignoring overflow VAR36 %VAR35 %VAR35\VAR5""VAR37-tex damaged VAR36 %VAR35 %VAR35\VAR5" , VAR2 -> VAR38 , VAR2 -> VAR39 ) ; return - 1 ; } } VAR4 [ VAR18 [ VAR8 ] ] = VAR7 ; break ; } VAR4 [ VAR18 [ VAR8 ] ] = VAR7 ; } FUN5 ( VAR40 , & VAR2 -> VAR41 ) ; } VAR42 : if ( VAR2 -> VAR21 ) { FUN6 ( VAR2 , VAR4 , VAR5 , VAR12 ) ; if ( VAR2 -> VAR43 ) { VAR8 = 63 ; } } if ( VAR2 -> VAR44 == 4 && VAR8 > 0 ) VAR8 = 63 ; VAR2 -> VAR45 [ VAR5 ] = VAR8 ; return 0 ; }