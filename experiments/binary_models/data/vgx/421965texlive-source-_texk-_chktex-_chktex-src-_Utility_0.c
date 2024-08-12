void FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5, *VAR6;
if (VAR2 && VAR2->VAR7)
{

for ( VAR3 = 0; VAR3 < VAR8; ++VAR3 )
{
VAR5 = VAR2->VAR7[VAR3];
while ( VAR5 )
{
VAR6 = VAR5->VAR9;
free( VAR5 );
VAR5 = VAR6;
}
}

memset(VAR2->VAR7, '', VAR8 * sizeof(struct VAR4 *));
}
}