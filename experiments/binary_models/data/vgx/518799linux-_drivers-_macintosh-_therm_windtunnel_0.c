static int
FUN1( struct VAR1 *VAR2, int VAR3, int VAR4 )
{
u8 VAR5[2];

if( VAR4 != 1 && VAR4 != 2 )
return -VAR6;
VAR5[0] = VAR3;
if( FUN2(VAR2, VAR5, 1) != 1 )
return -VAR7;
if( FUN3(VAR2, VAR5, VAR4) != VAR4 )
return -VAR7;
return (VAR4 == 2)? ((unsigned int)VAR5[0] << 8) | VAR5[1] : VAR5[0];
}