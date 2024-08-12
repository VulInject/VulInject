VAR1* FUN1( unsigned char* VAR2, unsigned int VAR3,
int VAR4)
{
unsigned char *VAR5;
VAR1    *VAR6 = NULL;
unsigned char VAR7;
unsigned int  VAR8;
VAR9       *VAR10;
unsigned int  VAR11;
unsigned char VAR12;
unsigned int  VAR13;
unsigned int  VAR14;
unsigned int  VAR15;


if( !VAR2 || !VAR3 || VAR3<VAR16) {
FUN2("");
goto VAR17;
}


VAR6 = 0;
VAR10 = 0;
VAR5 = VAR2;


VAR6 = (VAR1*)FUN3(sizeof(VAR1));
if (!VAR6) {
FUN2("");
goto VAR17;
}
memset(VAR6,0,sizeof(VAR1));


VAR7 = (unsigned char)*VAR5;
VAR5 += VAR18;
if (VAR7!=1) {
FUN2("",VAR7);
goto VAR17;
}


VAR8 = FUN4( VAR5 );
VAR5 += VAR19;
if (VAR8>VAR3) {
FUN2(""
"",VAR8,VAR3);
goto VAR17;
}


VAR6->VAR20 = *VAR5;
VAR5 += VAR21;


VAR6->VAR22 = FUN4( VAR5 );
VAR5 += VAR23;


VAR6->VAR24 = FUN5( VAR5 );
VAR5 += VAR25;


VAR6->VAR26 = *((unsigned int*)VAR5);
VAR5 += VAR27;


VAR6->VAR28 = *((unsigned int*)VAR5);
VAR5 += VAR29;


while (VAR5 < VAR2+VAR8) {
if (VAR5+FUN6(0x80)>VAR2+VAR8){
FUN2(""
"");
goto VAR17;
}

VAR11 = FUN5( VAR5 );
VAR5 += VAR30;

VAR12 = (unsigned char)*VAR5;
VAR5 += VAR31;

VAR13 = FUN4( VAR5 );
VAR5 += VAR32;
if (VAR13<1) {
FUN2("", VAR13);
goto VAR17;
}

VAR14 = 0;
if (VAR12&VAR33) {
VAR14 = FUN5( VAR5 );
VAR5 += VAR34;
}

VAR15 = VAR13-FUN6(VAR12);

if ( VAR2+VAR8<VAR5+VAR15) {
FUN2(""
"");
goto VAR17;
}


VAR10 = FUN7( VAR11, VAR12, VAR14, (char*)VAR5,
VAR15, VAR35);
if (!VAR10)
goto VAR17;


if(FUN8(VAR6, VAR10, VAR6->VAR36.VAR37)!=VAR38) {
FUN2("");
}

VAR5 += FUN9( VAR15 );
}


if (VAR4) {
VAR6->VAR39.VAR40 = (char*)VAR2;
VAR6->VAR39.VAR41 = VAR8;
}


return  VAR6;
VAR17:
FUN2("");
if (VAR6) {
FUN10(&VAR6);
}
return 0;
}