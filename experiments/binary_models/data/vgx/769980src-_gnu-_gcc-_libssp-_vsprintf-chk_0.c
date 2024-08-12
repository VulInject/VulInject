Software VAR1; either version 2, or (at your VAR2) any VAR3
VAR4.

In addition to the permissions in the GNU General Public VAR5, VAR6
Free Software Foundation gives you unlimited permission to link VAR6
compiled version of this file into combinations with other VAR7,
and to distribute those combinations without any restriction VAR8
from the use of this VAR9.  (The General Public License VAR10
do apply in other VAR11; for VAR12, they cover modification VAR13
the VAR9, and distribution when not linked into a VAR14
VAR15.)

GCC is distributed in the hope that it will be VAR16, but WITHOUT VAR17
VAR18; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR VAR19.  See the GNU General Public VAR5
for more VAR20.

You should have received a copy of the GNU General Public VAR5
along with VAR21; see the file VAR22.  If not, write to the VAR23
Software VAR1, 51 Franklin VAR24, Fifth VAR25, VAR26, VAR27




extern void FUN1 (void) FUN2((VAR28));

int
FUN3 (char *VAR29, int VAR30 FUN2((VAR31)),
size_t VAR32, const char *VAR33, va_list VAR34)
{
int VAR35;

if (VAR32 > (VAR36) VAR37)
VAR35 = vsprintf (VAR29, VAR33, VAR34);
else
{
VAR35 = vsnprintf (VAR29, VAR32, VAR33, VAR34);
if (VAR35 >= 0 && (VAR36) VAR35 >= VAR32)
FUN1 ();
}
return VAR35;
}