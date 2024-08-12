static sf_count_t FUN1 (VAR1 *VAR2, double *VAR3, sf_count_t VAR4) ;

static sf_count_t FUN2 (VAR1 *VAR2, const short *VAR3, sf_count_t VAR4) ;
static sf_count_t FUN3 (VAR1 *VAR2, const int *VAR3, sf_count_t VAR4) ;
static sf_count_t FUN4 (VAR1 *VAR2, const float *VAR3, sf_count_t VAR4) ;
static sf_count_t FUN5 (VAR1 *VAR2, const double *VAR3, sf_count_t VAR4) ;

static sf_count_t	FUN6	(VAR1 *VAR2, int VAR5, sf_count_t VAR6) ;
static int	FUN7		(VAR1 *VAR2) ;
static int	FUN8	(VAR1 *VAR2) ;

static int	FUN9 (VAR1 *VAR2, VAR7 *VAR8, int *VAR3, int VAR4) ;
static int	FUN10 (VAR1 *VAR2, VAR7 *VAR8, int VAR9) ;

static int	FUN11 (VAR1 *VAR2, VAR7 *VAR8, const int *VAR3, int VAR4) ;
static void FUN12 (VAR1 *VAR2, VAR7 *VAR8, int VAR10, int VAR11) ;
static void FUN13 (VAR7 *VAR8) ;



int
FUN14 (VAR1 *VAR2, int VAR12)
{	VAR7	*VAR8 ;

if (VAR2->VAR13 != NULL)
{	FUN15 (VAR2, "") ;
return VAR14 ;
} ;

if (VAR12 > 24)
return VAR15 ;

if (VAR2->VAR16.VAR5 == VAR17)
return VAR18 ;

if ((VAR8 = calloc (1, sizeof (VAR7))) == NULL)
return VAR19 ;

VAR2->VAR13 = (void*) VAR8 ;
VAR8->VAR20 	= VAR12 ;
FUN13 (VAR8) ;

if (VAR2->VAR16.VAR5 == VAR21)
{	VAR2->VAR22		= VAR23 ;
VAR2->VAR24		= VAR25 ;
VAR2->VAR26		= VAR27 ;
VAR2->VAR28	= VAR29 ;
} ;

if (VAR2->VAR16.VAR5 == VAR30)
{	VAR2->VAR31	= VAR32 ;
VAR2->VAR33		= VAR34 ;
VAR2->VAR35	= VAR36 ;
VAR2->VAR37	= VAR38 ;
} ;

VAR2->VAR39 = VAR40 ;
VAR2->VAR41 = VAR42 ;
VAR2->VAR43 = VAR44 ;

if (VAR2->VAR16.VAR5 == VAR21)
{	VAR2->VAR45.VAR46 = FUN16 (VAR2) ;
FUN13 (VAR8) ;
} ;

return 0 ;
}