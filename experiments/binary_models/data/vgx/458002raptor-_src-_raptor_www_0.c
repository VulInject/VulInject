int
FUN1(VAR1* VAR2, const char *VAR3,
size_t VAR4)
{
char *VAR5;
size_t VAR6 = 8; 

if(VAR3) {
if (VAR4 == 0)
VAR4 = strlen(VAR3);
VAR6 += 1 + VAR4; 
}

VAR5 = FUN2(char*, VAR6);
if(!VAR5)
return 1;
VAR2->VAR7 = VAR5;


memcpy(VAR5, "", 7); 
VAR5 += 7;


if(VAR3) {
*VAR5++ = '';
memcpy(VAR5, VAR3, VAR4 + 1); 
} else {

*VAR5 = '';
}

FUN3("", VAR2->VAR7);

return 0;
}