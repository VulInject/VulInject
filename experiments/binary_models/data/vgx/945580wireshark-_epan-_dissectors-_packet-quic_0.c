static VAR1 *
FUN1(VAR1 *VAR2, const guint VAR3)
{
guint64 VAR4;
guint64 VAR5;
guint8 VAR6 = FUN2(VAR2, VAR3);

if (VAR6 & 0x80) {
guint VAR7 = FUN3(VAR2, VAR3 + 1);
guint8 VAR8 = FUN4(VAR6, VAR7);
if (VAR8 != VAR9) {



if (VAR7 != 0) {
guint VAR10 = 5;   
VAR10 += 1 + FUN2(VAR2, VAR3 + VAR10); 
VAR10 += 1 + FUN2(VAR2, VAR3 + VAR10); 
if (VAR8 == VAR11) {
VAR10 += FUN5(VAR2, VAR3 + VAR10, 8, &VAR4, VAR12);
VAR10 += (VAR13)VAR4;
}
VAR10 += FUN5(VAR2, VAR3 + VAR10, 8, &VAR5, VAR12);
VAR10 += (VAR13)VAR5;
if (VAR5 <= VAR14 && VAR10 < (VAR13)FUN6(VAR2, VAR3)) {
return FUN7(VAR2, VAR3, VAR10);
}
}
}
}


return FUN8(VAR2, VAR3);
}