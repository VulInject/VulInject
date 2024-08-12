static int
FUN1(VAR1 *VAR2, ddi_info_cmd_t VAR3, void *VAR4, void **VAR5)
{
int VAR6;

switch (VAR3) {
case VAR7:
*VAR5 = (void *)VAR8;
VAR6 = VAR9;
break;
case VAR10:
*VAR5 = (void *)0;
VAR6 = VAR9;
break;
default:
VAR6 = VAR11;
}
return (VAR6);
}

static struct cb_ops VAR12 = {
VAR13,		
VAR14,		
VAR15,		
VAR15,		
VAR16,			
VAR17,		
VAR16,			
VAR18,		
VAR16,			
VAR16,			
VAR16,			
VAR19,		
VAR20,		
0,			
VAR21 | VAR22		
};