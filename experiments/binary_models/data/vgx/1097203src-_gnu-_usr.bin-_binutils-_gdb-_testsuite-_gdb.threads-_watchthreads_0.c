it under the terms of the GNU General Public License as published VAR1
the Free Software VAR2; either version 2 of the VAR3, or
(at your VAR4) any later VAR5.

This program is distributed in the hope that it will be VAR6,
but WITHOUT ANY VAR7; without even the implied warranty VAR8
MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR9.  See VAR10
GNU General Public License for more VAR11.

You should have received a copy of the GNU General Public VAR3
along with this VAR12; if not, write to the Free VAR13
VAR2, VAR14., 59 Temple VAR15 - Suite 330,
VAR16, MA 02111-1307, VAR17.  



void *FUN1(void *VAR18); 


unsigned int VAR19[VAR20+1];

int main() {
int VAR21;
pthread_t VAR22[VAR20];
void *VAR23;
long VAR24;

for (VAR24 = 0; VAR24 < VAR20; VAR24++)
{
VAR19[VAR24] = 1; 
VAR21 = FUN2(&VAR22[VAR24],
NULL,
VAR25,
(void *) VAR24);
}

VAR19[VAR24] = 1;
FUN1 ((void *) VAR24);

FUN3(VAR26);
}