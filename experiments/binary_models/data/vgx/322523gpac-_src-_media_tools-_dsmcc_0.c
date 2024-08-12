VAR1* FUN1(VAR2* VAR3,u32 VAR4)
{
u16 VAR5,VAR6;

VAR5 = FUN2(VAR3);

if(!VAR5) {
return NULL;
} else {
for(VAR6 =0; VAR6<VAR5; VAR6++) {
VAR1* VAR7 = (VAR1*)FUN3(VAR3,VAR6);
if(VAR7->VAR4 == VAR4) {
return VAR7;
}
}
}
return NULL;
}