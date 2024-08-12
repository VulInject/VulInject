char **
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
char **VAR5 = NULL;

if ( NULL == VAR4 )
return VAR5;

if ( NULL == VAR2 ) {
*VAR4 = 0;
return VAR5;
}

if ( NULL == VAR2->VAR5 ) {
VAR6 *VAR7 = NULL;

if ( VAR2->VAR8 == VAR9 ) {
size_t VAR10 = 0;
size_t VAR11 = VAR2->VAR12;
if ( VAR2->VAR13 == 0 ) {
*VAR4 = 0;
return VAR5;
}
VAR2->VAR5 = (char **)calloc(VAR2->VAR13, sizeof(char *));
if ( NULL == VAR2->VAR5 ) {
*VAR4 = 0;
FUN2("");
return VAR5;
}
VAR2->VAR12 = 0;
while ( VAR2->VAR12 < VAR2->VAR13 ) {
VAR7 = FUN3(VAR2);
if ( NULL != VAR7 ) {
if ( NULL != VAR7->VAR14 ) {
VAR2->VAR5[VAR10++] = strdup(VAR7->VAR14);
}
FUN4(VAR7);
} else {
FUN2("");
break;
}
}
VAR2->VAR12 = VAR11;
*VAR4 = VAR10;
} else {
mat_off_t VAR11 = FUN5((VAR15 *)VAR2->VAR16);
if ( VAR11 == -1L ) {
*VAR4 = 0;
FUN2("");
return VAR5;
}
(void)FUN6((VAR15 *)VAR2->VAR16, VAR2->VAR17, VAR18);
VAR2->VAR13 = 0;
do {
VAR7 = FUN3(VAR2);
if ( NULL != VAR7 ) {
if ( NULL != VAR7->VAR14 ) {
if ( NULL == VAR2->VAR5 ) {
VAR5 = (char **)malloc(sizeof(char *));
} else {
VAR5 = (char **)realloc(VAR2->VAR5,
(VAR2->VAR13 + 1) * (sizeof(char *)));
}
if ( NULL != VAR5 ) {
VAR2->VAR5 = VAR5;
VAR2->VAR5[VAR2->VAR13++] = strdup(VAR7->VAR14);
} else {
FUN2("");
break;
}
}
FUN4(VAR7);
} else if ( !FUN7((VAR15 *)VAR2->VAR16, NULL) ) {
FUN2("");
break;
}
} while ( !FUN7((VAR15 *)VAR2->VAR16, NULL) );
(void)FUN6((VAR15 *)VAR2->VAR16, VAR11, VAR18);
*VAR4 = VAR2->VAR13;
}
} else {
if ( VAR2->VAR8 == VAR9 ) {
*VAR4 = 0;
while ( *VAR4 < VAR2->VAR13 && NULL != VAR2->VAR5[*VAR4] ) {
(*VAR4)++;
}
} else {
*VAR4 = VAR2->VAR13;
}
}
VAR5 = VAR2->VAR5;
return VAR5;
}