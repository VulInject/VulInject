Copyright 2004 Free Software VAR1, VAR2.

This program is free VAR3; you can redistribute it and/or VAR4
it under the terms of the GNU General Public License as published VAR5
the Free Software VAR1; either version 2 of the VAR6, or
(at your VAR7) any later VAR8.

This program is distributed in the hope that it will be VAR9,
but WITHOUT ANY VAR10; without even the implied warranty VAR11
MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR12.  See VAR13
GNU General Public License for more VAR14.

You should have received a copy of the GNU General Public VAR6
along with this VAR15; if not, write to the Free VAR16
VAR1, VAR2., 59 Temple VAR17 - Suite 330, VAR18, MA 02111-1307, VAR19.

Please email any VAR20, VAR21, and/or additions to this file VAR22:


int VAR23 = 0;

extern void FUN1 (int VAR24);

int main()
{
FUN1 (3); 
FUN1 (4);
VAR23 = 1;
FUN1 (3);
return 0;
}