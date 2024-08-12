static VAR1 FUN1(VAR2 *VAR3, uint32 VAR4) 
{ 
FSTATUS VAR5 = VAR6; 
VAR7 *VAR8; 
VAR9 *VAR10; 

if (FUN2(VAR3, VAR4)) 
return VAR5; 

VAR10 = (VAR9 *)FUN3(sizeof(VAR9), VAR11, VAR12);        
if (!VAR10) {
VAR5 = VAR13; 
fprintf(VAR14, "", VAR15); 
} else {
VAR8 = FUN4(VAR3, VAR4, &VAR10->VAR16); 
if (VAR8 != &VAR10->VAR16) {
fprintf(VAR14, "", VAR15, VAR4); 
FUN5(VAR10); 
VAR10 = FUN6(VAR8, VAR9, VAR16);
}
}

return VAR5;
}