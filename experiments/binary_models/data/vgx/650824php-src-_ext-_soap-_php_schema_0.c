static int FUN1(sdlPtr VAR1, xmlAttrPtr VAR2, xmlNodePtr VAR3, sdlTypePtr VAR4, sdlContentModelPtr VAR5)
{
xmlNodePtr VAR6;
xmlAttrPtr VAR7, VAR8, VAR9, VAR10, VAR11, VAR12 = NULL;

VAR7 = VAR3->VAR13;
VAR9 = FUN2(VAR7, "");
if (VAR9 == NULL) {
VAR9 = VAR2;
}

VAR10 = FUN2(VAR7, "");
if (VAR10 == NULL) {
VAR10 = VAR12 = FUN2(VAR7, "");
}

if (VAR10) {
VAR14 *VAR15;
sdlTypePtr VAR16;
smart_str VAR17 = {0};

VAR16 = FUN3(sizeof(VAR18));
memset(VAR16, 0, sizeof(VAR18));

if (VAR12) {
smart_str VAR19 = {0};
char *VAR11, *VAR9;
xmlNsPtr VAR20;

FUN4(VAR12->VAR21->VAR22, &VAR11, &VAR9);
VAR20 = FUN5(VAR3->VAR23, VAR3, FUN6(VAR9));
if (VAR20 != NULL) {
FUN7(&VAR19, (char*)VAR20->VAR24);
VAR16->VAR25 = FUN8((char*)VAR20->VAR24);
} else {
xmlAttrPtr VAR9 = FUN2(VAR7, "");
if (VAR9 == NULL) {
VAR9 = VAR2;
}
if (VAR9) {
FUN7(&VAR19, (char*)VAR9->VAR21->VAR22);
}
}
FUN9(&VAR19, '');
FUN7(&VAR19, VAR11);
VAR16->VAR10 = FUN8(VAR11);
FUN10(&VAR19);
if (VAR11) {FUN11(VAR11);}
if (VAR9) {FUN11(VAR9);}
VAR16->VAR12 = FUN12(FUN13(VAR19.VAR26), FUN14(VAR19.VAR26));
FUN15(&VAR19);
} else {
VAR16->VAR10 = FUN8((char*)VAR10->VAR21->VAR22);
VAR16->VAR25 = FUN8((char*)VAR9->VAR21->VAR22);
}

VAR16->VAR27 = VAR28;

if (VAR4 == NULL) {
if (VAR1->VAR29 == NULL) {
VAR1->VAR29 = FUN3(sizeof(VAR14));
FUN16(VAR1->VAR29, 0, NULL, VAR30, 0);
}
VAR15 = VAR1->VAR29;
FUN7(&VAR17, VAR16->VAR25);
FUN9(&VAR17, '');
FUN7(&VAR17, VAR16->VAR10);
} else {
if (VAR4->VAR29 == NULL) {
VAR4->VAR29 = FUN3(sizeof(VAR14));
FUN16(VAR4->VAR29, 0, NULL, VAR30, 0);
}
VAR15 = VAR4->VAR29;
FUN7(&VAR17, VAR16->VAR10);
}

FUN10(&VAR17);
if (FUN17(VAR15, VAR17.VAR26, VAR16) == NULL) {
if (VAR4 == NULL) {
FUN18(VAR31, "", FUN13(VAR17.VAR26));
} else {
FUN19(VAR15, VAR16);
}
}
FUN15(&VAR17);

if (VAR5 != NULL) {
sdlContentModelPtr VAR32 = FUN3(sizeof(VAR33));

VAR32->VAR34 = VAR35;
VAR32->VAR36.VAR3 = VAR16;

FUN20(VAR3, VAR32);


FUN19(VAR5->VAR36.VAR22, VAR32);
}
VAR4 = VAR16;
} else {
FUN21(VAR31, "");
}


VAR7 = VAR3->VAR13;
VAR8 = FUN2(VAR7, "");
if (VAR8) {
if (VAR12 != NULL) {
FUN21(VAR31, "");
}
if (!FUN22((char*)VAR8->VAR21->VAR22, "") ||
!FUN22((char*)VAR8->VAR21->VAR22, "")) {
VAR4->VAR27 = VAR37;
} else {
VAR4->VAR27 = VAR28;
}
} else {
VAR4->VAR27 = VAR28;
}

VAR8 = FUN2(VAR7, "");
if (VAR8) {
if (VAR12 != NULL) {
FUN21(VAR31, "");
}
VAR4->VAR38 = FUN8((char*)VAR8->VAR21->VAR22);
}

VAR8 = FUN2(VAR7, "");
if (VAR8) {
if (VAR12 != NULL) {
FUN21(VAR31, "");
}
VAR4->VAR39 = FUN8((char*)VAR8->VAR21->VAR22);
}


VAR8 = FUN2(VAR7, "");
if (VAR8) {
if (FUN23((char*)VAR8->VAR21->VAR22, "", sizeof("")) == 0) {
VAR4->VAR40 = VAR41;
} else if (FUN23((char*)VAR8->VAR21->VAR22, "", sizeof("")) == 0) {
VAR4->VAR40 = VAR42;
} else {
VAR4->VAR40 = VAR43;
}
} else {
VAR4->VAR40 = VAR43;
}
if (VAR4->VAR40 == VAR43) {
xmlNodePtr VAR44 = VAR3->VAR44;
while (VAR44) {
if (FUN24(VAR44, "", VAR45)) {
xmlAttrPtr VAR39;
VAR39 = FUN2(VAR44->VAR13, "");
if(VAR39 == NULL || FUN23((char*)VAR39->VAR21->VAR22, "", sizeof(""))) {
VAR4->VAR40 = VAR42;
} else {
VAR4->VAR40 = VAR41;
}
break;
}
VAR44 = VAR44->VAR44;
}
if (VAR44 == NULL) {
VAR4->VAR40 = VAR42;
}
}


VAR11 = FUN2(VAR7, "");
if (VAR11) {
char *VAR46, *VAR47;
xmlNsPtr VAR20;

if (VAR12 != NULL) {
FUN21(VAR31, "");
}
FUN4(VAR11->VAR21->VAR22, &VAR46, &VAR47);
VAR20 = FUN5(VAR3->VAR23, VAR3, FUN6(VAR47));
if (VAR20 != NULL) {
VAR4->VAR48 = FUN25(VAR1, VAR4, VAR20->VAR24, FUN6(VAR46));
}
if (VAR47) {FUN11(VAR47);}
if (VAR46) {FUN11(VAR46);}
}

VAR6 = VAR3->VAR21;
if (VAR6 != NULL && FUN26(VAR6, "")) {

VAR6 = VAR6->VAR49;
}
if (VAR6 != NULL) {
if (FUN26(VAR6,"")) {
if (VAR12 != NULL) {
FUN21(VAR31, "");
} else if (VAR11 != NULL) {
FUN21(VAR31, "");
}
FUN27(VAR1, VAR2, VAR6, VAR4);
VAR6 = VAR6->VAR49;
} else if (FUN26(VAR6,"")) {
if (VAR12 != NULL) {
FUN21(VAR31, "");
} else if (VAR11 != NULL) {
FUN21(VAR31, "");
}
FUN28(VAR1, VAR2, VAR6, VAR4);
VAR6 = VAR6->VAR49;
}
}
while (VAR6 != NULL) {
if (FUN26(VAR6,"")) {

} else if (FUN26(VAR6,"")) {

} else if (FUN26(VAR6,"")) {

} else {
FUN18(VAR31, "", VAR6->VAR10);
}
VAR6 = VAR6->VAR49;
}

return VAR37;
}