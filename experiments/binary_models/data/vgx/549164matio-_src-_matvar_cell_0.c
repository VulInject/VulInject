VAR1 *
FUN1(VAR1 *VAR2, int VAR3, VAR1 *VAR4)
{
size_t VAR5 = 1;
VAR1 **VAR6, *VAR7 = NULL;
int VAR8;

if ( VAR2 == NULL || VAR2->VAR9 < 1 )
return NULL;

VAR8 = FUN2(VAR2, &VAR5);
if ( VAR8 )
return NULL;

VAR6 = (VAR1 **)VAR2->VAR10;
if ( 0 <= VAR3 && (VAR11)VAR3 < VAR5 ) {
VAR7 = VAR6[VAR3];
VAR6[VAR3] = VAR4;
}

return VAR7;
}