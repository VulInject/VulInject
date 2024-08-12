static void
FUN1(
VAR1 *VAR2,			
VAR3 *VAR4,			
void        *VAR5,		
const char  *VAR6,		
...)				
{
char		VAR7[8192];		
va_list	VAR8;			


FUN2(VAR8, VAR6);
vsnprintf(VAR7, sizeof(VAR7), VAR6, VAR8);
FUN3(VAR8);

if (VAR4->VAR9)
(*VAR4->VAR9)(VAR2, VAR5, VAR7);
else
fprintf(VAR10, "", VAR7);
}