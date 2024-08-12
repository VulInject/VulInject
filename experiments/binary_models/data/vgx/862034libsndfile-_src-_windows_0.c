** FUN1 (VAR1) 2009-2017 Erik de Castro VAR2 <VAR3@VAR4-VAR5.VAR6>
**
** This program is free VAR7; you can redistribute it and/or VAR8
** it under the terms of the GNU Lesser General Public License as published VAR9
** the Free Software VAR10; either version 2.1 of the VAR11, or
** (at your VAR12) any later VAR13.
**
** This program is distributed in the hope that it will be VAR14,
** but WITHOUT ANY VAR15; without even the implied warranty VAR16
** MERCHANTABILITY or FITNESS FOR A PARTICULAR VAR17.  See VAR18
** GNU Lesser General Public License for more VAR19.
**
** You should have received a copy of the GNU Lesser General Public VAR11
** along with this VAR20; if not, write to the Free VAR21
** VAR10, VAR22., 59 Temple VAR23 - Suite 330, VAR24, MA 02111-1307, VAR25.







extern int VAR26 ;

VAR27*
FUN2 (LPCWSTR VAR28, int VAR29, VAR30 *VAR31)
{	VAR32 	*VAR33 ;
char VAR34 [VAR35] ;
DWORD VAR36 ;

if ((VAR33 = FUN3 ()) == NULL)
{	VAR26 = VAR37 ;
return	NULL ;
} ;

FUN4 (VAR33) ;

if (FUN5 (VAR38, 0, VAR28, -1, VAR34, sizeof (VAR34), NULL, NULL) == 0)
{	VAR36 = FUN6 () ;
if (VAR36 == VAR39)
VAR26 = VAR40 ;
else
VAR26 = VAR41 ;

FUN7 (VAR33) ;

return NULL ;
} ;

FUN8 (VAR33, "", VAR34) ;

FUN9 (VAR33, VAR34) ;
VAR33->VAR42.VAR29 = VAR29 ;

VAR33->VAR43 = FUN10 (VAR33) ;

return FUN11 (VAR33, VAR31) ;
}