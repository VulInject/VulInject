static const char *FUN1( HMODULE VAR1, VAR2 *VAR3, void *VAR4, void **VAR5 )
{
int VAR6;
void *VAR7 = NULL;
const char *VAR8 = NULL;
VAR9 *VAR10 = (VAR9 *) VAR1; 

for( VAR6 = 0; VAR3[VAR6].VAR11 != 0 && VAR3[VAR6].VAR12 != 0; VAR6++ )
{
VAR13 *VAR14 = (VAR13 *)( VAR10 + VAR3[VAR6].VAR11 );
VAR13 *VAR15 = (VAR13 *)( VAR10 + VAR3[VAR6].VAR12 );

for( ; VAR14->VAR16.VAR17 != 0; VAR14++, VAR15++ )
{
VAR18 *VAR19;

if( FUN2( VAR14->VAR16.VAR20 ) )
continue;

if( (void *) VAR15->VAR16.VAR21 > VAR4 || VAR7 >= (void *) VAR15->VAR16.VAR21 )
continue;

VAR7 = (void *) VAR15->VAR16.VAR21;
VAR19 = (VAR18 *)( VAR10 + (VAR22) VAR14->VAR16.VAR17 );
VAR8 = (const char *) VAR19->VAR23;
}
}

*VAR5 = VAR7;
return VAR8;
}