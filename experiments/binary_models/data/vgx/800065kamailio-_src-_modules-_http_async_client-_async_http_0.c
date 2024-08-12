static inline char *FUN1(VAR1 *VAR2, char *VAR3)                                                                                                                                                                                                              
{
int VAR4,VAR5;
str VAR6;

VAR6.VAR7 = VAR3;
VAR6.VAR8 = strlen(VAR3);
for(VAR4=0;VAR4<VAR2->VAR8-VAR6.VAR8;VAR4++) {
for(VAR5=0;VAR5<VAR6.VAR8;VAR5++) {
if ( !((VAR2->VAR7[VAR4+VAR5]==VAR6.VAR7[VAR5]) ||
( FUN2((int)VAR2->VAR7[VAR4+VAR5])
&& ((VAR2->VAR7[VAR4+VAR5])^(VAR6.VAR7[VAR5]))==0x20 )) )
break;
}
if (VAR5==VAR6.VAR8)
return VAR2->VAR7+VAR4;
}
return 0;
}