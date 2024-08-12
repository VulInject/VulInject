VAR1 FUN1(const void *VAR2, size_t VAR3, int VAR4) {
void *VAR5;
sds VAR6;
char VAR7 = FUN2(VAR3);

if (VAR7 == VAR8 && VAR3 == 0) VAR7 = VAR9;
int VAR10 = FUN3(VAR7);
unsigned char *VAR11; 
size_t VAR12;

assert(VAR3 + VAR10 + 1 > VAR3); 
VAR5 = VAR4?
FUN4(VAR10+VAR3+1, &VAR12) :
FUN5(VAR10+VAR3+1, &VAR12);
if (VAR5 == NULL) return NULL;
if (VAR2==VAR13)
VAR2 = NULL;
else if (!VAR2)
memset(VAR5, 0, VAR10+VAR3+1);
VAR6 = (char*)VAR5+VAR10;
VAR11 = ((unsigned char*)VAR6)-1;
VAR12 = VAR12-VAR10-1;
if (VAR12 > FUN6(VAR7))
VAR12 = FUN6(VAR7);
switch(VAR7) {
case VAR8: {
*VAR11 = VAR7 | (VAR3 << VAR14);
break;
}
case VAR9: {
FUN7(8,VAR6);
VAR5->VAR15 = VAR3;
VAR5->VAR16 = VAR12;
*VAR11 = VAR7;
break;
}
case VAR17: {
FUN7(16,VAR6);
VAR5->VAR15 = VAR3;
VAR5->VAR16 = VAR12;
*VAR11 = VAR7;
break;
}
case VAR18: {
FUN7(32,VAR6);
VAR5->VAR15 = VAR3;
VAR5->VAR16 = VAR12;
*VAR11 = VAR7;
break;
}
case VAR19: {
FUN7(64,VAR6);
VAR5->VAR15 = VAR3;
VAR5->VAR16 = VAR12;
*VAR11 = VAR7;
break;
}
}
if (VAR3 && VAR2)
memcpy(VAR6, VAR2, VAR3);
VAR6[VAR3] = '';
return VAR6;
}