VAR1 *
FUN1( VAR2 * VAR3,
char *VAR4 )
{
VAR1 *VAR5 = NULL;
uri_type VAR6;
uri_type VAR7;

if( ( VAR3 )
&&
( FUN2( VAR4,
strlen( VAR4 ),
&VAR7 ) == VAR8 ) ) {

VAR5 = VAR3->VAR9;
while( VAR5 ) {
if( VAR5->VAR10 )
if( ( VAR11
( VAR5->VAR10, strlen( VAR5->VAR10 ),
&VAR6 ) == VAR8 ) ) {

if( !VAR12
( &VAR6.VAR13,
&VAR7.VAR13 ) )
return VAR5;

}
VAR5 = VAR5->VAR14;
}
}

return NULL;
}


VAR1 *
FUN3( VAR2 * VAR3,
const char *VAR15 )
{
VAR1 *VAR5 = NULL;
uri_type VAR6;
uri_type VAR7;

if( ( VAR3 )
&&
( VAR11
( VAR15, strlen( VAR15 ),
&VAR7 ) == VAR8 ) ) {
VAR5 = VAR3->VAR9;
while( VAR5 ) {
if( VAR5->VAR16 )
if( ( VAR11
( VAR5->VAR16, strlen( VAR5->VAR16 ),
&VAR6 ) == VAR8) ) {
if( !VAR12
( &VAR6.VAR13,
&VAR7.VAR13 ) )
return VAR5;
}
VAR5 = VAR5->VAR14;
}
}

return NULL;

}