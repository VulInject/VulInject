static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR1 *VAR5, const VAR1 *VAR6) {
FUN2(VAR4);
FUN3(VAR2, VAR4, VAR5);
FUN4(VAR2);

for (const char *VAR7; (VAR7 = VAR6->VAR7); ++VAR6) {
if (*VAR7 == '') {
const VAR8 *VAR9;

if (*(VAR7+1) == '') {

FUN5(VAR2, '');
} else if (*(VAR7+1) == '' ) {

char *VAR10 = strchr(VAR5->VAR7, '');

if(VAR10 == NULL) {
FUN6(VAR2, VAR5); 
} else {

FUN7(VAR2, VAR5->VAR7, VAR10 - VAR5->VAR7); 
}
} else if (VAR7[1] == '' ) {
char VAR11[3] = "";
VAR11[1] = VAR7[2]; 
if (NULL != (VAR9 = (VAR8 *)FUN8(VAR4, VAR11, 2))) {
if (VAR7[3] != '' || VAR7[4] == '') {
FUN6(VAR2, &VAR9->VAR12);
} else {
if ((VAR13)(VAR7[4]-'') <= FUN9(&VAR9->VAR12)) {
FUN5(VAR2, VAR9->VAR12.VAR7[(VAR7[4]-'')-1]);
}
}
} else {

}
} else if (NULL != (VAR9 = (VAR8 *)FUN8(VAR4, FUN10(VAR6)))) {
FUN6(VAR2, &VAR9->VAR12);
} else {

}
} else {
FUN6(VAR2, VAR6);
}
}

FUN11(VAR2);
}