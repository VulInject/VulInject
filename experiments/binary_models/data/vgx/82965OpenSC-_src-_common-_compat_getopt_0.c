int FUN1(int argc, char * argv[], const char *VAR1)
{
static int VAR2=0;
const char *VAR3;
char VAR4, VAR5;
int VAR6 = 0, VAR7 = -1;

if(getenv("")) VAR5 = VAR4 = '';
else {
if((VAR5 = *VAR1) == '') VAR6 ++;
if(((VAR4 = VAR1[VAR6]) == '') || (VAR4 == '')) {
VAR6++;
if((VAR5 != '') && ((VAR5 = VAR1[VAR6]) == ''))
VAR6 ++;
}
}
VAR8 = 0;
if(VAR2) {
VAR9 = argv[VAR10][VAR2];
for(VAR3=VAR1+VAR6; *VAR3; VAR3++) if(VAR9 == *VAR3) {
VAR2++;
if((*(++VAR3) == '') || ((VAR9 == '') && (*VAR3 == ''))) {
if(argv[VAR10][VAR2]) {
VAR8 = &(argv[VAR10++][VAR2]);
VAR2 = 0;
} else if(*(++VAR3) != '') {
VAR2 = 0;
if(++VAR10 >= argc) {
if(VAR11) fprintf(VAR12,
"",
argv[0], VAR9);
VAR7 = (VAR5 == '') ? '' : '';
goto VAR13;
}
VAR8 = argv[VAR10++];
}
}
VAR7 = VAR9;
goto VAR13;
}
if(VAR11) fprintf(VAR12,
"",
argv[0], VAR9);
VAR7 = '';
if(argv[VAR10][++VAR2] == '') {
VAR10++;
VAR2 = 0;
}
VAR13:
if(VAR2 && ! argv[VAR10][VAR2]) {
VAR10++;
VAR2 = 0;
}
} else if((VAR10 >= argc) ||
((argv[VAR10][0] == '') &&
(argv[VAR10][1] == '') &&
(argv[VAR10][2] == ''))) {
VAR10++;
VAR7 = -1;
} else if((argv[VAR10][0] != '') ||
(argv[VAR10][1] == '')) {
char *VAR14;
int VAR15, VAR16, VAR17;

if(VAR4 == '') VAR7 = -1;
else if(VAR4 == '') {
VAR8 = argv[VAR10++];
VAR2 = 0;
VAR7 = 1;
} else {
for(VAR15=VAR16=VAR10; VAR15<argc; VAR15++) if((argv[VAR15][0] == '') &&
(argv[VAR15][1] != '')) {
VAR10=VAR15;
VAR7=FUN1(argc, argv, VAR1);
while(VAR15 > VAR16) {
VAR14=argv[--VAR15];
for(VAR17=VAR15; VAR17+1<VAR10; VAR17++) argv[VAR17]=argv[VAR17+1];
argv[--VAR10]=VAR14;
}
break;
}
if(VAR15 == argc) VAR7 = -1;
}
} else {
VAR2++;
VAR7 = FUN1(argc, argv, VAR1);
}
if (VAR10 > argc) VAR10 = argc;
return VAR7;
}