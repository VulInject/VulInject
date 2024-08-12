static int FUN1(
void *VAR1,
VAR2 *VAR3,    
int argc,              
const char **argv      
){
VAR4 *VAR5;
int VAR6;
int VAR7, VAR8;
int VAR9[8];
char VAR10[400];

if( argc!=2 ){
FUN2(VAR3, """, argv[0],
""", 0);
return VAR11;
}
if( FUN3(VAR3, argv[1], (int*)&VAR5) ) return VAR11;
VAR6 = FUN4(VAR5, VAR9);
if( VAR6 ){
FUN2(VAR3, FUN5(VAR6), 0);
return VAR11;
}
VAR8 = 0;
for(VAR7=0; VAR7<sizeof(VAR9)/sizeof(VAR9[0]); VAR7++){
sprintf(&VAR10[VAR8],"", VAR9[VAR7]);
VAR8 += strlen(&VAR10[VAR8]);
}
FUN2(VAR3, &VAR10[1], 0);
return VAR12;
}