int main(int argc, char *argv[])
{            





int
VAR1,
VAR2; 

VAR3
*VAR4 = stdin,
*VAR5 = VAR6;

char
VAR7,
*VAR8 = "";

if( argc < 2 )
{
FUN1(VAR8);
return 1;
}

VAR2 = 0;



for (VAR1=1; VAR1<argc; VAR1++)
{
VAR7 = argv[VAR1][0];
if (VAR7 == '' || VAR7 == '')
{
VAR7 = argv[VAR1][1];
switch( VAR7 )
{
case '':
VAR2 = 1;

FUN2( FUN3( VAR5 ), VAR9 );
break;
case '':
VAR2 = 0;

FUN2( FUN3( VAR4 ), VAR9 );
break;
case '':
if (VAR2 == 0)
VAR4 = fopen(argv[++VAR1], "");
else
VAR4 = fopen(argv[++VAR1], "");
if (VAR4 == (VAR3 *)NULL)
{
FUN4("", argv[VAR1]);
return 1;
}
break;
case '':
if (VAR2 == 0)
VAR5 = fopen(argv[++VAR1], "");
else
VAR5 = fopen(argv[++VAR1], "");
if (VAR5 == (VAR3 *)NULL)
{
FUN4("", argv[VAR1]);
return 1;
}
break;
default:
FUN4("", argv[VAR1]);
return 1;
}
}
else
{
FUN1(VAR8);
return 1;
}
}

if (VAR2 == 0) 
FUN5(VAR4, VAR5);

if (VAR2 == 1) 
{
char
VAR10,
VAR11,
*VAR12,
*VAR13,
*VAR14;

int
VAR15,
VAR16;

unsigned char
VAR17 = 0,
VAR18 = 0;

int
VAR19 = VAR20;

VAR12 = (char *) malloc(VAR19);     
VAR13 = (char *)NULL;
while((VAR12 = FUN6(VAR12,&VAR19,VAR4))!=NULL)
{
VAR15=0;
VAR16=0;

VAR13 = (char *) malloc(VAR19);     
VAR14 = (char *) malloc(VAR19);     
while(FUN7(0, VAR13, VAR19, VAR12, "", "", """, 0,
&VAR10,&VAR16,&VAR11)==0)
{
if (VAR15 == 0)
{                  
int
VAR15,
VAR16;

char
VAR10,
VAR11;

VAR15=0;
VAR16=0;
while(FUN7(0, VAR14, VAR19, VAR13, "", "", "", 0,
&VAR10, &VAR16, &VAR11)==0)
{
if (VAR15 == 0)
VAR18 = (unsigned char) FUN8(VAR14);
else
if (VAR15 == 1)
VAR17 = (unsigned char) FUN8(VAR14);
VAR15++;
}
}
else
if (VAR15 == 1)
{
int
VAR16;

unsigned long
VAR21;

char
VAR10,
VAR11;

VAR16=0;
VAR21 = strlen(VAR13);
while(FUN7(0, VAR14, VAR19, VAR13, "", "", "", 0,
&VAR10, &VAR16, &VAR11)==0)
{
if (VAR10 && VAR16 > 0)
{
char
*VAR22 = &VAR13[VAR16-1];

VAR21 -= FUN9(VAR22, strlen(VAR22));
}
}

fputc(0x1c, VAR5);
fputc(VAR18, VAR5);
fputc(VAR17, VAR5);
if (VAR21 < 0x10000)
{
fputc((VAR21 >> 8) & 255, VAR5);
fputc(VAR21 & 255, VAR5);
}
else
{
fputc(((VAR21 >> 24) & 255) | 0x80, VAR5);
fputc((VAR21 >> 16) & 255, VAR5);
fputc((VAR21 >> 8) & 255, VAR5);
fputc(VAR21 & 255, VAR5);
}
VAR16=0;
while (VAR21--)
fputc(VAR13[VAR16++], VAR5);
}
VAR15++;
}
free(VAR13);
VAR13 = (char *)NULL;
free(VAR14);
VAR14 = (char *)NULL;
}
free(VAR12);

fclose( VAR4 );
fclose( VAR5 );
}

return 0;
}






int VAR23;	   
unsigned VAR24;  
char VAR25;  
int VAR26;	   



int FUN10(char VAR27,char *VAR28)
{
char *VAR29;
for(VAR29=VAR28;*VAR29;++VAR29)
if(VAR27==*VAR29)
return (int)(VAR29-VAR28);	
return -1;			
}