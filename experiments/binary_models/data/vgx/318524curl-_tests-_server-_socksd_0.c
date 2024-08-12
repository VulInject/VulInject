static VAR1 FUN1(curl_socket_t VAR2,
unsigned short *VAR3
, const char *VAR4
)
{

srvr_sockaddr_union_t VAR5;
int VAR6;
int VAR7;
int VAR8 = 0;
int VAR9 = 10;
int VAR10 = 20;
int VAR11 = 0;
int VAR12 = 0;

do {
VAR11++;
VAR6 = 1;
VAR7 = FUN2(VAR2, VAR13, VAR14,
(void *)&VAR6, sizeof(VAR6));
if(VAR7) {
VAR12 = VAR15;
FUN3("",
VAR12, strerror(VAR12));
if(VAR9) {
VAR7 = FUN4(VAR10);
if(VAR7) {

VAR12 = VAR16;
FUN3("",
VAR12, strerror(VAR12));
FUN5(VAR2);
return VAR17;
}
if(VAR18) {
FUN3("");
FUN5(VAR2);
return VAR17;
}
VAR8 += VAR10;
VAR10 *= 2; 
}
}
} while(VAR7 && VAR9--);

if(VAR7) {
FUN3("",
VAR11, VAR8, VAR12, strerror(VAR12));
FUN3("");
}



switch(VAR19) {
case VAR20:
memset(&VAR5.VAR21, 0, sizeof(VAR5.VAR21));
VAR5.VAR21.VAR22 = VAR20;
VAR5.VAR21.VAR23.VAR24 = VAR25;
VAR5.VAR21.VAR26 = FUN6(*VAR3);
VAR7 = FUN7(VAR2, &VAR5.VAR27, sizeof(VAR5.VAR21));
break;
case VAR28:
memset(&VAR5.VAR29, 0, sizeof(VAR5.VAR29));
VAR5.VAR29.VAR30 = VAR28;
VAR5.VAR29.VAR31 = VAR32;
VAR5.VAR29.VAR33 = FUN6(*VAR3);
VAR7 = FUN7(VAR2, &VAR5.VAR27, sizeof(VAR5.VAR29));
break;
case VAR34:
VAR7 = FUN8(VAR2, VAR4, &VAR5.VAR35);
}

if(VAR7) {
VAR12 = VAR15;
FUN3("",
*VAR3, VAR12, strerror(VAR12));
FUN5(VAR2);
return VAR17;
}

if(!*VAR3
&& !VAR4
) {

curl_socklen_t VAR36;
srvr_sockaddr_union_t VAR37;
if(VAR19 == VAR28)
VAR36 = sizeof(VAR37.VAR29);
else
VAR36 = sizeof(VAR37.VAR21);
memset(&VAR37.VAR27, 0, (VAR38)VAR36);
if(FUN9(VAR2, &VAR37.VAR27, &VAR36) < 0) {
VAR12 = VAR15;
FUN3("",
VAR12, strerror(VAR12));
FUN5(VAR2);
return VAR17;
}
switch(VAR37.VAR27.VAR39) {
case VAR20:
*VAR3 = FUN10(VAR37.VAR21.VAR26);
break;
case VAR28:
*VAR3 = FUN10(VAR37.VAR29.VAR33);
break;
default:
break;
}
if(!*VAR3) {

FUN3("");
FUN3("");
FUN3("");
FUN3("");
FUN5(VAR2);
return VAR17;
}
}


VAR7 = FUN11(VAR2, 5);
if(0 != VAR7) {
VAR12 = VAR15;
FUN3("",
VAR2, VAR12, strerror(VAR12));
FUN5(VAR2);
return VAR17;
}

return VAR2;
}