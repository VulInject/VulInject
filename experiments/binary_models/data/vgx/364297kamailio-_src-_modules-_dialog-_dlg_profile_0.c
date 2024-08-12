static struct VAR1* FUN1( VAR2 *VAR3, unsigned int VAR4,
unsigned int VAR5)
{
struct VAR1 *VAR6;
struct VAR1 *VAR7;
unsigned int VAR8;
unsigned int VAR9;

if ( VAR3->VAR10==NULL || VAR3->VAR8==0 || VAR4==0 ) {
FUN2("");
return NULL;
}

for( VAR8=0,VAR9=0 ; VAR9<8*sizeof(VAR4) ; VAR9++ ) {
if ( VAR4 & (1<<VAR9) ) VAR8++;
}
if (VAR8!=1) {
FUN2("", VAR4);
return NULL;
}

VAR6 = FUN3(VAR3);
if (VAR6!=NULL) {
FUN2("",
VAR3->VAR8, VAR3->VAR10);
return NULL;
}

VAR8 = sizeof(struct VAR1) +
VAR4*sizeof(struct VAR11) +
VAR3->VAR8 + 1;
VAR6 = (struct VAR1 *)FUN4(VAR8);
if (VAR6==NULL) {
FUN2("");
return NULL;
}

memset( VAR6 , 0 , VAR8);
VAR6->VAR4 = VAR4;
VAR6->VAR5 = (VAR5==0)?0:1;


if (FUN5( &VAR6->VAR12 )==NULL) {
FUN2("");
FUN6(VAR6);
return NULL;
}


VAR6->VAR13 = (struct VAR11*)(VAR6 + 1);
VAR6->VAR3.VAR10 = ((char*)VAR6->VAR13) +
VAR4*sizeof(struct VAR11);


memcpy( VAR6->VAR3.VAR10, VAR3->VAR10, VAR3->VAR8 );
VAR6->VAR3.VAR8 = VAR3->VAR8;
VAR6->VAR3.VAR10[VAR6->VAR3.VAR8] = 0;


for( VAR7=VAR14 ; VAR7 && VAR7->VAR15; VAR7=VAR7->VAR15 );
if (VAR7==NULL) {
VAR14 = VAR6;
FUN7(&VAR16, '', "", VAR17);
} else {
VAR7->VAR15 = VAR6;
}

return VAR6;
}