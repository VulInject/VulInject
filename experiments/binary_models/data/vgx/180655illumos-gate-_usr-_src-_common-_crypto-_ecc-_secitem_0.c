VAR1 *
FUN1(VAR2 *VAR3, VAR1 *VAR4, unsigned int VAR5,
int VAR6)
{
VAR1 *VAR7 = NULL;
void *VAR8 = NULL;

if (VAR3 != NULL) {
VAR8 = FUN2(VAR3);
}

if (VAR4 == NULL) {
if (VAR3 != NULL) {
VAR7 = FUN3(VAR3, sizeof(VAR1), VAR6);
} else {
VAR7 = FUN4(sizeof(VAR1), VAR6);
}
if (VAR7 == NULL) {
goto VAR9;
}
} else {
FUN5(VAR4->VAR10 == NULL);
VAR7 = VAR4;
}

VAR7->VAR5 = VAR5;
if (VAR5) {
if (VAR3 != NULL) {
VAR7->VAR10 = FUN6(VAR3, VAR5, VAR6);
} else {
VAR7->VAR10 = FUN7(VAR5, VAR6);
}
if (VAR7->VAR10 == NULL) {
goto VAR9;
}
} else {
VAR7->VAR10 = NULL;
}

if (VAR8) {
FUN8(VAR3, VAR8);
}
return(VAR7);

VAR9:
if ( VAR3 != NULL ) {
if (VAR8) {
FUN9(VAR3, VAR8);
}
if (VAR4 != NULL) {
VAR4->VAR10 = NULL;
VAR4->VAR5 = 0;
}
} else {
if (VAR7 != NULL) {
FUN10(VAR7, (VAR4 == NULL) ? VAR11 : VAR12);
}

}
return(NULL);
}