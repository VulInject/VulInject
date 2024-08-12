static lu_mem FUN1 (VAR1 *VAR2, VAR3 *VAR4) {
StkId VAR5 = VAR4->VAR6;
if (VAR5 == NULL)
return 1;  
FUN2(VAR2->VAR7 == VAR8 ||
VAR4->VAR9 == NULL || FUN3(VAR4));
for (; VAR5 < VAR4->VAR10; VAR5++)  
FUN4(VAR2, VAR5);
if (VAR2->VAR7 == VAR8) {  
StkId VAR11 = VAR4->VAR6 + VAR4->VAR12;  
for (; VAR5 < VAR11; VAR5++)  
FUN5(VAR5);

if (!FUN3(VAR4) && VAR4->VAR9 != NULL) {
VAR4->VAR13 = VAR2->VAR13;  
VAR2->VAR13 = VAR4;
}
}
else if (VAR2->VAR14 != VAR15)
FUN6(VAR4); 
return (sizeof(VAR3) + sizeof(VAR16) * VAR4->VAR12 +
sizeof(VAR17) * VAR4->VAR18);
}