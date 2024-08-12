void FUN1( VAR1 *VAR2, const VAR3 *VAR4 )
{
size_t VAR5;

const VAR6 * VAR7 = ( const VAR6 * )( VAR8 );
const VAR6 * VAR9 = ( const VAR6 * )( VAR4 );
VAR6 * VAR10 = ( VAR6 * )( VAR2->VAR10 );

memset( VAR2, 0, sizeof( VAR1 ) );

for( VAR5 = 0; VAR5 < VAR11; ++VAR5 ) VAR10[VAR5] = VAR7[VAR5] ^ VAR9[VAR5];

VAR2->VAR12 = VAR4->VAR13;
}