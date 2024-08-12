int					
FUN1(int            VAR1,	
VAR2    *VAR3,	
int            VAR4,	
const char     *VAR5,
const int      *VAR6,	
double         VAR7,	
cups_snmp_cb_t VAR8,	
void           *VAR9)	
{
int		VAR10 = 0;		
unsigned	VAR11 = 0;		
cups_snmp_t	VAR12;			
int		VAR13[VAR14];





FUN2((""
""%VAR15\"",
VAR1, VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9));

if (VAR1 < 0 || !VAR3 || VAR4 != VAR16 || !VAR5 ||
!VAR6 || !VAR8)
{
FUN3("");

return (-1);
}



FUN4(VAR12.VAR17, VAR6, VAR14);
VAR13[0] = -1;

for (;;)
{
VAR11 ++;

if (!FUN5(VAR1, VAR3, VAR4, VAR5,
VAR18, VAR11,
VAR12.VAR17))
{
FUN3("");

return (-1);
}

if (!FUN6(VAR1, &VAR12, VAR7))
{
FUN3("");

return (-1);
}

if (!FUN7(&VAR12, VAR6) ||
FUN8(&VAR12, VAR13))
{
FUN2(("", VAR10));

return (VAR10);
}

if (VAR12.VAR19 || VAR12.VAR20)
{
FUN2(("", VAR10 > 0 ? VAR10 : -1));

return (VAR10 > 0 ? VAR10 : -1);
}

FUN4(VAR13, VAR12.VAR17, VAR14);

VAR10 ++;

(*VAR8)(&VAR12, VAR9);
}
}