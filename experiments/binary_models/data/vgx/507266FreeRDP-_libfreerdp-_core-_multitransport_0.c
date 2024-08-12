static VAR1 FUN1(VAR2* VAR3, UINT32 VAR4, UINT16 VAR5,
const VAR6* VAR7)
{
FUN2(VAR3);
VAR8* VAR9 = FUN3(VAR3->VAR10);
if (!VAR9)
return VAR11;

if (!FUN4(VAR9, 24))
{
FUN5(VAR9);
return VAR11;
}

FUN6(VAR9, VAR4);              
FUN7(VAR9, VAR5);           
FUN8(VAR9, 2);                          
FUN9(VAR9, VAR7, VAR12); 

return FUN10(VAR3->VAR10, VAR9, VAR13);
}