void FUN1( VAR1 *VAR2 ) {
VAR1 *VAR3;
VAR4 *VAR5;
VAR6 *VAR7, *VAR8, *VAR9;

VAR7 = NULL;
for ( VAR3 = VAR2; VAR3; VAR3 = VAR3->VAR10 )
{
for ( VAR5 = VAR3->VAR11; VAR5; VAR5 = VAR5->VAR10 )
{
VAR7 = FUN2( VAR5->VAR12, VAR7 );
} 
} 
for ( VAR8 = VAR7; VAR8; VAR8 = VAR9 )
{
VAR9 = VAR8->VAR10;
FUN3( VAR8 );
} 
}