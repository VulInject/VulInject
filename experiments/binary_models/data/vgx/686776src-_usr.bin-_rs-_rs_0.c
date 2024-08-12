void
FUN1(int VAR1, char *VAR2[])
{
int VAR3;
const char *VAR4;

if (VAR1 == 1)
VAR5 |= VAR6 | VAR7;
while ((VAR3 = getopt(VAR1, VAR2, "")) != -1) {
switch (VAR3) {
case '':
VAR5 |= VAR8;

case '':
VAR5 |= VAR7;
break;
case '':		
VAR5 |= VAR9;

case '':		
if (VAR10 == NULL)
VAR11 = '';	
else if (VAR10[1] != '')
FUN2();	
else
VAR11 = *VAR10;
break;
case '':
VAR5 |= VAR12;

case '':
if (VAR10 == NULL)
VAR13 = '';	
else if (VAR10[1] != '')
FUN2();	
else
VAR13 = *VAR10;
break;
case '':		
VAR14 = FUN3(VAR10, 1, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}
break;
case '':			
VAR5 |= VAR16;

case '':			
VAR17 = FUN3(VAR10, 0, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}
if (VAR17 == 0)
VAR17 = 1;
break;
case '':
VAR5 |= VAR18;
break;
case '':		
VAR19 = FUN3(VAR10, 0, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}
break;
case '':
VAR20 = FUN3(VAR10, 0, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}
break;
case '':		
VAR5 |= VAR21;
break;
case '':
VAR5 |= VAR22;
break;
case '':			
VAR5 |= VAR23;
break;
case '':	
VAR5 |= VAR24;
break;
case '':
VAR5 |= VAR25;
break;
case '':			
VAR5 |= VAR26;

case '':
VAR5 |= VAR27;
break;
case '':			
VAR5 |= VAR28;
break;
default:
FUN2();
}
}
VAR1 -= VAR29;
VAR2 += VAR29;

switch (VAR1) {
case 2:
VAR30 = FUN3(VAR2[1], 0, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}

case 1:
VAR31 = FUN3(VAR2[0], 0, VAR15, &VAR4);
if (VAR4) {
FUN4("", VAR4);
FUN2();
}

case 0:
break;
default:
FUN2();
}
}