VAR1 FUN1(const char *VAR2, struct VAR3 *VAR3)
{
*VAR3 = VAR4;

if (FUN2("", VAR2)) {
*VAR3 = (struct VAR3) {
.VAR5 = VAR6,
};
return NULL;
}

if (FUN2("", VAR2)) {
*VAR3 = (struct VAR3) {
.VAR5 = VAR7,
};
return NULL;
}

if (FUN2("", VAR2)) {
*VAR3 = (struct VAR3) {
.VAR5 = VAR8,
};
return NULL;
}

if (strchr(VAR2, '') != NULL) {

chunk_t VAR9 = VAR10;
err_t VAR11 = FUN3((*VAR2 == '') ? VAR2 + 1 : VAR2, &VAR9);
if (VAR11 != NULL) {
return VAR11;
}
*VAR3 = (struct VAR3) {
.VAR5 = VAR12,
.VAR9 = FUN4(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}

if (FUN2(VAR2, "") || FUN2(VAR2, "")) {

*VAR3 = (struct VAR3) {
.VAR5 = VAR7,
};
return NULL;
}

if (strchr(VAR2, '') == NULL) {

const struct VAR15 *VAR16 = strchr(VAR2, '') == NULL ?
&VAR17 :
&VAR18;
ip_address VAR19;
err_t VAR11 = FUN5(FUN6(VAR2), VAR16, &VAR19);
if (VAR11 != NULL) {
return VAR11;
}
*VAR3 = (struct VAR3) {
.VAR5 = VAR16->VAR20,
.VAR21 = VAR19,
};
return NULL;
}

if (FUN7(VAR2, "", 2)) {

VAR2 += 2; 
chunk_t VAR9 = VAR22;
err_t VAR11 = FUN8(FUN6(VAR2), 16, &VAR9);
if (VAR11 != NULL) {
return VAR11;
}
*VAR3 = (struct VAR3) {
.VAR5 = VAR23,
.VAR9 = FUN4(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}

if (FUN7(VAR2, "", 2)) {

VAR2 += 2; 
chunk_t VAR9 = VAR22;
err_t VAR11 = FUN8(FUN6(VAR2), 16, &VAR9);
if (VAR11 != NULL) {
return VAR11;
}
*VAR3 = (struct VAR3) {
.VAR5 = VAR12,
.VAR9 = FUN4(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}

if (FUN7(VAR2, "", 2)) {

VAR2 += 2; 
int VAR24 = strlen(VAR2);
if (VAR2[VAR24-1] == '') {
VAR24 -= 1; 
}
chunk_t VAR9 = FUN9(VAR2, VAR24, "");
*VAR3 = (struct VAR3) {
.VAR5 = VAR23,
.VAR9 = FUN10(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}

if (*VAR2 == '') {
chunk_t VAR9 = FUN9(VAR2 + 1, strlen(VAR2)-1, "");
*VAR3 = (struct VAR3) {
.VAR5 = VAR25,

.VAR9 = FUN10(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}


chunk_t VAR9 = FUN9(VAR2, strlen(VAR2), "");
*VAR3 = (struct VAR3) {
.VAR5 = VAR26,
.VAR9 = FUN10(VAR9),
.VAR13 = VAR9.VAR14,
};
return NULL;
}