int main(int argc, char *argv[])
{
int VAR1,VAR2=0;
IDEA_KEY_SCHEDULE VAR3,VAR4; 
unsigned char VAR5[8];

FUN1(VAR6,&VAR3);
FUN2(VAR7,VAR8,&VAR3);
if (memcmp(VAR8,VAR9,8) != 0)
{
FUN3("");
FUN3("");
for (VAR1=0; VAR1<8; VAR1++)
FUN3("",VAR8[VAR1]);
FUN3("");
FUN3("");
for (VAR1=0; VAR1<8; VAR1++)
FUN3("",VAR9[VAR1]);
VAR2=20;
FUN3("");
}

FUN4(&VAR3,&VAR4);
FUN2(VAR9,VAR8,&VAR4);
if (memcmp(VAR8,VAR7,8) != 0)
{
FUN3("");
FUN3("");
for (VAR1=0; VAR1<8; VAR1++)
FUN3("",VAR8[VAR1]);
FUN3("");
FUN3("");
for (VAR1=0; VAR1<8; VAR1++)
FUN3("",VAR7[VAR1]);
FUN3("");
VAR2=3;
}

if (VAR2 == 0) FUN3("");

memcpy(VAR5,VAR6,8);
FUN5((unsigned char *)VAR10,VAR8,strlen(VAR10)+1,&VAR3,VAR5,1);
memcpy(VAR5,VAR6,8);
FUN5(VAR8,VAR8,8,&VAR4,VAR5,0);
FUN5(&(VAR8[8]),&(VAR8[8]),strlen(VAR10)+1-8,&VAR4,VAR5,0);
if (memcmp(VAR10,VAR8,strlen(VAR10)+1) != 0)
{
FUN3("");
VAR2=4;
}
else
FUN3("");

FUN3("");
if (FUN6(VAR11))
{
FUN3("");
VAR2=5;
}
else
FUN3("");

FUN7(VAR2);
}

static int FUN6(unsigned char *VAR12)
{
IDEA_KEY_SCHEDULE VAR13,VAR14;
int VAR2=0,VAR1,VAR15;

FUN1(VAR16,&VAR13);
FUN4(&VAR13,&VAR14);
memcpy(VAR17,VAR18,8);
VAR15=0;
FUN8(VAR19,VAR20,(long)12,&VAR13,
VAR17,&VAR15,VAR21);
FUN8(&(VAR19[12]),&(VAR20[12]),
(long)VAR22-12,&VAR13,
VAR17,&VAR15,VAR21);
if (memcmp(VAR12,VAR20,VAR22) != 0)
{
VAR2=1;
FUN3("");
for (VAR1=0; VAR1<VAR22; VAR1+=8)
FUN3("",FUN9(&(VAR20[VAR1])));
}
memcpy(VAR17,VAR18,8);
VAR15=0;
FUN8(VAR20,VAR23,(long)17,&VAR13,
VAR17,&VAR15,VAR24);
FUN8(&(VAR20[17]),&(VAR23[17]),
(long)VAR22-17,&VAR14,
VAR17,&VAR15,VAR24);
if (memcmp(VAR19,VAR23,VAR22) != 0)
{
VAR2=1;
FUN3("");
for (VAR1=0; VAR1<24; VAR1+=8)
FUN3("",FUN9(&(VAR23[VAR1])));
}
return(VAR2);
}

static char *FUN9(unsigned char *VAR25)
{
static char VAR26[10][20];
static int VAR27=0;
char *VAR28;
int VAR1;
static char *VAR29="";

VAR28= &(VAR26[VAR27++][0]);
VAR27%=10;
for (VAR1=0; VAR1<8; VAR1++)
{
VAR28[VAR1*2]=VAR29[(VAR25[VAR1]>>4)&0xf];
VAR28[VAR1*2+1]=VAR29[VAR25[VAR1]&0xf];
}
VAR28[16]='';
return(VAR28);
}