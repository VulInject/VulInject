static VAR1 FUN1(MagickCLEnv VAR2,
MagickOpenCLEnvParam VAR3,const char *VAR4,VAR5 *VAR6)
{
char
*VAR7;

VAR1
VAR8;

VAR8=FUN2(VAR2,VAR3,sizeof(VAR7),&VAR7,VAR6);
if (VAR8 != VAR9)
{
VAR8=strcmp(VAR4,VAR7) == 0 ? VAR10 : VAR9;
FUN3(VAR7);
}
return(VAR8);
}