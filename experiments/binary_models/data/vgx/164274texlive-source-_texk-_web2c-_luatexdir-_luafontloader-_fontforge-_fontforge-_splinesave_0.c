struct VAR1 *FUN1(VAR2 *VAR3,struct VAR4 *VAR5,
int VAR6, struct VAR1 **VAR7, int VAR8) {
struct VAR1 *VAR9, *VAR10;
int VAR11, VAR12, VAR13, VAR14, VAR15, VAR16;
int *VAR17;
VAR18 *VAR19;
VAR2 *VAR20 = NULL;



GlyphInfo VAR21;
SplineChar VAR22;

VAR15 = 0;
for ( VAR11=0; VAR11<VAR3->VAR23; ++VAR11 ) {
if ( VAR15<VAR3->VAR24[VAR11]->VAR25 )
VAR15 = VAR3->VAR24[VAR11]->VAR25;
FUN2(VAR3->VAR24[VAR11],VAR8);
}
VAR13 = 1;			
for ( VAR14 = 1; VAR14<VAR15; ++VAR14 ) {
for ( VAR11=0; VAR11<VAR3->VAR23; ++VAR11 ) {
VAR20 = VAR3->VAR24[VAR11];
if ( VAR14<VAR20->VAR25 && (VAR19=VAR20->VAR26[VAR14])!=NULL ) {
VAR19->VAR27 = -1;
VAR19->VAR28 = 0x7fff;
if ( FUN3(VAR19))
++VAR13;
break;
}
}
}

memset(&VAR21,0,sizeof(VAR21));
memset(&VAR21.VAR29,-1,sizeof(VAR21.VAR29));
VAR21.VAR30 = 1;
VAR21.VAR20 = VAR20;
VAR21.VAR25 = VAR13;
VAR21.VAR31 = NULL;
VAR21.VAR32 = FUN4(VAR13,sizeof(struct VAR33));
VAR21.VAR34 = 3*VAR13;
VAR21.VAR35 = FUN5(VAR21.VAR34*sizeof(struct VAR36));
VAR21.VAR8 = VAR8;

for ( VAR14 = VAR13 = 0; VAR14<VAR15; ++VAR14 ) {
VAR20 = NULL;
for ( VAR11=0; VAR11<VAR3->VAR23; ++VAR11 ) {
VAR20 = VAR3->VAR24[VAR11];
if ( VAR14<VAR20->VAR25 && FUN3(VAR20->VAR26[VAR14]) )
break;
}
if ( VAR14!=0 && VAR11==VAR3->VAR23 ) {
VAR19=NULL;
} else if ( VAR11==VAR3->VAR23 ) {

VAR19 = &VAR22;

memset(VAR19,0,sizeof(VAR22));
VAR22.VAR37 = "";
VAR22.VAR38 = VAR20;
VAR22.VAR39 = VAR8+1;
VAR22.VAR40 = FUN4(VAR8+1,sizeof(VAR41));
VAR22.VAR42 = FUN6(VAR20);
if ( VAR22.VAR42==-1 )
VAR22.VAR42 = (VAR20->VAR43+VAR20->VAR44);
FUN7(VAR20,&VAR22,VAR8);
VAR21.VAR32[VAR13].VAR19 = VAR19;
VAR21.VAR32[VAR13].VAR16 = VAR11 = VAR3->VAR23-1;
} else if ( VAR20->VAR26[VAR14]->VAR45 ) {
VAR19=NULL;	;
} else {
VAR21.VAR32[VAR13].VAR19 = VAR19 = VAR20->VAR26[VAR14];
VAR21.VAR32[VAR13].VAR16 = VAR11;
}
if ( VAR19!=NULL ) {
VAR19->VAR28 = 0x7fff;
VAR21.VAR46 = &VAR21.VAR32[VAR13];
VAR19->VAR27 = VAR13++;
FUN8(VAR19,NULL,VAR5[VAR11].VAR47,VAR5[VAR11].VAR48,NULL,VAR6,&VAR21);
}
FUN9();
}

VAR17 = FUN4( VAR3->VAR23+1,sizeof(int));
for ( VAR11=0; VAR11<VAR21.VAR49; ++VAR11 ) {
VAR21.VAR35[VAR11].VAR50 = -1;
if ( VAR21.VAR35[VAR11].VAR13*VAR21.VAR35[VAR11].VAR51>(VAR21.VAR35[VAR11].VAR13*4)+VAR21.VAR35[VAR11].VAR51+1 )
VAR21.VAR35[VAR11].VAR50 = VAR17[VAR21.VAR35[VAR11].VAR16+1]++;
}

VAR10 = FUN4(1,sizeof(struct VAR1));
VAR10->VAR13 = VAR17[0];
VAR10->VAR52 = VAR17[0];
VAR10->VAR53 = FUN5(VAR17[0]*sizeof(int));
VAR10->VAR54 = FUN5(VAR17[0]*sizeof(unsigned char *));
VAR10->VAR55 = VAR17[0]<1240 ? 107 :
VAR17[0]<33900 ? 1131 : 32768;
for ( VAR16=0; VAR16<VAR3->VAR23; ++VAR16 ) {
VAR5[VAR16].VAR56 = FUN4(1,sizeof(struct VAR1));
VAR5[VAR16].VAR56->VAR13 = VAR17[VAR16+1];
VAR5[VAR16].VAR56->VAR52 = VAR17[VAR16+1];
VAR5[VAR16].VAR56->VAR53 = FUN5(VAR17[VAR16+1]*sizeof(int));
VAR5[VAR16].VAR56->VAR54 = FUN5(VAR17[VAR16+1]*sizeof(unsigned char *));
VAR5[VAR16].VAR56->VAR55 = VAR17[VAR16+1]<1240 ? 107 :
VAR17[VAR16+1]<33900 ? 1131 : 32768;
}
free( VAR17);

for ( VAR11=0; VAR11<VAR21.VAR49; ++VAR11 ) {
if ( VAR21.VAR35[VAR11].VAR50 != -1 ) {
struct VAR1 *VAR56 = VAR21.VAR35[VAR11].VAR16==-1 ? VAR10 : VAR5[VAR21.VAR35[VAR11].VAR16].VAR56;
int VAR57 = VAR21.VAR35[VAR11].VAR50;
VAR56->VAR53[VAR57] = VAR21.VAR35[VAR11].VAR51+1;
VAR56->VAR54[VAR57] = FUN5(VAR56->VAR53[VAR57]);
memcpy(VAR56->VAR54[VAR57],VAR21.VAR35[VAR11].VAR58,VAR21.VAR35[VAR11].VAR51);
VAR56->VAR54[VAR57][VAR21.VAR35[VAR11].VAR51] = 11;	
}
}


VAR9 = FUN4(1,sizeof(struct VAR1));
VAR9->VAR13 = VAR13;
VAR9->VAR52 = VAR13;
VAR9->VAR53 = FUN5(VAR13*sizeof(int));
VAR9->VAR54 = FUN5(VAR13*sizeof(unsigned char *));
VAR9->VAR59 = FUN5(VAR13*sizeof(char *));
for ( VAR11=0; VAR11<VAR13; ++VAR11 ) {
int VAR51=0;
struct VAR33 *VAR32 = &VAR21.VAR32[VAR11];
VAR9->VAR59[VAR11] = copy(VAR32->VAR19->VAR37);
for ( VAR12=0; VAR12<VAR32->VAR60; ++VAR12 ) {
VAR51 += VAR32->VAR61[VAR12].VAR62;
if ( VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR50==-1 )
VAR51 += VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR51;
else {
struct VAR1 *VAR56 = VAR21.VAR35[VAR32->VAR61[VAR12].VAR63].VAR16==-1 ? VAR10 : VAR5[VAR21.VAR35[VAR32->VAR61[VAR12].VAR63].VAR16].VAR56;
int VAR64 = VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR50 - VAR56->VAR55;

if ( VAR64>=-107 && VAR64<=107 )
++VAR51;
else if ( VAR64>=-1131 && VAR64<=1131 )
VAR51 += 2;
else if ( VAR64>=-32768 && VAR64<=32767 )
VAR51 += 3;
else
VAR51 += 8;

++VAR51;
}
}
VAR9->VAR53[VAR11] = VAR51+1;
VAR9->VAR54[VAR11] = FUN5(VAR51+2); 

VAR51 = 0;
for ( VAR12=0; VAR12<VAR32->VAR60; ++VAR12 ) {
memcpy(VAR9->VAR54[VAR11]+VAR51,VAR32->VAR61[VAR12].VAR58,VAR32->VAR61[VAR12].VAR62);
VAR51 += VAR32->VAR61[VAR12].VAR62;
if ( VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR50==-1 ) {
memcpy(VAR9->VAR54[VAR11]+VAR51,VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR58,
VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR51);
VAR51 += VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR51;
} else {
struct VAR1 *VAR56 = VAR21.VAR35[VAR32->VAR61[VAR12].VAR63].VAR16==-1 ? VAR10 : VAR5[VAR21.VAR35[VAR32->VAR61[VAR12].VAR63].VAR16].VAR56;
int VAR64 = VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR50 - VAR56->VAR55;

if ( VAR64>=-107 && VAR64<=107 )
VAR9->VAR54[VAR11][VAR51++] = VAR64+139;
else if ( VAR64>0 && VAR64<=1131 ) {
VAR64-=108;
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>8)+247;
VAR9->VAR54[VAR11][VAR51++] = VAR64&0xff;
} else if ( VAR64>=-1131 && VAR64<0 ) {
VAR64=(-VAR64)-108;
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>8)+251;
VAR9->VAR54[VAR11][VAR51++] = VAR64&0xff;
} else if ( VAR64>=-32768 && VAR64<=32767 ) {
VAR9->VAR54[VAR11][VAR51++] = 28;
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>8)&0xff;
VAR9->VAR54[VAR11][VAR51++] = VAR64&0xff;
} else {

VAR64 *= (65536/64);
VAR9->VAR54[VAR11][VAR51++] = '';
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>24)&0xff;
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>16)&0xff;
VAR9->VAR54[VAR11][VAR51++] = (VAR64>>8)&0xff;
VAR9->VAR54[VAR11][VAR51++] = VAR64&0xff;
VAR9->VAR54[VAR11][VAR51++] = 64 + 139;
VAR9->VAR54[VAR11][VAR51++] = 0xc; VAR9->VAR54[VAR11][VAR51++] = 0x18;	
}

if ( VAR21.VAR35[ VAR32->VAR61[VAR12].VAR63 ].VAR16==-1 ) {
VAR9->VAR54[VAR11][VAR51++] = 29;
} else
VAR9->VAR54[VAR11][VAR51++] = 10;
}
}
VAR9->VAR54[VAR11][VAR51++] = 14;	
VAR9->VAR54[VAR11][VAR51] = '';
}
FUN10(&VAR21,&VAR22);
*VAR7 = VAR10;
return( VAR9 );
}