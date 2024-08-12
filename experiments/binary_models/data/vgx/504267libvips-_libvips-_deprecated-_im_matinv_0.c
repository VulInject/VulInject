int
FUN1( 
VAR1 *VAR2 
){
int VAR3= 0;

if( VAR2-> VAR4 != VAR2-> VAR5 ){
FUN2( VAR6, "" );
return -1;
}
if( VAR7 < 4 ){
VAR1 *VAR8= FUN3( VAR2, "" );
if( ! VAR8 )
return -1;

VAR3= FUN4( VAR2, (const VAR1*) VAR8, VAR6 );

FUN5( VAR8 );

return VAR3;
}
{
VAR1 *VAR9;

VAR9= FUN6( VAR2, "" );

if( ! VAR9 || FUN7( VAR2, (const VAR1*) VAR9 ) )
VAR3= -1;

FUN5( VAR9 );

return VAR3;
}
}