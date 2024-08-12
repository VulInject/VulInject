int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13;
    int FUN2(VAR14);
    VAR15 *VAR16;
    VAR17 *VAR18;
    int VAR19, VAR20;
    if (VAR2->VAR21)
    {
        VAR19 = 1;
        VAR20 = 0;
        VAR9 = FUN3(VAR2, VAR5, &VAR14);
        if (VAR9 < 0)
        { FUN4 ( VAR2 -> VAR22 , VAR23 , ""dc VAR24+ L VAR25: %d if ( ! VAR2 -> VAR26 ) return - 1 ;
        }
    }
    else
    {
        VAR16 = &VAR27[3 + VAR2->VAR28];
        if (VAR9 > 256 * VAR2->VAR29)
        { FUN4 ( VAR2 -> VAR22 , VAR23 , ""VAR30-3 %X VAR31 %VAR32 %VAR32\VAR5""illegal 3. VAR33, vlc encoding VAR34\VAR5""illegal 3. VAR33, esc 1 encoding VAR34\VAR5""illegal 3. VAR33, esc 2 encoding VAR34\VAR5""|VAR9| overflow in 3. VAR33\VAR5""illegal vlc code in ESC3 VAR9=%VAR32\VAR5""run overflow in ESC3 VAR10=%d VAR12=%d VAR9=%VAR32\VAR5""illegal vlc code in ESC2 VAR9=%VAR32\VAR5""run overflow in ESC2 VAR10=%d VAR12=%d VAR9=%VAR32\VAR5""illegal vlc code in ESC1 VAR9=%VAR32\VAR5""run overflow in ESC1 VAR10=%d VAR12=%d VAR9=%VAR32\VAR5""illegal vlc code VAR9=%VAR32\VAR5""run overflow VAR10=%d VAR12=%d VAR9=%VAR32\VAR5""ignoring overflow VAR31 %VAR32 %VAR32\VAR5""VAR35-tex damaged VAR31 %VAR32 %VAR32\VAR5" , VAR2 -> VAR36 , VAR2 -> VAR37 ) ; return - 1 ; } } VAR4 [ VAR8 [ VAR10 ] ] = VAR9 ; break ; } VAR4 [ VAR8 [ VAR10 ] ] = VAR9 ; } FUN5 ( VAR38 , & VAR2 -> VAR39 ) ; } VAR40 : if ( VAR2 -> VAR21 ) { FUN6 ( VAR2 , VAR4 , VAR5 , VAR14 ) ; if ( VAR2 -> VAR41 ) { VAR10 = 63 ; } } if ( VAR2 -> VAR42 >= 4 && VAR10 > 0 ) VAR10 = 63 ; VAR2 -> VAR43 [ VAR5 ] = VAR10 ; return 0 ; }