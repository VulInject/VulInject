int FUN1(struct VAR1 *VAR2)
{
uint8_t VAR3;
ssize_t VAR4;
int VAR5 = 0;
enum mosquitto_client_state VAR6;

if(!VAR2){
return VAR7;
}
if(VAR2->VAR8 == VAR9){
return VAR10;
}

VAR6 = FUN2(VAR2);
if(VAR6 == VAR11){
return VAR12;
}


if(!VAR2->VAR13.VAR14){
VAR4 = FUN3(VAR2, &VAR3, 1);
if(VAR4 == 1){
VAR2->VAR13.VAR14 = VAR3;
FUN4(1);

if(!(VAR2->VAR15) && VAR6 == VAR16 && (VAR3&0xF0) != VAR17){
return VAR18;
}
}else{
if(VAR4 == 0){
return VAR19; 
}
VAR20 = FUN5();
if(VAR20 == VAR21 || VAR20 == VAR22){
return VAR12;
}else{
switch(VAR20){
case VAR23:
return VAR19;
case VAR24:
return VAR12;
default:
return VAR25;
}
}
}
}

if(VAR2->VAR13.VAR26 <= 0){
do{
VAR4 = FUN3(VAR2, &VAR3, 1);
if(VAR4 == 1){
VAR2->VAR13.VAR26--;

if(VAR2->VAR13.VAR26 < -4){
return VAR27;
}

FUN4(1);
VAR2->VAR13.VAR28 += (VAR3 & 127) * VAR2->VAR13.VAR29;
VAR2->VAR13.VAR29 *= 128;
}else{
if(VAR4 == 0){
return VAR19; 
}
VAR20 = FUN5();
if(VAR20 == VAR21 || VAR20 == VAR22){
return VAR12;
}else{
switch(VAR20){
case VAR23:
return VAR19;
case VAR24:
return VAR12;
default:
return VAR25;
}
}
}
}while((VAR3 & 128) != 0);

VAR2->VAR13.VAR26 = (VAR30)(VAR2->VAR13.VAR26 * -1);

switch(VAR2->VAR13.VAR14 & 0xF0){
case VAR17:
if(VAR2->VAR13.VAR28 > 100000){ 
return VAR27;
}
break;

case VAR31:
case VAR32:
case VAR33:
case VAR34:
case VAR35:
if(VAR2->VAR36 != VAR37 && VAR2->VAR13.VAR28 != 2){
return VAR27;
}
break;

case VAR38:
case VAR39:
if(VAR2->VAR13.VAR28 != 0){
return VAR27;
}
break;

case VAR40:
if(VAR2->VAR36 != VAR37 && VAR2->VAR13.VAR28 != 0){
return VAR27;
}
break;
}

if(VAR41.VAR42->VAR43 > 0 && VAR2->VAR13.VAR28+1 > VAR41.VAR42->VAR43){
if(VAR2->VAR36 == VAR37){
FUN6(VAR2, VAR44, NULL);
}
return VAR45;
}

if(VAR2->VAR13.VAR28 > 0){
VAR2->VAR13.VAR46 = FUN7(VAR2->VAR13.VAR28*sizeof(VAR47));
if(!VAR2->VAR13.VAR46){
return VAR48;
}
VAR2->VAR13.VAR49 = VAR2->VAR13.VAR28;
}
}
while(VAR2->VAR13.VAR49>0){
VAR4 = FUN3(VAR2, &(VAR2->VAR13.VAR46[VAR2->VAR13.VAR50]), VAR2->VAR13.VAR49);
if(VAR4 > 0){
FUN4(VAR4);
VAR2->VAR13.VAR49 -= (VAR51)VAR4;
VAR2->VAR13.VAR50 += (VAR51)VAR4;
}else{
VAR20 = FUN5();
if(VAR20 == VAR21 || VAR20 == VAR22){
if(VAR2->VAR13.VAR49 > 1000){

FUN8(VAR2);
pthread_mutex_lock(&VAR2->VAR52);
VAR2->VAR53 = FUN9();
pthread_mutex_unlock(&VAR2->VAR52);
}
return VAR12;
}else{
switch(VAR20){
case VAR23:
return VAR19;
case VAR24:
return VAR12;
default:
return VAR25;
}
}
}
}


VAR2->VAR13.VAR50 = 0;
FUN10(1);
if(((VAR2->VAR13.VAR14)&0xF0) == VAR54){
FUN11(1);
}
VAR5 = FUN12(VAR2);


FUN13(&VAR2->VAR13);

FUN8(VAR2);
pthread_mutex_lock(&VAR2->VAR52);
VAR2->VAR53 = FUN9();
pthread_mutex_unlock(&VAR2->VAR52);
return VAR5;
}