static VAR1
FUN1	(VAR2 *VAR3, int *VAR4, sf_count_t VAR5)
{	BUF_UNION	VAR6 ;
void		(*VAR7) (const double *, int, int *, double) ;
int			VAR8, VAR9 ;
sf_count_t	VAR10 = 0 ;
double		VAR11 ;

VAR7 = (VAR3->VAR12) ? VAR13 : VAR14 ;
VAR8 = FUN2 (VAR6.VAR15) ;
VAR11 = (VAR3->VAR16 == 0) ? 1.0 : 2147483648.0f / VAR3->VAR17 ;

while (VAR5 > 0)
{	if (VAR5 < VAR8)
VAR8 = (int) VAR5 ;
VAR9 = (int) FUN3 (VAR6.VAR15, sizeof (double), VAR8, VAR3) ;

if (VAR3->VAR18 == VAR19)
FUN4 (VAR6.VAR15, VAR8) ;

FUN5 (VAR6.VAR15, VAR9, VAR4 + VAR10, VAR11) ;
VAR10 += VAR9 ;
VAR5 -= VAR9 ;
if (VAR9 < VAR8)
break ;
} ;

return VAR10 ;
}