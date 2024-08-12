extern void FUN1 ((VAR1)) FUN2(VAR2);


struct  refclock VAR3 = {
VAR4, 		
VAR5,		
VAR6,		
VAR7,		
VAR7,		 
VAR7,		 
VAR8			
};

int VAR9;  
int VAR10;
int VAR11;	
SYMMT_PCI_HANDLE VAR12;


inline const char *FUN3(int VAR13) {static char VAR14[20]={0}; snprintf(VAR14,19,"",VAR13);return VAR14;}
inline const char* FUN3(int VAR13) {static char VAR14[20]={0}; snprintf(VAR14,19,"",VAR13);return VAR14;}


static int
FUN4(
int VAR15,
struct VAR16 *VAR16
)
{
register struct VAR17 *VAR18;
struct VAR19 *VAR20;
int VAR21;
char VAR22[20];

VAR11 = (int)(VAR16->VAR23);
switch (VAR11) {		
case 1:
case 3:
break;
case 2:
VAR12 = FUN5(); 	
break;
default:
break;
}


FUN6("",FUN3(VAR16->VAR24));
if ( (VAR9 = open(FUN3(VAR16->VAR24), VAR25)) < 0) {
FUN7(VAR26, "", VAR22);
return (0);
}
else  { 
switch (VAR11) {
case 1:	break;
case 2: break;
case 3:break;
default: 

if( FUN8( VAR9, VAR27, &VAR21 ) )
FUN7(VAR26, "");

VAR10 = 0; 
if( FUN8( VAR9, VAR28, &VAR10 ) )
FUN7(VAR26, "");
break;
}
}


VAR18 = FUN9(sizeof(struct VAR17));



VAR20 = VAR16->VAR29;
VAR20->VAR30 = VAR18;
VAR20->VAR31 = VAR32;

VAR20->VAR33.VAR34 = VAR35;
VAR20->VAR33.VAR36 = VAR16;
VAR20->VAR33.VAR37 = 0;
VAR20->VAR33.VAR38 = VAR9;



VAR16->VAR39 = VAR40;
memcpy(&VAR20->VAR41, VAR42,4);
return (1);
}