or (at your VAR1) any later VAR2.

Quake III Arena source code is distributed in the hope that it will VAR3
VAR4, but WITHOUT ANY VAR5; without even the implied warranty VAR6
MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR7.  See VAR8
GNU General Public License for more VAR9.

You should have received a copy of the GNU General Public VAR10
along with Quake III Arena source VAR11; if not, write to the Free VAR12
VAR13, VAR14., 51 Franklin VAR15, Fifth VAR16, VAR17, MA  02110-1301  VAR18
===========================================================================



extern VAR19 *VAR20;


void FUN1( unsigned char VAR21[256], unsigned char VAR22[256], unsigned char VAR23[256] )
{
Uint16 VAR24[3][256];
int VAR25, VAR26;

if( !VAR27.VAR28 || VAR29->VAR30 > 0 )
return;

for (VAR25 = 0; VAR25 < 256; VAR25++)
{
VAR24[0][VAR25] = ( ( ( VAR31 ) VAR21[VAR25] ) << 8 ) | VAR21[VAR25];
VAR24[1][VAR25] = ( ( ( VAR31 ) VAR22[VAR25] ) << 8 ) | VAR22[VAR25];
VAR24[2][VAR25] = ( ( ( VAR31 ) VAR23[VAR25] ) << 8 ) | VAR23[VAR25];
}



{
OSVERSIONINFO	VAR32;

VAR32.VAR33 = sizeof( VAR32 );
FUN2( &VAR32 );
if( VAR32.VAR34 >= 5 && VAR32.VAR35 == VAR36 )
{
VAR37.FUN3( VAR38, "" );
for( VAR26 = 0 ; VAR26 < 3 ; VAR26++ )
{
for( VAR25 = 0 ; VAR25 < 128 ; VAR25++ )
{
if( VAR24[ VAR26 ] [ VAR25] > ( ( 128 + VAR25 ) << 8 ) )
VAR24[ VAR26 ][ VAR25 ] = ( 128 + VAR25 ) << 8;
}

if( VAR24[ VAR26 ] [127 ] > 254 << 8 )
VAR24[ VAR26 ][ 127 ] = 254 << 8;
}
}
}


for (VAR26 = 0; VAR26 < 3; VAR26++)
{
for (VAR25 = 1; VAR25 < 256; VAR25++)
{
if (VAR24[VAR26][VAR25] < VAR24[VAR26][VAR25-1])
VAR24[VAR26][VAR25] = VAR24[VAR26][VAR25-1];
}
}

if (FUN4(VAR20, VAR24[0], VAR24[1], VAR24[2]) < 0)
{
VAR37.FUN3( VAR38, "", FUN5() );
}
}