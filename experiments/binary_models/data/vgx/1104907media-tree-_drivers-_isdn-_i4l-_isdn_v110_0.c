static void
FUN1(VAR1 *VAR2)
{
unsigned char *VAR3 = VAR2->VAR4;
int VAR5 = VAR2->VAR6;

if (VAR5 == 0)
return;
for (VAR3++, VAR5--; VAR5 > 0; VAR5--, VAR3++)	
if ((*VAR3 & VAR2->VAR7) == 0)	
break;  
if (VAR5)
memcpy(VAR2->VAR4, VAR3, VAR5);

VAR2->VAR6 = VAR5;
FUN2(VAR8 "");
}