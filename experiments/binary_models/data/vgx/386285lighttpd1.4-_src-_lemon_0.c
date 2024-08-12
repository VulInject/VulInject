static int FUN1(char *VAR1, const char *VAR2, va_list VAR3){
int VAR4, VAR5, VAR6, VAR7;
int VAR8 = 0;
const char *VAR9;
char VAR10[50];
VAR1[0] = 0;
for(VAR4=VAR5=0; (VAR7 = VAR2[VAR4])!=0; VAR4++){
if( VAR7=='' ){
int VAR11 = 0;
FUN2(VAR1, &VAR8, &VAR2[VAR5], VAR4-VAR5, 0);
VAR7 = VAR2[++VAR4];
if( FUN3(VAR7) || (VAR7=='' && FUN3(VAR2[VAR4+1])) ){
if( VAR7=='' ) VAR4++;
while( FUN3(VAR2[VAR4]) ) VAR11 = VAR11*10 + VAR2[VAR4++] - '';
if( VAR7=='' ) VAR11 = -VAR11;
VAR7 = VAR2[VAR4];
}
if( VAR7=='' ){
int VAR12 = FUN4(VAR3, int);
if( VAR12<0 ){
FUN2(VAR1, &VAR8, "", 1, VAR11);
VAR12 = -VAR12;
}else if( VAR12==0 ){
FUN2(VAR1, &VAR8, "", 1, VAR11);
}
VAR6 = 0;
while( VAR12>0 ){
VAR6++;
VAR10[sizeof(VAR10)-VAR6] = (VAR12%10) + '';
VAR12 /= 10;
}
FUN2(VAR1, &VAR8, &VAR10[sizeof(VAR10)-VAR6], VAR6, VAR11);
}else if( VAR7=='' ){
VAR9 = FUN4(VAR3, const char*);
FUN2(VAR1, &VAR8, VAR9, -1, VAR11);
}else if( VAR7=='' && memcmp(&VAR2[VAR4], "", 3)==0 ){
VAR4 += 2;
VAR6 = FUN4(VAR3, int);
VAR9 = FUN4(VAR3, const char*);
FUN2(VAR1, &VAR8, VAR9, VAR6, VAR11);
}else if( VAR7=='' ){
FUN2(VAR1, &VAR8, "", 1, 0);
}else{
fprintf(VAR13, "");
FUN5(1);
}
VAR5 = VAR4+1;
}
}
FUN2(VAR1, &VAR8, &VAR2[VAR5], VAR4-VAR5, 0);
return VAR8;
}