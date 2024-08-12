int FUN1(VAR1 *VAR2)
{

unsigned char VAR3[] = {0x55, 0xAA};
unsigned char VAR4[] = {'','','','','','','',''};

if( ! FUN2(VAR2, 0x1FE, VAR3, sizeof(VAR3)))
return 0;
if( ! FUN2(VAR2, 0x03, VAR4, sizeof(VAR4)))
return 0;
return 1;
}