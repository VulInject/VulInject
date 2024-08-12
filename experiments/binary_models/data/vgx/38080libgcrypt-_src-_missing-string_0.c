int
FUN1( const char *VAR1, const char *VAR2 )
{
for( ; *VAR1 && *VAR2; VAR1++, VAR2++ ) {
if( *VAR1 != *VAR2 && FUN2(*VAR1) != FUN2(*VAR2) )
break;
}
return *(const VAR3*)VAR1 - *(const VAR3*)VAR2;
}