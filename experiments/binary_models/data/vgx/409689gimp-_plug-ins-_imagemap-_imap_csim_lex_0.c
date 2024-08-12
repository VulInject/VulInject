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