int
FUN1(
VAR1 **VAR2,
unsigned VAR3, unsigned VAR4,
char *VAR5, size_t VAR6
)
{
char **VAR7;
unsigned VAR8, VAR9;
VAR7 = (char**)calloc(VAR10 + 1, sizeof(char*));

if (VAR7 == NULL)
FUN2();

for (VAR8 = 0, VAR9 = 0;  VAR8 < VAR11;  VAR8++)
{
const VAR12 *VAR13 = VAR14 + VAR8;

if (VAR13->VAR15 != NULL  && (VAR13->VAR4 & VAR3) == VAR4)
{
VAR7[VAR9] = strdup(VAR13->VAR15);

if (VAR7[VAR9] == NULL)
{
FUN3(VAR7);
FUN2();
}

VAR9++;
}
}

VAR7[VAR9] = NULL;

*VAR2 = (VAR1*)malloc(sizeof(VAR1));

if (*VAR2 == NULL)
{
FUN3(VAR7);
FUN2();
}

(*VAR2)->VAR16 = (*VAR2)->VAR17 = VAR7;

return VAR18;
}



if( VAR2 == NULL || *VAR2->VAR17 == NULL )        \
return VAR19;               \
FUN4( VAR20, *VAR2->VAR17++, VAR21 );  \
return VAR18;
int FUN5(VAR1* VAR2, char *VAR20, size_t VAR21)
{
FUN6();
}

int FUN7(VAR22* VAR2, char *VAR20, size_t VAR21)
{
FUN6();
}

int FUN8(VAR23* VAR2, char *VAR20, size_t VAR21)
{
FUN6();
}

char **VAR8;                      \
size_t VAR24 = 0;                \