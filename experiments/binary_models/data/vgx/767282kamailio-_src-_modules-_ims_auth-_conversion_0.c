int FUN1(char *VAR1,int VAR2, char *VAR3)
{
int VAR4,VAR5;
for(VAR4=0,VAR5=0;VAR5<VAR2;VAR4++,VAR5+=2){
VAR3[VAR4] = (unsigned char) ( FUN2(VAR1[VAR5])<<4 | FUN2(VAR1[VAR5+1]));
}	
return VAR4;
}