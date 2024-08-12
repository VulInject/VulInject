static int FUN1(unsigned char *VAR1)
{
IDEA_KEY_SCHEDULE VAR2,VAR3;
int VAR4=0,VAR5,VAR6;

FUN2(VAR7,&VAR2);
FUN3(&VAR2,&VAR3);
memcpy(VAR8,VAR9,8);
VAR6=0;
FUN4(VAR10,VAR11,(long)12,&VAR2,
VAR8,&VAR6,VAR12);
FUN4(&(VAR10[12]),&(VAR11[12]),
(long)VAR13-12,&VAR2,
VAR8,&VAR6,VAR12);
if (memcmp(VAR1,VAR11,VAR13) != 0)
{
VAR4=1;
FUN5("");
for (VAR5=0; VAR5<VAR13; VAR5+=8)
FUN5("",FUN6(&(VAR11[VAR5])));
}
memcpy(VAR8,VAR9,8);
VAR6=0;
FUN4(VAR11,VAR14,(long)17,&VAR2,
VAR8,&VAR6,VAR15);
FUN4(&(VAR11[17]),&(VAR14[17]),
(long)VAR13-17,&VAR3,
VAR8,&VAR6,VAR15);
if (memcmp(VAR10,VAR14,VAR13) != 0)
{
VAR4=1;
FUN5("");
for (VAR5=0; VAR5<24; VAR5+=8)
FUN5("",FUN6(&(VAR14[VAR5])));
}
return(VAR4);
}

static char *FUN6(unsigned char *VAR16)
{
static char VAR17[10][20];
static int VAR18=0;
char *VAR19;
int VAR5;
static char *VAR20="";

VAR19= &(VAR17[VAR18++][0]);
VAR18%=10;
for (VAR5=0; VAR5<8; VAR5++)
{
VAR19[VAR5*2]=VAR20[(VAR16[VAR5]>>4)&0xf];
VAR19[VAR5*2+1]=VAR20[VAR16[VAR5]&0xf];
}
VAR19[16]='';
return(VAR19);
}