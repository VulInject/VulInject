static void FUN1() {
int32_t VAR1;
int32_t VAR2;
UErrorCode VAR3 = VAR4;
char *VAR5 = 0;
char *VAR6 = 0, *VAR7 = 0;
FUN2("");
for (VAR1 = 0; VAR1 < VAR8; VAR1++) {
VAR5=(char*)malloc(sizeof(char) * (strlen(VAR9[VAR10][VAR1])+1));
strcpy(VAR5,VAR9[VAR10][VAR1]);

FUN2("", VAR5);
VAR2=FUN3(VAR5, NULL, 0, &VAR3);
if(VAR3==VAR11){
VAR3=VAR4;
VAR6=(char*)malloc(sizeof(char) * (VAR2+1));
FUN3(VAR5, VAR6, VAR2+1, &VAR3);
}
if(FUN4(VAR3)){
FUN5("", FUN6(VAR3));
}
if (0 !=strcmp(VAR6,VAR9[VAR12][VAR1]))    {
FUN5("", VAR6, VAR9[VAR12][VAR1]);
}


VAR2=FUN7(VAR5, VAR6, VAR2, &VAR3);
if(VAR3==VAR11){
VAR3=VAR4;
VAR6=(char*)realloc(VAR6, sizeof(char) * (VAR2+1));
FUN7(VAR5, VAR6, VAR2+1, &VAR3);
}
if(FUN4(VAR3)){
FUN5("", FUN6(VAR3));
}
if (0 != strcmp(VAR6, VAR9[VAR13][VAR1])) {
FUN5("", VAR6, VAR9[VAR13][VAR1]);

}

VAR2=FUN8(VAR5, VAR6, VAR2, &VAR3);
if(VAR3==VAR11){
VAR3=VAR4;
VAR6=(char*)realloc(VAR6, sizeof(char) * (VAR2+1));
FUN8(VAR5, VAR6, VAR2+1, &VAR3);
}
if(FUN4(VAR3)){
FUN5("", FUN6(VAR3));
}
if (0 != strcmp(VAR6, VAR9[VAR14][VAR1])) {
FUN5("", VAR6, VAR9[VAR14][VAR1]);
}

VAR2=FUN9(VAR5, NULL, 0, &VAR3);
if(VAR3==VAR11){
VAR3=VAR4;
VAR7=(char*)malloc(sizeof(char) * (VAR2+1));
FUN9(VAR5, VAR7, VAR2+1, &VAR3);
} else if(VAR3==VAR4) {
FUN5("", VAR5);
}
if(FUN4(VAR3)){
FUN5("", FUN6(VAR3));
}
if (0 != strcmp(VAR7, VAR9[VAR10][VAR1])){
FUN5("", VAR7, VAR9[VAR10][VAR1]);
}

free(VAR6);
free(VAR7);

free(VAR5);
}
}