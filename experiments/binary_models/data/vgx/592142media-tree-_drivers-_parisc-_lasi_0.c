static void VAR1 FUN1(unsigned long VAR2)
{
unsigned long VAR3;

switch (VAR4) {

case 0x600:		
case 0x601:		
case 0x602:		
case 0x603:		
case 0x604:		
case 0x605:		
VAR3 = VAR2 + 0x0000C000;
FUN2(0, VAR3);
return;   


case 0x60A:		
case 0x60B:		
case 0x60C:		
case 0x60D:		
case 0x60E:		
VAR3 = VAR2 - 0x00020000;
break;

default:
VAR3 = VAR2 + 0x0000C000;
break;
}

FUN3(VAR5, VAR6, VAR3);
}



static unsigned long lasi_power_off_hpa VAR7;

static void FUN4(void)
{
unsigned long VAR3;


VAR3 = VAR8 + 0x0000C000;


FUN5(0x02, VAR3);
}