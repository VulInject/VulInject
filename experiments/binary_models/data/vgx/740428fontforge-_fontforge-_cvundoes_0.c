static void FUN1(VAR1 *VAR2,VAR1 *VAR3,
VAR4 **VAR5, VAR4 **VAR6, struct VAR7 *VAR8) {
VAR9 *VAR10, *VAR11;
int VAR12, VAR13;
VAR14 *VAR15, *VAR16;
VAR17 *VAR18, *VAR19;
VAR20 *VAR21;
int VAR22;
VAR4 *VAR23;
struct VAR24 *VAR25;
VAR26 *VAR27;
VAR1 *VAR28;
VAR1 *VAR29, *VAR30;
int VAR31 = false;

for ( VAR10 = VAR3->VAR32; VAR10!=NULL; VAR10=VAR10->VAR33 ) {
if ( VAR10->VAR34==NULL )
continue;
if ( VAR10->VAR35 == VAR36 && VAR3->VAR37==VAR2->VAR37 )
continue;
VAR23 = VAR10->VAR34->VAR38;
for ( VAR22=0; VAR5[VAR22]!=NULL && VAR5[VAR22]!=VAR23; ++VAR22 );
if ( VAR5[VAR22]==NULL )
continue;
VAR25 = FUN2(VAR8,VAR10->VAR34);
if ( VAR23->VAR39!=VAR40 ) {
for ( VAR11=VAR2->VAR32; VAR11!=NULL && VAR11->VAR34!=VAR25; VAR11=VAR11->VAR33 );
} else {
for ( VAR11=VAR2->VAR32; VAR11!=NULL ; VAR11=VAR11->VAR33 ) {
if ( VAR11->VAR34==VAR25 &&
strcmp(VAR10->VAR41.VAR42.VAR43,VAR11->VAR41.VAR42.VAR43)==0 )
break;
}
}
FUN3(VAR2,VAR11,VAR10,VAR25);
VAR31 = true;
}

for ( VAR18 = VAR3->VAR44; VAR18!=NULL; VAR18=VAR18->VAR33 ) {
VAR23 = VAR18->VAR44->VAR34->VAR38;
for ( VAR22=0; VAR5[VAR22]!=NULL && VAR5[VAR22]!=VAR23; ++VAR22 );
if ( VAR5[VAR22]==NULL )
continue;
VAR21 = FUN4(VAR8,VAR18->VAR44);
for ( VAR19=VAR2->VAR44; VAR19!=NULL &&
!(VAR19->VAR44==VAR21 && VAR19->VAR35==VAR18->VAR35 && VAR19->VAR45==VAR18->VAR45);
VAR19=VAR19->VAR33 );
FUN5(VAR2,VAR19,VAR18,VAR21);
VAR31 = true;
}

for ( VAR12=0; VAR12<2; ++VAR12 ) {
for ( VAR15 = VAR12 ? VAR3->VAR46 : VAR3->VAR47; VAR15!=NULL; VAR15=VAR15->VAR33 ) {
VAR23 = VAR15->VAR34->VAR38;
for ( VAR22=0; VAR5[VAR22]!=NULL && VAR5[VAR22]!=VAR23; ++VAR22 );
if ( VAR5[VAR22]==NULL )
continue;
VAR25 = FUN2(VAR8,VAR15->VAR34);
if ( VAR25==NULL )
continue;
if ( VAR3->VAR37==VAR2->VAR37 )
VAR28 = VAR15->VAR2;
else
VAR28 = FUN6(VAR2->VAR37,VAR15->VAR2->VAR48,VAR15->VAR2->VAR49);
if ( VAR28!=NULL ) {
for ( VAR16 = VAR12 ? VAR2->VAR46 : VAR2->VAR47; VAR16!=NULL; VAR16=VAR16->VAR33 ) {
if ( VAR16->VAR34 == VAR25 && VAR16->VAR2 == VAR28 )
break;
}
FUN7(VAR2,VAR16,VAR15,VAR12,VAR28,VAR25);
VAR31 = true;
}
}
if ( VAR6==NULL )
continue;
VAR27 = VAR3->VAR37;
for ( VAR13=VAR27->VAR50-1; VAR13>=0; --VAR13 ) if ( (VAR29=VAR27->VAR51[VAR13])!=NULL ) {
for ( VAR15 = VAR12 ? VAR29->VAR46 : VAR29->VAR47; VAR15!=NULL; VAR15=VAR15->VAR33 ) {
if ( VAR15->VAR2!=VAR3 )
continue;
VAR23 = VAR15->VAR34->VAR38;
for ( VAR22=0; VAR6[VAR22]!=NULL && VAR6[VAR22]!=VAR23; ++VAR22 );
if ( VAR6[VAR22]==NULL )
continue;
VAR25 = FUN2(VAR8,VAR15->VAR34);
if ( VAR27==VAR2->VAR37 )
VAR30 = VAR29;
else
VAR30 = FUN6(VAR2->VAR37,VAR29->VAR48,VAR29->VAR49);
if ( VAR30==NULL || VAR25==NULL )
continue;
for ( VAR16 = VAR12 ? VAR30->VAR46 : VAR30->VAR47; VAR16!=NULL; VAR16=VAR16->VAR33 ) {
if ( VAR16->VAR34==VAR25 && VAR16->VAR2 == VAR2 )
break;
}
FUN7(VAR30,VAR16,VAR15,VAR12,VAR2,VAR25);
FUN8(VAR30,VAR52,2);
}
}
}
if ( VAR31 )
FUN8(VAR2,VAR52,2);
}