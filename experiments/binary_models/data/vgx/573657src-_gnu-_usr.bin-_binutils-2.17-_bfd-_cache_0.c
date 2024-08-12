the Free Software VAR1; either version 2 of the VAR2, or
(at your VAR3) any later VAR4.

This program is distributed in the hope that it will be VAR5,
but WITHOUT ANY VAR6; without even the implied warranty VAR7
MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR8.  See VAR9
GNU General Public License for more VAR10.

You should have received a copy of the GNU General Public VAR2
along with this VAR11; if not, write to the Free VAR12





enum VAR13 {
VAR14 = 0,
VAR15 = 1,
VAR16 = 2,
VAR17 = 4
};






static int VAR18;



static VAR19 *VAR20 = NULL;



static void
FUN1 (VAR19 *VAR21)
{
if (VAR20 == NULL)
{
VAR21->VAR22 = VAR21;
VAR21->VAR23 = VAR21;
}
else
{
VAR21->VAR22 = VAR20;
VAR21->VAR23 = VAR20->VAR23;
VAR21->VAR23->VAR22 = VAR21;
VAR21->VAR22->VAR23 = VAR21;
}
VAR20 = VAR21;
}