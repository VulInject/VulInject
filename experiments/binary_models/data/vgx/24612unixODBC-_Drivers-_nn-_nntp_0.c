void*	FUN1( char*	VAR1 )
{
int		VAR2, VAR3;
char		VAR4[128];
struct VAR5
VAR6;
VAR7*	VAR8;

WSADATA VAR9;


if( FUN2((VAR10)VAR11, &VAR9) )
return 0;	

if( FUN3(VAR1) > 0 )

{
VAR6.VAR12 = VAR13;
VAR6.VAR14.VAR15 = FUN4(VAR1);
}
else

{
struct VAR16* VAR17;

if( ! (VAR17 = FUN5( VAR1 )) )
return 0;

VAR6.VAR12 = VAR17->VAR18;
memcpy( (char*)&VAR6.VAR14,
(char*)VAR17->VAR19, VAR17->VAR20);
}

VAR8 = (VAR7*)FUN6(sizeof(VAR7));

if( ! VAR8 )
return 0;

VAR6.VAR21 = FUN7(119);

if( (VAR2 = socket( VAR13, VAR22, 0)) == -1 )
{
FUN8(VAR8);
return 0;
}

if( connect( VAR2, (struct VAR23*)&VAR6, sizeof(VAR6) ) == -1 )
{
FUN9( VAR2 );
FUN8(VAR8);

return 0;
}

if( ! (VAR8->VAR24 = FUN10( VAR2, "")) )
{
FUN9( VAR2 );
FUN8(VAR8);

return 0;
}

if( ! (VAR8->VAR25 = FUN10( VAR2, "")) )
{
FUN11( VAR8->VAR24 );
FUN8(VAR8);

return 0;
}

if( ! FUN12(VAR4, sizeof(VAR4),  VAR8->VAR24 ) )
{
FUN11( VAR8->VAR24 );
FUN11( VAR8->VAR25 );
FUN8(VAR8);

return 0;
}


FUN13("", VAR8->VAR25);
if( FUN14(VAR8->VAR25) == VAR26 )
return 0;

if( ! FUN12(VAR4, sizeof(VAR4),  VAR8->VAR24 ) )
{
FUN11( VAR8->VAR24 );
FUN11( VAR8->VAR25 );
FUN8(VAR8);

return 0;
}

switch( FUN3( VAR4 ) )
{
case VAR27:
VAR8->VAR28 = 1;
break;

case VAR29:
VAR8->VAR28 = 0;
break;

default:
FUN11( VAR8->VAR24 );
FUN11( VAR8->VAR25 );
FUN8(VAR8);
return 0;
}

VAR8->VAR30 = 0;


VAR8->VAR31= 0L;
VAR8->VAR32  = 0L;
VAR8->VAR33= 0;
VAR8->VAR34 = 0;

return (void*)VAR8;
}