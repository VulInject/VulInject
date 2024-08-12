struct VAR1 * FUN1( char ** VAR2, int *VAR3 )
{
char *VAR4, *VAR5;
int VAR6;
struct VAR1 *VAR7;



*VAR3 = 0;

VAR4 = *VAR2;

if ( !**VAR2 )
return NULL;

while ( **VAR2 && **VAR2 != '' )
{
(*VAR2)++;
}

if ( !**VAR2 )
return NULL;

VAR7 = malloc( sizeof( struct VAR1 ));
if ( !VAR7 )
{
return NULL;
}

memset( VAR7, 0, sizeof( struct VAR1 ));

VAR6 = *VAR2 - VAR4;
VAR7 -> VAR8 = malloc( VAR6 + 1 );
memcpy( VAR7 -> VAR8, VAR4, VAR6 );
VAR7 -> VAR8[ VAR6 ] = '';

(*VAR2)++;
VAR4 = *VAR2;

if ( **VAR2 && **VAR2 == '' )
{
(*VAR2)++;
VAR4 ++;
while ( **VAR2 && **VAR2 != '' )
(*VAR2)++;

VAR6 = *VAR2 - VAR4;
VAR7 -> VAR9 = malloc( VAR6 + 1 );
memcpy( VAR7 -> VAR9, VAR4 , VAR6 );
VAR7 -> VAR9[ VAR6 ] = '';
(*VAR2)++;
}
else
{
while ( **VAR2 && **VAR2 != '' )
(*VAR2)++;

VAR6 = *VAR2 - VAR4;
VAR7 -> VAR9 = malloc( VAR6 + 1 );
memcpy( VAR7 -> VAR9, VAR4, VAR6 );
VAR7 -> VAR9[ VAR6 ] = '';
}



if ( VAR7 -> VAR8[ 0 ] == '' )
{
VAR5 = VAR7 -> VAR8 + 1;
VAR7 -> override = 1;
}
else
{
VAR5 = VAR7 -> VAR8;
}


if ( !FUN2( VAR5, VAR7, VAR10 ) &&
!FUN2( VAR5, VAR7, VAR11 ) &&
!FUN2( VAR5, VAR7, VAR12 ) &&
!FUN2( VAR5, VAR7, VAR13 ) &&
!FUN2( VAR5, VAR7, VAR14 ))
{
*VAR3 = 1;
}

if ( **VAR2 )
(*VAR2)++;

return VAR7;
}