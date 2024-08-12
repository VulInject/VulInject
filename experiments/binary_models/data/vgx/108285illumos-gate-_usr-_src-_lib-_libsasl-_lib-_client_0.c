VAR1 *FUN1(void) 
{
VAR2 *VAR3;
VAR1 *VAR4 = NULL, *VAR5=NULL;

if(!VAR6->VAR7) return NULL;
if(!VAR8) return NULL;


for (VAR3 = VAR9->VAR10; VAR3; VAR3 = VAR3->VAR5) {
VAR5 = FUN2(sizeof(VAR1));

if(!VAR5 && !VAR4) return NULL;
else if(!VAR5) {
VAR5 = VAR4->VAR5;
do {
FUN3(VAR4);
VAR4 = VAR5;
VAR5 = VAR4->VAR5;
} while(VAR5);
return NULL;
}

VAR5->VAR11 = VAR3->VAR12->VAR13;

if(!VAR4) {
VAR5->VAR5 = NULL;
VAR4 = VAR5;
} else {
VAR5->VAR5 = VAR4;
VAR4 = VAR5;
}
}

return VAR4;
}