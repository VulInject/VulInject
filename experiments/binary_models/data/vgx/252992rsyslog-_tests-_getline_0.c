VAR1 FUN1(char **VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
int VAR7;
int VAR8 = 0;

if(*VAR2 == NULL)
*VAR2 = malloc(4096); 

VAR7 = fgetc(VAR6);
while(VAR7 != VAR9 && VAR7 != '') {
(*VAR2)[VAR8++] = VAR7;
VAR7 = fgetc(VAR6);
}
if(VAR7 != VAR9) 
(*VAR2)[VAR8++] = VAR7;

(*VAR2)[VAR8] = '';

*VAR4 = VAR8;


return (VAR8 > 0) ? VAR8 : -1;
}