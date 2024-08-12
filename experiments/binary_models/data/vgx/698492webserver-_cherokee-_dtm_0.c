static int
FUN1( const char* VAR1, size_t VAR2, struct VAR3 *VAR4 )
{
int VAR5 = 0;


if (VAR2 < 3)
return 0;


switch( VAR1[0] ) {
case '':
case '':
if ( VAR1[1] == '' ||
VAR1[1] == '')
VAR5 = 0;
else
VAR5 = 6;
break;

case '':
case '':
VAR5 = 1;
break;

case '':
case '':
if ( VAR1[1] == '' ||
VAR1[1] == '')
VAR5 = 2;
else
VAR5 = 4;
break;

case '':
case '':
VAR5 = 3;
break;

case '':
case '':
VAR5 = 5;
break;

default:
return 0;
}

VAR4->VAR5 = VAR5;


if ( VAR2 == VAR6[VAR5].VAR7 ) {
return ( FUN2(
VAR1,
VAR6[VAR5].VAR8,
VAR6[VAR5].VAR7 ) == 0 );
}


if ( VAR2 == VAR6[VAR5].VAR9 ) {
return ( FUN2(
VAR1,
VAR6[VAR5].VAR10,
VAR6[VAR5].VAR9 ) == 0 );
}


return 0;
}