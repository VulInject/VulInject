** (at your VAR1) any later VAR2.
**
** This program is distributed in the hope that it will be VAR3,
** but WITHOUT ANY VAR4; without even the implied warranty VAR5
** MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR6.  See VAR7
** GNU General Public License for more VAR8.
**
** You should have received a copy of the GNU General Public VAR9
** along with this VAR10; if not, write to the Free VAR11
** VAR12, VAR13., 59 Temple VAR14 - Suite 330, VAR15, MA 02111-1307, VAR16.






static float FUN1 (float *VAR17, int VAR18, int VAR19, float VAR20, float VAR21) ;

void
FUN2 (const char * VAR22, int VAR23, int VAR18)
{	float * VAR17 ;
float VAR21 = 0.0 ;

VAR17 = calloc (VAR18, sizeof (float)) ;

VAR21 = FUN1 (VAR17, VAR18, 0, 0.95f, VAR21) ;
VAR21 = FUN1 (VAR17, VAR18, VAR18 / 4, 0.85f, VAR21) ;
VAR21 = FUN1 (VAR17, VAR18, 2 * VAR18 / 4, 0.85f, VAR21) ;
FUN1 (VAR17, VAR18, 3 * VAR18 / 4, 0.85f, VAR21) ;

FUN3 (VAR22, VAR23, 44100, VAR17, VAR18) ;

free (VAR17) ;
}