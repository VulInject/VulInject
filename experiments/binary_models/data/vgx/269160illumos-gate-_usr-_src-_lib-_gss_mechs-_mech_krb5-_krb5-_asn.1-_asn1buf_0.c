VAR1 FUN1(const VAR2 *VAR3, char **VAR4)
{
if(*VAR4 != NULL) free(*VAR4);
if(VAR3 == NULL){
*VAR4 = malloc(sizeof(""));
if(*VAR4 == NULL) return VAR5;
strcpy(*VAR4,"");
}else if(VAR3->VAR6 == NULL){
*VAR4 = malloc(sizeof(""));
if(*VAR4 == NULL) return VAR5;
strcpy(*VAR4,"");
}else{
unsigned int VAR7 = FUN2(VAR3);
int VAR8;

*VAR4 = calloc(VAR7+1, sizeof(char));
if(*VAR4 == NULL) return VAR5;
(*VAR4)[VAR7] = '';
for(VAR8=0; VAR8<VAR7; VAR8++) ;

}
return 0;
}