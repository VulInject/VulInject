static void FUN1(
VAR1* VAR2,            
int      VAR3,            
int      VAR4)            
{
coord_t  VAR5, VAR6, VAR7, VAR8;
int      VAR9;


VAR8 = VAR2[VAR4-1] >> 1;
for( VAR9 = VAR4-1; VAR9; VAR9-- )
VAR2[VAR9] ^= VAR2[VAR9-1];
VAR2[0] ^= VAR8;


VAR5 = 2 << (VAR3 - 1);
for( VAR7 = 2; VAR7 != VAR5; VAR7 <<= 1 )
{
VAR6 = VAR7 - 1;
for( VAR9 = VAR4-1; VAR9; VAR9-- )
if( VAR2[VAR9] & VAR7 ) VAR2[0] ^= VAR6;                              
else{ VAR8 = (VAR2[0] ^ VAR2[VAR9]) & VAR6;  VAR2[0] ^= VAR8;  VAR2[VAR9] ^= VAR8; } 
if( VAR2[0] & VAR7 ) VAR2[0] ^= VAR6;                                  
}
}