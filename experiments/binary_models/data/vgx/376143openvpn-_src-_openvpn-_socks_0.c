void
FUN1(struct VAR1 *VAR2,
socket_descriptor_t VAR3,  
const char *VAR4,        
const char *VAR5,    
struct VAR6 *VAR7)
{
char VAR8[270];
size_t VAR9;

if (!FUN2(VAR2, VAR3, &VAR7->VAR10))
{
goto VAR11;
}


VAR8[0] = '';            
VAR8[1] = '';            
VAR8[2] = '';            
VAR8[3] = '';            

VAR9 = strlen(VAR4);
VAR9 = (5 + VAR9 + 2 > sizeof(VAR8)) ? (sizeof(VAR8) - 5 - 2) : VAR9;

VAR8[4] = (char) VAR9;
memcpy(VAR8 + 5, VAR4, VAR9);

int VAR12 = FUN3(VAR5);
if (VAR12 ==0)
{
FUN4(VAR13, "", VAR5);
goto VAR11;
}

VAR8[5 + VAR9] = (char) (VAR12 >> 8);
VAR8[5 + VAR9 + 1] = (char) (VAR12 & 0xff);

{
const ssize_t VAR14 = send(VAR3, VAR8, 5 + VAR9 + 2, VAR15);
if ((int)VAR14 != 5 + (int)VAR9 + 2)
{
FUN4(VAR13 | VAR16, "");
goto VAR11;
}
}



if (!FUN5(VAR3, NULL, &VAR7->VAR10))
{
goto VAR11;
}

return;

VAR11:

FUN6(VAR7, VAR17, "");
return;
}