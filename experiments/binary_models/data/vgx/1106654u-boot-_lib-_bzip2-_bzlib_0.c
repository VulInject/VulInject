int FUN1(VAR1) ( VAR2 *VAR3 )
{
VAR4* VAR5;
if (VAR3 == NULL) return VAR6;
VAR5 = VAR3->VAR7;
if (VAR5 == NULL) return VAR6;
if (VAR5->VAR3 != VAR3) return VAR6;

while (VAR8) {
FUN2();
if (VAR5->VAR7 == VAR9) return VAR10;
if (VAR5->VAR7 == VAR11) {
if (VAR5->VAR12)
FUN3 ( VAR5 ); else
FUN4  ( VAR5 );
if (VAR5->VAR13 == VAR5->VAR14+1 && VAR5->VAR15 == 0) {
FUN5 ( VAR5->VAR16 );
if (VAR5->VAR17 >= 3)
FUN6 ( "", VAR5->VAR18,
VAR5->VAR16 );
if (VAR5->VAR17 >= 2) FUN7 ( "" );
if (VAR5->VAR16 != VAR5->VAR18)
return VAR19;
VAR5->VAR20
= (VAR5->VAR20 << 1) |
(VAR5->VAR20 >> 31);
VAR5->VAR20 ^= VAR5->VAR16;
VAR5->VAR7 = VAR21;
} else {
return VAR22;
}
}
if (VAR5->VAR7 >= VAR23) {
Int32 VAR24 = FUN8 ( VAR5 );
if (VAR24 == VAR25) {
if (VAR5->VAR17 >= 3)
FUN6 ( "",
VAR5->VAR26, VAR5->VAR20 );
if (VAR5->VAR20 != VAR5->VAR26)
return VAR19;
return VAR24;
}
if (VAR5->VAR7 != VAR11) return VAR24;
}
}

FUN9 ( 0, 6001 );

return 0;  
}