int
main( void )
{
int VAR1;
int VAR2;
int  VAR3;

VAR4 = FUN1( (VAR5 *)NULL )
+ VAR6
;
VAR7 = *FUN2( &VAR4 );

VAR3 = ( sizeof( VAR8 ) > 4 ) 	
? ( 400 * 3 ) 		
: ((int)(0x7FFFFFFF / 365.242 / 24/60/60)* 2 ); 

VAR9 = VAR10 + VAR3;

FUN3( "" );
{		
unsigned long VAR11;

if ( VAR10 >= VAR9 )
{
fprintf( VAR12, "",
(int)VAR10, (int)VAR9, (int)VAR3 );
FUN4(2);
}

{
int  VAR13;

VAR13 = VAR7.VAR14;	

VAR3 = 1980;
VAR7.VAR14 = VAR3 - 1900;
VAR1 = VAR2 = 0;
FUN5(VAR3);		
if ( VAR1 == 0 ) 
{
fprintf( VAR12, 
"",
(int)VAR3, VAR15, VAR16, (int)VAR1, (int)VAR2 );
FUN4(2);
}

VAR3 = 2100;		
VAR1 = VAR2 = 0;
FUN5(VAR3);		
if ( VAR2 == 0 ) 
{
fprintf( VAR12, 
"",
(int)VAR3, VAR15, VAR16, (int)VAR1, (int)VAR2 );
FUN4(2);
}
VAR1 = VAR2 = 0;
VAR7.VAR14 = VAR3 - 1900;	
FUN5(1980);		
if ( VAR1 == 0 ) 
{
fprintf( VAR12, 
"",
(int)VAR3, VAR15, VAR16, (int)VAR1, (int)VAR2 );
FUN4(2);
}

VAR7.VAR14 = VAR13;
}

VAR11 = 365+1;		
for ( VAR3 = 1; VAR3 <= 2500; VAR3++ )
{
long   VAR17;
VAR17 = FUN6( VAR3 );
if ( VAR11 != VAR17 )
{
fprintf( VAR12, "", 
VAR3, (long)VAR11, (long)VAR17 );
FUN4(2);		
}

VAR17 = FUN7(VAR3);		
if ( VAR11 != VAR17 )
{
fprintf( VAR12, "", 
VAR3, (long)VAR11, (long)VAR17 );
FUN4(2);		
}

VAR11 += 365;
if ( FUN8(VAR3) ) VAR11++;
}

if ( FUN8(1999) )
{
fprintf( VAR12, "" );
FUN4(2);
}
if ( !FUN8(2000) )
{
fprintf( VAR12, "" );
FUN4(2);
}
if ( FUN8(2001) )
{
fprintf( VAR12, "" );
FUN4(2);
}

if ( !FUN9(2000-1900) )
{
fprintf( VAR12, "" );
FUN4(2);
}
}

VAR1 = VAR2 = 0;

FUN3( "" );
{		

for ( VAR3 = 1400; VAR3 <= 2200; VAR3++ )
{
int  VAR18;
int  VAR19;

VAR18 = FUN10(VAR3);
VAR19 = FUN8(VAR3);

if ( !!VAR18 != !!VAR19 )
{
FUN5(VAR3);
fprintf( VAR12, 
"", VAR3, VAR18, VAR19 );
break;
}

VAR19 = FUN9(VAR3-1900);

if ( !!VAR18 != !!VAR19 )
{
FUN5(VAR3);
fprintf( VAR12, 
"", VAR3, VAR18, VAR19 );
break;
}
}
}

FUN3( "" );
{		



for ( VAR3 = 1400; VAR3 <= 2200; VAR3++ )
{
int  VAR18;

VAR18 = FUN10(VAR3);

if ( !(!VAR18) != !(!FUN11(VAR3)) )
{
FUN5(VAR3);
fprintf( VAR12, 
"", VAR3, VAR18 );
break;
}
}
}   


FUN3( "" );
{ 
long VAR20;	

struct VAR21	
{
int   VAR3;
} VAR22, *VAR23;

VAR23 = &VAR22;



for ( VAR3 = 1400; VAR3 <= 2200; VAR3++ )
{
int  VAR18;
int  VAR24;

VAR18 = FUN10(VAR3);
VAR24 = (int)FUN12(VAR3);

if ( ( VAR18 ? 366 : 365 ) != VAR24 )
{
FUN5(VAR3);
fprintf( VAR12, 
"", 
VAR3, VAR18, VAR24 );
break;
}
}



VAR20 = FUN6( 1970 );	

for ( VAR3 = 1970; VAR3 < VAR9; VAR3++ )
{				
unsigned long VAR25;
long VAR26 ;

VAR23->VAR3 = VAR3;



VAR25 =  (VAR23->VAR3 - 1970) * 365;
VAR25 += (VAR23->VAR3 >> 2) - (1970 >> 2);
VAR25 -= VAR23->VAR3 / 100 - 1970 / 100;
VAR25 += VAR23->VAR3 / 400 - 1970 / 400;




VAR25 = FUN7(VAR3) - FUN7(1970);


VAR26 = FUN6( VAR3 );	
if ( VAR25 != VAR26 - VAR20 )
{
FUN5(VAR3);
fprintf( VAR12, 
"",
VAR3,      (long)VAR20,
VAR3,
(long)VAR26,
(long)(VAR26 - VAR20),
(long)VAR25 );
}
}

{
VAR27 = 1;			
for ( VAR3 = 1970; VAR3 < VAR9; VAR3++ )
{		
clocktime_t  VAR28;
time_t	     VAR29;
time_t	     VAR30;
u_long       VAR31;
unsigned long VAR25;

VAR28.VAR32 = 1;
VAR28.VAR33 = 1;
VAR28.VAR3 = VAR3;
VAR28.VAR34 = VAR28.VAR35 = VAR28.VAR36 = VAR28.VAR37 = 0;
VAR28.VAR38 = 0;
VAR28.VAR39 = 0;
VAR28.VAR40 = 0;

VAR31 = 0;
VAR29 = FUN13( &VAR28, &VAR31 );
if ( VAR28.VAR3 != VAR3 )
{
fprintf( VAR12, 
"",
(int)VAR3, (int)VAR31, (int)VAR28.VAR3 );
FUN5(VAR3);
break;
}
VAR25 = FUN7(VAR3) - FUN7(1970);	
VAR30 = VAR25 * 24 * 60 * 60;
if ( VAR29 != VAR30  ||  VAR31 )
{   
fprintf( VAR12, 
"",
VAR3, (int)VAR31, 
(unsigned long)VAR29, (unsigned long)VAR30,
((long)VAR29 - (long)VAR30) );
FUN5(VAR3);
break;
}

if ( VAR3 >= VAR41+1900 )
{

VAR28.VAR39 = 0;
VAR28.VAR3 = VAR3 % 100;
VAR31 = 0;

VAR29 = FUN13( &VAR28, &VAR31 );

if ( VAR29 != VAR30  ||  VAR31 )
{   
fprintf( VAR12, 
"",
VAR3, (int)VAR28.VAR3, (int)VAR31, 
(unsigned long)VAR29, (unsigned long)VAR30,
((long)VAR29 - (long)VAR30) );
FUN5(VAR3);
break;
}


VAR28.VAR39 = 0;
VAR28.VAR3 = VAR3 - 1900;
VAR31 = 0;

VAR29 = FUN13( &VAR28, &VAR31 );

if ( VAR29 != VAR30  ||  VAR31 )
{   
fprintf( VAR12, 
"",
VAR3, (int)VAR28.VAR3, (int)VAR31, 
(unsigned long)VAR29, (unsigned long)VAR30,
((long)VAR29 - (long)VAR30) );
FUN5(VAR3);
break;
}


}
}
}
}

FUN3( "" );
{		
struct	calendar  VAR42;
u_long VAR43;		

VAR3 = VAR10;		
FUN14( "", (int)VAR10 );
FUN14( "", (int)VAR9 );


VAR43 = FUN7( VAR10 );		
VAR43 -= 365;		
if ( VAR44 != VAR43 )
{
FUN5(VAR3);
fprintf( VAR12, 
"",
(int)VAR10,
(long)VAR44,  (long)VAR43,
(long)VAR44 - (long)VAR43 );
}

for ( ; VAR3 < VAR9; VAR3++ )
{


VAR43 = FUN6( VAR3 ) - FUN6( VAR10 );  
VAR43 *= 24 * 60 * 60;	
FUN15( VAR43, &VAR42 );	
if ( VAR42.VAR3  != VAR3
|| VAR42.VAR33 != 1
|| VAR42.VAR45 != 1 )
{
FUN5(VAR3);
fprintf( VAR12, "",
(unsigned long)VAR43,
VAR3, 
(int)VAR42.VAR3, (int)VAR42.VAR33, (int)VAR42.VAR45 );
break;
}

VAR43 += (31 + 28-1) * ( 24 * 60 * 60 );	
FUN15( VAR43, &VAR42 );	
if ( VAR42.VAR3  != VAR3
|| VAR42.VAR33 != 2
|| VAR42.VAR45 != 28 )
{
FUN5(VAR3);
fprintf( VAR12, "",
(unsigned long)VAR43,
VAR3, 
(int)VAR42.VAR3, (int)VAR42.VAR33, (int)VAR42.VAR45 );
break;
}

{
int    VAR46;		
int    VAR47;		

VAR46 = FUN8(VAR3) ?  2 : 3;
VAR47 = FUN8(VAR3) ? 29 : 1;

VAR43 += ( 24 * 60 * 60 );	
FUN15( VAR43, &VAR42 );	
if ( VAR42.VAR3  != VAR3
|| VAR42.VAR33 != VAR46
|| VAR42.VAR45 != VAR47 )
{
FUN5(VAR3);
fprintf( VAR12, "",
(unsigned long)VAR43,
VAR3, VAR46, VAR47, 
(int)VAR42.VAR3, (int)VAR42.VAR33, (int)VAR42.VAR45 );
break;
}

}
}
}

FUN3( "" );
{		
struct	calendar  VAR42;
u_long      VAR43;		

VAR3 = VAR10;		
FUN14( "", (int)VAR10 );
FUN14( "", (int)VAR9 );


for ( ; VAR3 < VAR9; VAR3++ )
{
u_long  VAR48;


VAR42.VAR3 = VAR3;
VAR42.VAR33 = VAR42.VAR45 = 1; 	
VAR42.VAR49 = 1;		
VAR42.VAR34 = VAR42.VAR35 = VAR42.VAR36 = 0;

VAR43 = FUN6( VAR3 ) - FUN6( VAR10 );  
VAR43 *= 24 * 60 * 60;	
VAR48 = FUN16( &VAR42 );
if ( VAR43 != VAR48 )
{
FUN5(VAR3);
fprintf( VAR12, "",
(int)VAR3,
(unsigned long)VAR43, (unsigned long)VAR48 ,
(long)VAR43 - (long)VAR48 );

break;
}


FUN15( VAR48, &VAR42 );	
if ( VAR42.VAR3  != VAR3
|| VAR42.VAR33 != 1
|| VAR42.VAR45 != 1 )
{
FUN5(VAR3);
fprintf( VAR12, "",
(unsigned long)VAR48,
VAR3, 
(int)VAR42.VAR3, (int)VAR42.VAR33, (int)VAR42.VAR45 );
break;
}
}
}

if ( VAR2 > 0 )
fprintf( VAR12, "",  VAR2 );
if ( VAR1 > 0 )
fprintf( VAR12, "",  VAR1 );
return VAR1 ? 1 : 0;
}