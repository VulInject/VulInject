static VAR1 FUN1(VAR2 *VAR3)
{
CFDataRef VAR4;
VAR5 *VAR6;
PutByteContext VAR7;
int VAR8 = 3 + 5 + 13 + 5 + VAR3->VAR9 + 3;

int VAR10 = 13 + 5 + VAR3->VAR9;
int VAR11;

if (!(VAR6 = FUN2(VAR8 + VAR12)))
return NULL;

FUN3(&VAR7, VAR6, VAR8 + VAR12);
FUN4(&VAR7, 0);        
FUN5(&VAR7, 0);         


FUN4(&VAR7, 0x03);     
FUN6(&VAR7, VAR8);
FUN7(&VAR7, 0);         
FUN4(&VAR7, 0);        


FUN4(&VAR7, 0x04);     
FUN6(&VAR7, VAR10);
FUN4(&VAR7, 32);       
FUN4(&VAR7, 0x11);     
FUN5(&VAR7, 0);         
FUN8(&VAR7, 0);         
FUN8(&VAR7, 0);         


FUN4(&VAR7, 0x05);     

FUN6(&VAR7, VAR3->VAR9);

FUN9(&VAR7, VAR3->VAR13, VAR3->VAR9);


FUN4(&VAR7, 0x06);     
FUN4(&VAR7, 0x01);     
FUN4(&VAR7, 0x02);     

VAR11 = FUN10(&VAR7);

VAR4 = FUN11(VAR14, VAR6, VAR11);

FUN12(&VAR6);
return VAR4;
}