VAR1 *FUN1(VAR2 *VAR3,
VAR4 *VAR5,
void *VAR6,         
getCountersFn_t VAR7)
{

VAR1 *VAR8 = NULL, *VAR9 = VAR3->VAR10;
for(; VAR9 != NULL; VAR8 = VAR9, VAR9 = VAR9->VAR11) {
int64_t VAR12 = FUN2(VAR5, &VAR9->VAR13);
if(VAR12 == 0) return VAR9;  
if(VAR12 < 0) break;       
}

{
VAR1 *VAR14 = (VAR1 *)FUN3(VAR3, sizeof(VAR1));
FUN4(VAR14, VAR3, VAR5, VAR6, VAR7);
if(VAR8) VAR8->VAR11 = VAR14;
else VAR3->VAR10 = VAR14;
VAR14->VAR11 = VAR9;
return VAR14;
}
}