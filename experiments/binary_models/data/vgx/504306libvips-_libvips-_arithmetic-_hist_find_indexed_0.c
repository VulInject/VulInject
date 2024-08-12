static void 
FUN1( VAR1 *VAR2,
VAR3 *VAR4, void *VAR5, void *VAR6, int VAR7 )
{
VAR8 *VAR9 = FUN2( VAR2 ); 
int VAR10 = VAR9->VAR11->VAR12;
unsigned short *VAR13 = (unsigned short *) VAR6;

int VAR14;

VAR14 = VAR4->VAR14;

switch( VAR9->VAR11->VAR15 ) {
case VAR16: 	
FUN3( unsigned char ); break; 
case VAR17: 	
FUN3( signed char ); break; 
case VAR18: 
FUN3( unsigned short ); break; 
case VAR19: 	
FUN3( signed short ); break; 
case VAR20: 	
FUN3( unsigned int ); break; 
case VAR21: 	
FUN3( signed int ); break; 
case VAR22: 		
FUN3( float ); break; 
case VAR23:	
FUN3( double ); break; 

default:
FUN4();
}


VAR4->VAR14 = VAR14;
}