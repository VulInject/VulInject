static int FUN1 (void)
{
register char *VAR1 = VAR2->VAR3;
register char *VAR4 = (VAR5);
register int VAR6, VAR7;
int VAR8;

if ( (VAR9) > &VAR2->VAR3[(VAR10) + 1] )
FUN2(
"" );

if ( VAR2->VAR11 == 0 )
{ 
if ( (VAR9) - (VAR5) - VAR12 == 1 )
{

return VAR13;
}

else
{

return VAR14;
}
}




VAR6 = (int) ((VAR9) - (VAR5)) - 1;

for ( VAR7 = 0; VAR7 < VAR6; ++VAR7 )
*(VAR1++) = *(VAR4++);

if ( VAR2->VAR15 == VAR16 )

VAR2->VAR10 = (VAR10) = 0;

else
{
yy_size_t VAR17 =
VAR2->VAR18 - VAR6 - 1;

while ( VAR17 <= 0 )
{ 


YY_BUFFER_STATE VAR19 = VAR2;

int VAR20 =
(int) ((VAR9) - VAR19->VAR3);

if ( VAR19->VAR21 )
{
yy_size_t VAR22 = VAR19->VAR18 * 2;

if ( VAR22 <= 0 )
VAR19->VAR18 += VAR19->VAR18 / 8;
else
VAR19->VAR18 *= 2;

VAR19->VAR3 = (char *)

FUN3((void *) VAR19->VAR3,VAR19->VAR18 + 2  );
}
else

VAR19->VAR3 = 0;

if ( ! VAR19->VAR3 )
FUN2(
"" );

(VAR9) = &VAR19->VAR3[VAR20];

VAR17 = VAR2->VAR18 -
VAR6 - 1;

}

if ( VAR17 > VAR23 )
VAR17 = VAR23;


FUN4( (&VAR2->VAR3[VAR6]),
(VAR10), VAR17 );

VAR2->VAR10 = (VAR10);
}

if ( (VAR10) == 0 )
{
if ( VAR6 == VAR12 )
{
VAR8 = VAR13;
FUN5(VAR24  );
}

else
{
VAR8 = VAR14;
VAR2->VAR15 =
VAR16;
}
}

else
VAR8 = VAR25;

if ((VAR26) ((VAR10) + VAR6) > VAR2->VAR18) {

yy_size_t VAR22 = (VAR10) + VAR6 + ((VAR10) >> 1);
VAR2->VAR3 = (char *) FUN3((void *) VAR2->VAR3,VAR22  );
if ( ! VAR2->VAR3 )
FUN2( "" );
}

(VAR10) += VAR6;
VAR2->VAR3[(VAR10)] = VAR27;
VAR2->VAR3[(VAR10) + 1] = VAR27;

(VAR5) = &VAR2->VAR3[0];

return VAR8;
}



static yy_state_type FUN6 (void)
{
register yy_state_type VAR28;
register char *VAR29;

VAR28 = (VAR30);

for ( VAR29 = (VAR5) + VAR12; VAR29 < (VAR9); ++VAR29 )
{
register YY_CHAR VAR31 = (*VAR29 ? VAR32[FUN7(*VAR29)] : 1);
if ( VAR33[VAR28] )
{
(VAR34) = VAR28;
(VAR35) = VAR29;
}
while ( VAR36[VAR37[VAR28] + VAR31] != VAR28 )
{
VAR28 = (int) VAR38[VAR28];
if ( VAR28 >= 154 )
VAR31 = VAR39[(unsigned int) VAR31];
}
VAR28 = VAR40[VAR37[VAR28] + (unsigned int) VAR31];
}

return VAR28;
}


static yy_state_type FUN8  (yy_state_type VAR28 )
{
register int VAR41;
register char *VAR29 = (VAR9);

register YY_CHAR VAR31 = 1;
if ( VAR33[VAR28] )
{
(VAR34) = VAR28;
(VAR35) = VAR29;
}
while ( VAR36[VAR37[VAR28] + VAR31] != VAR28 )
{
VAR28 = (int) VAR38[VAR28];
if ( VAR28 >= 154 )
VAR31 = VAR39[(unsigned int) VAR31];
}
VAR28 = VAR40[VAR37[VAR28] + (unsigned int) VAR31];
VAR41 = (VAR28 == 153);

return VAR41 ? 0 : VAR28;
}