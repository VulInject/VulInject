void FUN1( const char *VAR1, int VAR2 )
{
if( (VAR3 == VAR4) && (VAR5 == 0) )
{
VAR5 = 1;

}
else if( VAR3 < VAR4 )
{
VAR6[VAR3] = VAR1;
VAR7[VAR3] = VAR2;
VAR3++;
}
}





typedef unsigned long long  VAR8;

typedef struct VAR9
{
unsigned    VAR10;
int         VAR11;
int         VAR12;
int         VAR13;
double      VAR14;
char*       VAR2;
} VAR15;

static const unsigned VAR16 = 0xcafebabe;


int FUN2( VAR17* VAR18, unsigned VAR19 )
{
VAR15* VAR20 = (VAR15*)FUN3(sizeof(VAR15));
if (VAR20 == 0)
{
return VAR21;
}
assert(VAR18 != 0);
*VAR18 = VAR20;

VAR20->VAR2 = (char*)FUN3(VAR19);
if (VAR20->VAR2 == 0)
{
FUN4(VAR20);
return VAR21;
}
VAR20->VAR10 = VAR16;
VAR20->VAR13 = VAR19;
VAR20->VAR14 = FUN5();
return VAR22;
}