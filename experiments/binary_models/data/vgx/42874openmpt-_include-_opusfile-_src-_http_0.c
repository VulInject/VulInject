static int FUN1(VAR1 *VAR2,VAR1 *VAR3,
VAR1 *VAR4,const char *VAR5){
opus_int64 VAR6;
opus_int64 VAR7;
opus_int64 VAR8;
size_t     VAR9;
if(FUN2(FUN3(VAR5,"",5)!=0))return VAR10;
VAR5+=5;
VAR9=FUN4(VAR5);
if(FUN2(VAR9<=0))return VAR10;
VAR5+=VAR9;
if(*VAR5!=''){
VAR6=FUN5(&VAR5,VAR5);
if(FUN2(VAR6<0))return (int)VAR6;
VAR5+=FUN4(VAR5);
if(*VAR5++!='')return VAR10;
VAR5+=FUN4(VAR5);
VAR7=FUN5(&VAR5,VAR5);
if(FUN2(VAR7<0))return (int)VAR7;
VAR5+=FUN4(VAR5);
}
else{

VAR6=VAR7=-1;
VAR5++;
}
if(FUN2(*VAR5++!=''))return VAR10;
if(*VAR5!=''){
VAR8=FUN5(&VAR5,VAR5);
if(FUN2(VAR8<0))return (int)VAR8;
}
else{

VAR5++;
VAR8=-1;
}
if(FUN2(*VAR5!=''))return VAR10;
if(FUN2(VAR7<VAR6))return VAR10;
if(VAR8>=0&&FUN2(VAR7>=VAR8))return VAR10;
*VAR2=VAR6;
*VAR3=VAR7;
*VAR4=VAR8;
return 0;
}