VAR1
FUN1(void *VAR2, kadm5_policy_ent_t VAR3, long VAR4)
{
kadm5_server_handle_t VAR5 = VAR2;
osa_policy_ent_rec  VAR6, *VAR7;
int                 VAR8;
char                *VAR9;

FUN2(VAR2);

FUN3(VAR5->VAR10);

if ((VAR3 == (VAR11) NULL) || (VAR3->VAR12 == NULL))
return VAR13;
if(strlen(VAR3->VAR12) == 0)
return VAR14;
if (!(VAR4 & VAR15) || (VAR4 & ~VAR16))
return VAR17;
if ((VAR4 & VAR18) &&
VAR3->VAR19 != NULL) {
VAR8 = FUN4(VAR3->VAR19);
if (VAR8)
return VAR8;
}

VAR8 = FUN5(VAR5->VAR10, VAR3->VAR12, &VAR7);
if (!VAR8) {
FUN6(VAR5->VAR10, VAR7);
return VAR20;
} else if (VAR8 != VAR21) {
return VAR8;
}

memset(&VAR6, 0, sizeof(VAR6));
VAR6.VAR22 = VAR3->VAR12;
VAR9 = VAR3->VAR12;
while(*VAR9 != '') {
if(*VAR9 < '' || *VAR9 > '')
return VAR14;
else
VAR9++;
}
if (!(VAR4 & VAR23))
VAR6.VAR24 = 0;
else
VAR6.VAR24 = VAR3->VAR24;
if (!(VAR4 & VAR25))
VAR6.VAR26 = 0;
else {
if((VAR4 & VAR23)) {
if(VAR3->VAR26 > VAR3->VAR24 && VAR3->VAR24 != 0)
return VAR27;
}
VAR6.VAR26 = VAR3->VAR26;
}
if (!(VAR4 & VAR28))
VAR6.VAR29 = VAR30;
else {
if(VAR3->VAR29 < VAR30)
return VAR31;
VAR6.VAR29 = VAR3->VAR29;
}
if (!(VAR4 & VAR32))
VAR6.VAR33 = VAR34;
else {
if(VAR3->VAR33 > VAR35 || VAR3->VAR33 < VAR34)
return VAR36;
VAR6.VAR33 = VAR3->VAR33;
}
if (!(VAR4 & VAR37))
VAR6.VAR38 = VAR39;
else {
if(VAR3->VAR38 < VAR39)
return VAR40;
else
VAR6.VAR38 = VAR3->VAR38;
}

if (VAR5->VAR41 >= VAR42) {
if (!(VAR4 & VAR43))
VAR6.VAR44 = 0;
else
VAR6.VAR44 = VAR3->VAR44;
if (!(VAR4 & VAR45))
VAR6.VAR46 = 0;
else
VAR6.VAR46 = VAR3->VAR46;
if (!(VAR4 & VAR47))
VAR6.VAR48 = 0;
else
VAR6.VAR48 = VAR3->VAR48;
if (!(VAR4 & VAR18))
VAR6.VAR19 = 0;
else
VAR6.VAR19 = VAR3->VAR19;
if (!(VAR4 & VAR49)) {
VAR6.VAR50 = 0;
VAR6.VAR51 = NULL;
} else {
VAR6.VAR50 = VAR3->VAR50;
VAR6.VAR51 = VAR3->VAR51;
}
}
if (VAR5->VAR41 >= VAR52) {
if (!(VAR4 & VAR53))
VAR6.VAR54 = 0;
else
VAR6.VAR54 = VAR3->VAR54;
if (!(VAR4 & VAR55))
VAR6.VAR56 = 0;
else
VAR6.VAR56 = VAR3->VAR56;
if (!(VAR4 & VAR57))
VAR6.VAR58 = 0;
else
VAR6.VAR58 = VAR3->VAR58;
}

if ((VAR8 = FUN7(VAR5->VAR10, &VAR6)))
return VAR8;
else
return VAR59;
}