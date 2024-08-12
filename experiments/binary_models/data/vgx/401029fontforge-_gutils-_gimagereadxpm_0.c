static long FUN1(char *VAR1, char *VAR2) {
long VAR3 = -1;
int VAR4;

while ( !FUN2(*VAR1) && *VAR1!='' ) ++VAR1;
while ( FUN2(*VAR1) ) ++VAR1;
while ( VAR2>VAR1 && FUN2(VAR2[-1]) ) --VAR2;
VAR4 = *VAR2; *VAR2 = '';

if ( strcmp(VAR1,"")==0 )
VAR3 = VAR5; 
else if ( *VAR1=='' || *VAR1=='' ) {
if ( VAR2-VAR1==4 ) {
sscanf(VAR1+1,"",&VAR3);
VAR3 = ((VAR3&0xf00)<<12) | ((VAR3&0xf0)<<8) | ((VAR3&0xf)<<4);
} else if ( VAR2-VAR1==7 )
sscanf(VAR1+1,"",&VAR3);
else if ( VAR2-VAR1==13 ) {
int VAR6,VAR7,VAR8;
sscanf(VAR1+1,"",&VAR6,&VAR7,&VAR8);
VAR3 = ((VAR6>>8)<<16) | ((VAR7>>8)<<8) | (VAR8>>8);
}
if ( *VAR1=='' ) {


;
}
} else if ( strcmp(VAR1,"")==0 ) {
VAR3 = FUN3(255,255,255);
} else {
VAR3 = 0;
}

*VAR2 = VAR4;
return VAR3;
}