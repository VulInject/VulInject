void
FUN1(char **VAR1, int VAR2, int VAR3,
VAR4 *VAR5, enum VAR6 *VAR7,
char **VAR8)
{
char	*VAR9 = *VAR1;	
char	*VAR10 = VAR9 - 1;	
int	VAR11;	
int	VAR12 = 1;	

VAR11 = (unsigned char)*VAR9;

if (VAR12 < VAR2) { \
VAR11 = (unsigned char)*++VAR9; \
VAR12++; \
} else { \
VAR11 = VAR13; \
};

}