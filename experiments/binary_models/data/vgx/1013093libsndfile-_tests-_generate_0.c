** FUN1 (VAR1) 2007-2012 Erik de Castro VAR2 <VAR3@VAR4-VAR5.VAR6>
**
** This program is free VAR7; you can redistribute it and/or VAR8
** it under the terms of the GNU General Public License as published VAR9
** the Free Software VAR10; either version 2 of the VAR11, or
** (at your VAR12) any later VAR13.
**
** This program is distributed in the hope that it will be VAR14,
** but WITHOUT ANY VAR15; without even the implied warranty VAR16
** MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR17.  See VAR18
** GNU General Public License for more VAR19.
**
** You should have received a copy of the GNU General Public VAR11
** along with this VAR20; if not, write to the Free VAR21
** VAR10, VAR22., 59 Temple VAR23 - Suite 330, VAR24, MA 02111-1307, VAR25.






static float FUN2 (float *VAR26, int VAR27, int VAR28, float VAR29, float VAR30) ;

void
FUN3 (const char * VAR31, int VAR32, int VAR27)
{	float * VAR26 ;
float VAR30 = 0.0 ;

VAR26 = calloc (VAR27, sizeof (float)) ;

VAR30 = FUN2 (VAR26, VAR27, 0, 0.95f, VAR30) ;
VAR30 = FUN2 (VAR26, VAR27, VAR27 / 4, 0.85f, VAR30) ;
VAR30 = FUN2 (VAR26, VAR27, 2 * VAR27 / 4, 0.85f, VAR30) ;
FUN2 (VAR26, VAR27, 3 * VAR27 / 4, 0.85f, VAR30) ;

FUN4 (VAR31, VAR32, 44100, VAR26, VAR27) ;

free (VAR26) ;
}