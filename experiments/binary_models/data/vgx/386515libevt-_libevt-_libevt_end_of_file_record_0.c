int FUN1(
VAR1 *VAR2,
const VAR3 *VAR4,
size_t VAR5,
VAR6 **VAR7 )
{
static char *VAR8 = "";
uint32_t VAR9 = 0;
uint32_t VAR10         = 0;

uint32_t VAR11  = 0;

if( VAR2 == NULL )
{
FUN2(
VAR7,
VAR12,
VAR13,
"",
VAR8 );

return( -1 );
}
if( VAR4 == NULL )
{
FUN2(
VAR7,
VAR12,
VAR13,
"",
VAR8 );

return( -1 );
}
if( ( VAR5 < sizeof( VAR14 ) )
|| ( VAR5 > (VAR15) VAR16 ) )
{
FUN2(
VAR7,
VAR17,
VAR18,
"",
VAR8 );

return( -1 );
}
if( VAR19 != 0 )
{
FUN3(
"",
VAR8 );
FUN4(
VAR4,
sizeof( VAR14 ),
0 );
}
if( FUN5(
( (VAR14 *) VAR4 )->VAR20,
"",
4 ) != 0 )
{
FUN2(
VAR7,
VAR17,
VAR21,
"",
VAR8 );

return( -1 );
}
if( FUN5(
( (VAR14 *) VAR4 )->VAR22,
"",
4 ) != 0 )
{
FUN2(
VAR7,
VAR17,
VAR21,
"",
VAR8 );

return( -1 );
}
if( FUN5(
( (VAR14 *) VAR4 )->VAR23,
"",
4 ) != 0 )
{
FUN2(
VAR7,
VAR17,
VAR21,
"",
VAR8 );

return( -1 );
}
if( FUN5(
( (VAR14 *) VAR4 )->VAR24,
"",
4 ) != 0 )
{
FUN2(
VAR7,
VAR17,
VAR21,
"",
VAR8 );

return( -1 );
}
FUN6(
( (VAR14 *) VAR4 )->VAR10,
VAR10 );

FUN6(
( (VAR14 *) VAR4 )->VAR9,
VAR9 );

if( VAR19 != 0 )
{
FUN3(
"" VAR25 "",
VAR8,
VAR10 );

FUN6(
( (VAR14 *) VAR4 )->VAR20,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR22,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR23,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR24,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR27,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR28,
VAR11 );
FUN3(
"" VAR26 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR29,
VAR11 );
FUN3(
"" VAR25 "",
VAR8,
VAR11 );

FUN6(
( (VAR14 *) VAR4 )->VAR30,
VAR11 );
FUN3(
"" VAR25 "",
VAR8,
VAR11 );

FUN3(
"" VAR25 "",
VAR8,
VAR9 );

FUN3(
"" );
}

if( VAR10 != VAR9 )
{
FUN2(
VAR7,
VAR31,
VAR32,
"" VAR25 "" VAR25 "",
VAR8,
VAR10,
VAR9 );

return( -1 );
}
if( (VAR15) VAR10 != sizeof( VAR14 ) )
{
FUN2(
VAR7,
VAR31,
VAR32,
"" VAR25 "",
VAR8,
VAR10 );

return( -1 );
}
return( 1 );
}