static int FUN1(
VAR1 *VAR2,        
int VAR3            
){
int VAR4;
int VAR5 = VAR2->VAR6[VAR2->VAR7].VAR5;


VAR4 = VAR8[VAR5];
if( VAR4==VAR9 ){
return VAR10[VAR5];
}
if( VAR3==VAR11 ){
return VAR12;
}
VAR4 += VAR3;
if( VAR4<0 || VAR4>=VAR13 || VAR14[VAR4]!=VAR3 ){
int VAR15;            
if( VAR3<sizeof(VAR16)/sizeof(VAR16[0])
&& (VAR15 = VAR16[VAR3])!=0 ){
if( VAR17 ){
fprintf(VAR17, "",
VAR18, VAR19[VAR3], VAR19[VAR15]);
}
return FUN1(VAR2, VAR15);
}
return VAR10[VAR5];
}else{
return VAR20[VAR4];
}
}