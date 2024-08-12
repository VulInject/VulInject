VAR1 FUN1( StreamBufferHandle_t VAR2,
size_t VAR3 )
{
VAR4 * const VAR5 = VAR2;
BaseType_t VAR6;

FUN2( VAR5 );


if( VAR3 == ( VAR7 ) 0 )
{
VAR3 = ( VAR7 ) 1;
}


if( VAR3 <= VAR5->VAR8 )
{
VAR5->VAR9 = VAR3;
VAR6 = VAR10;
}
else
{
VAR6 = VAR11;
}

return VAR6;
}