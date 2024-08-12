int FUN1 (const VAR1 *VAR2, VAR3 *VAR4, int VAR5) {
TValue VAR6;
VAR7:
if (FUN2(VAR2)) {
lua_Number VAR8 = FUN3(VAR2);
lua_Number VAR9 = FUN4(VAR8);
if (VAR8 != VAR9) {  
if (VAR5 == 0) return 0;  
else if (VAR5 > 1)  
VAR9 += 1;  
}
return FUN5(VAR9, VAR4);
}
else if (FUN6(VAR2)) {
*VAR4 = FUN7(VAR2);
return 1;
}
else if (FUN8(VAR2) &&
FUN9(FUN10(VAR2), &VAR6) == FUN11(VAR2) + 1) {
VAR2 = &VAR6;
goto VAR7;  
}
return 0;  
}