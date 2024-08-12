FUN1 (const char *VAR1, int *argc, char *argv[], int VAR2)
{
char VAR3[VAR4]; 
char *VAR5, *VAR6;              
const char *VAR7;              
char VAR8;                    
enum states VAR9;          
enum err_codes VAR10;         
int VAR11;                  

VAR5 = &VAR3[0];
VAR6 = &VAR3[VAR4 - 1];
VAR7 = &VAR1[0];
VAR9 = VAR12;
VAR10 = VAR13;
VAR11 = 0;
VAR8 = VAR14; 

while ( VAR9 != VAR15 ) {
switch (VAR9) {
case VAR12:
while ( FUN2(*VAR7) ) VAR7++;
if ( *VAR7 == VAR14 || *VAR7 == VAR16 ) {
VAR8 = *VAR7; VAR7++; VAR9 = VAR17;
break;
}
if ( *VAR7 == VAR18 ) {
VAR9 = VAR15;
break;
}
if ( *VAR7 == VAR19 ) {
VAR7++;
if ( *VAR7 == VAR20 ) {
VAR7++;
break;
}
if ( *VAR7 == VAR18 ) {
VAR9 = VAR15; VAR10 = VAR21;
break;
}
}

FUN3(); VAR7++; VAR9 = VAR22;
break;
case VAR17:
while ( *VAR7 != VAR8 && ( *VAR7 != VAR19 || VAR8 == VAR14 ) && *VAR7 != VAR18 ) {
FUN3(); VAR7++;
}
if ( *VAR7 == VAR8 ) {
VAR7++; VAR9 = VAR22;
break;
}
if ( *VAR7 == VAR19 ) {
assert (VAR8 == VAR16);
VAR7++;
if ( *VAR7 == VAR20) {
VAR7++;
break;
}
if (*VAR7 == VAR18) {
VAR9 = VAR15; VAR10 = VAR21;
break;
}
if ( ! FUN4(*VAR7) ) {
VAR7--; FUN3(); VAR7++;
}
FUN3(); VAR7++;
break;
}
if ( *VAR7 == VAR18 ) {
VAR9 = VAR15; VAR10 = VAR23;
break;
}
assert(0);
case VAR22:
if ( *VAR7 == VAR14 || *VAR7 == VAR16 ) {
VAR8 = *VAR7; VAR7++; VAR9 = VAR17;
break;
}
if ( FUN2(*VAR7) || *VAR7 == VAR18 ) {
FUN5();
VAR9 = (*VAR7 == VAR18) ? VAR15 : VAR12;
VAR7++;
break;
}
if ( *VAR7 == VAR19 ) {
VAR7++;
if ( *VAR7 == VAR20 ) {
VAR7++;
break;
}
if ( *VAR7 == VAR18 ) {
VAR9 = VAR15; VAR10 = VAR21;
break;
}
}

FUN3(); VAR7++;
break;
default:
assert(0);
}
}

return ( VAR10 != VAR13 ) ? -1 : VAR11;
}