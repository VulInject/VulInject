VAR1
FUN1( VAR2 *VAR3, int VAR4, void *VAR5 )
{
int		VAR6 = 0;

if ( !VAR7 ) {
FUN2();
}


if (NULL == VAR5)
{
return(VAR8);
}

if ( VAR4 == VAR9 ) {

*((struct VAR10 *)VAR5) = VAR11;
return( 0 );
}

if ( VAR4 == VAR12 ) {
VAR6 = FUN3( (VAR13 *)VAR5 );
if ( VAR6 != VAR14 ) {
if ( VAR3 != NULL ) {
FUN4( VAR3, VAR6, NULL, NULL );
}
return( -1 );
}
return( 0 );
}

if (VAR15 == VAR4)
{
*((int *) VAR5) = VAR16;
return ( 0 );
}


if ( VAR3 == NULL ) {
VAR3 = &VAR17;
}

if ( !FUN5( VAR3 )) {
return( -1 );	
}


if (VAR3 != &VAR17)
FUN6( VAR3, VAR18 );
switch( VAR4 ) {
case VAR19:
*((int *) VAR5) = FUN7( VAR3, VAR20 );
break;

case VAR21:
*((int *) VAR5) =
FUN7( VAR3, VAR22 );
break;

case VAR23:
*((int *) VAR5) = FUN7( VAR3, VAR24 );
break;
case VAR25:
*((int *) VAR5) = FUN7( VAR3, VAR26 );
break;

case VAR27:
*((int *) VAR5) =
FUN7( VAR3, VAR28 );
break;

case VAR29:
*((int *) VAR5) =
FUN7( VAR3, VAR30 );
break;


case VAR31:
*((VAR32 **) VAR5) = VAR3->VAR33;
break;
case VAR34:
if ( FUN8( VAR3->VAR33,
VAR35, VAR5 ) != 0 ) {
FUN4( VAR3, VAR36, NULL, NULL );
VAR6 = -1;
}
break;


case VAR37:
*((int *) VAR5) = VAR3->VAR38;
break;
case VAR39:
*((int *) VAR5) = VAR3->VAR40;
break;
case VAR41:
*((int *) VAR5) = VAR3->VAR42;
break;
case VAR43:
*((int *) VAR5) = VAR3->VAR44;
break;
case VAR45:
*((int *) VAR5) = VAR3->VAR46;
break;
case VAR47:

case VAR48:
*((VAR49 ***)VAR5) = NULL;

VAR6 = FUN9( VAR3, (VAR49 ***)VAR5,
( VAR4 == VAR47 ) ?
VAR3->VAR50 : VAR3->VAR51 );
break;


case VAR52:
*((VAR53 **) VAR5) = VAR3->VAR54;
break;
case VAR55:
*((void **) VAR5) = VAR3->VAR56;
break;


case VAR57:
if ( VAR3->VAR58 == NULL ) {
memset( VAR5, 0, sizeof( struct VAR59 ));
} else {

*((struct VAR59 *)VAR5) = *(VAR3->VAR58);
}
break;


case VAR60:
if ( ((struct VAR61 *) VAR5)->VAR62 == VAR63) {
((struct VAR64 *) VAR5)->VAR65 = VAR3->VAR66;
((struct VAR64 *) VAR5)->VAR67 = VAR3->VAR68;
((struct VAR64 *) VAR5)->VAR69 = VAR3->VAR70;
((struct VAR64 *) VAR5)->VAR71 = VAR3->VAR72;
((struct VAR64 *) VAR5)->VAR73 = VAR3->VAR74;
((struct VAR64 *) VAR5)->VAR75 = VAR3->VAR76;
((struct VAR64 *) VAR5)->VAR77 = VAR3->VAR78;
((struct VAR64 *) VAR5)->VAR79 = VAR3->VAR80;
} else if ( ((struct VAR61 *) VAR5)->VAR62 ==
VAR81 ) {

*((struct VAR61 *) VAR5) = VAR3->VAR82;
} else {
FUN4( VAR3, VAR8, NULL, NULL );
VAR6 = -1;
}
break;


case VAR83:

*((struct VAR84 *) VAR5) = VAR3->VAR85;
break;


case VAR86:

*((struct VAR87 *) VAR5) = VAR3->VAR88;
break;


case VAR89:

*((struct VAR90 *) VAR5) = VAR3->VAR91;
break;
case VAR92:
*((int *) VAR5) = VAR3->VAR93;
break;
case VAR94:
*((int *) VAR5) = VAR3->VAR95;
break;

case VAR96:
*((int *) VAR5) = FUN10( VAR3, NULL, NULL );
break;

case VAR97:
(void)FUN10( VAR3, NULL, (char **)VAR5 );
*((char **) VAR5) = FUN11( *((char **) VAR5 ));
break;

case VAR98:
(void)FUN10( VAR3, (char **)VAR5, NULL );
*((char **) VAR5) = FUN11( *((char **) VAR5 ));
break;

case VAR99:
if ( NULL != VAR3->VAR100 ) {
*((char **) VAR5) =
FUN11(VAR3->VAR100);
} else {
*((char **) VAR5) = NULL;
}
break;

case VAR101:
VAR6 = FUN12( (VAR102 *)VAR5 );
if ( VAR6 != VAR14 ) {
FUN4( VAR3, VAR6, NULL, NULL );
VAR6 = -1;
}
break;

case VAR103:
*((char **) VAR5) = FUN11( VAR3->VAR104 );
break;

case VAR105:
*((int *) VAR5) = VAR3->VAR106;
break;


case VAR107:
*((char **) VAR5) = FUN11(VAR3->VAR108);
break;
case VAR109:
*((char **) VAR5) = FUN11(VAR3->VAR110);
break;
case VAR111:
*((char **) VAR5) = FUN11(VAR3->VAR112);
break;
case VAR113:
*((char **) VAR5) = FUN11(VAR3->VAR114);
break;
case VAR115:
{
int VAR116;
VAR117      *VAR118;
VAR119     *VAR120;
if( VAR3->VAR121 == NULL ||
VAR3->VAR121->VAR122 == NULL ) {
return -1;
}
VAR120 = (VAR119 *)(VAR3->VAR121->VAR122->VAR123);
if ( VAR120 == NULL ) {
return -1;
}
VAR116 = FUN13( VAR120, VAR124, (const void **) &VAR118 );
if ( VAR116 != VAR125 ) {
return -1;
}
*((VAR117 *) VAR5) = *VAR118;
}
break;
case VAR126:
*((VAR117 *) VAR5) = VAR3->VAR127.VAR128;
break;
case VAR129:
*((VAR117 *) VAR5) = VAR3->VAR127.VAR130;
break;
case VAR131:
*((VAR117 *) VAR5) = VAR3->VAR127.VAR132;
break;
case VAR133:
case VAR134:

FUN4( VAR3, VAR8, NULL, NULL );
VAR6 = -1;
break;

default:
FUN4( VAR3, VAR8, NULL, NULL );
VAR6 = -1;
}
if (VAR3 != &VAR17)
FUN14( VAR3, VAR18  );
return( VAR6 );
}