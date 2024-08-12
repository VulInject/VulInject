static char * FUN1(const char * VAR1, const char * VAR2, const char * VAR3)
{
int VAR4, VAR5;
char * VAR6;
const char * VAR7;
char * VAR8;

if(0 == memcmp("VAR9:
return strdup(VAR3);
VAR7 = (VAR1[0] == '') ? VAR2 : VAR1;
VAR5 = strlen(VAR7);
if(VAR5 > 7) {
VAR8 = strchr(VAR7 + 7, '');
if(VAR8)
VAR5 = VAR8 - VAR7;
}
VAR4 = VAR5 + strlen(VAR3) + 1;
if(VAR3[0] != '')
VAR4++;
VAR6 = malloc(VAR4);
if(VAR6 == NULL) return NULL;
memcpy(VAR6, VAR7, VAR5);
if(VAR3[0] != '')
VAR6[VAR5++] = '';
memcpy(VAR6 + VAR5, VAR3, VAR4 - VAR5);
return VAR6;
}