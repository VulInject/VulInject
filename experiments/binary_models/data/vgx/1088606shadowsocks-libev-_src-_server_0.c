int
FUN1(const char *VAR1, const char *VAR2, int VAR3)
{
struct addrinfo VAR4;
struct VAR5 *VAR6, *VAR7, *VAR8;
int VAR9, VAR10 = -1;

memset(&VAR4, 0, sizeof(struct VAR5));
VAR4.VAR11   = VAR12;               
VAR4.VAR13 = VAR14;             
VAR4.VAR15    = VAR16 | VAR17; 
VAR4.VAR18 = VAR19;

VAR6 = NULL;

VAR9 = getaddrinfo(VAR1, VAR2, &VAR4, &VAR6);

if (VAR9 != 0) {
FUN2("", VAR1);
return -1;
}

if (VAR6 == NULL) {
FUN2("");
return -1;
}

VAR7 = VAR6;


if (!VAR1) {
VAR8 = VAR6;


while (VAR8) {
if (VAR8->VAR11 == VAR20) {
VAR7 = VAR8; 
break;
}
VAR8 = VAR8->VAR21; 
}
}

for (; VAR7 != NULL; VAR7 = VAR7->VAR21) {
int VAR22 = VAR7->VAR18;
if (VAR3 < 0) {
VAR22 = VAR23; 
}
VAR10 = socket(VAR7->VAR11, VAR7->VAR13, VAR22);
if (VAR10 == -1) {
continue;
}

if (VAR7->VAR11 == VAR20) {
int VAR24 = VAR1 ? 1 : 0;
FUN3(VAR10, VAR25, VAR26, &VAR24, sizeof(VAR24));
}

int VAR24 = 1;
FUN3(VAR10, VAR27, VAR28, &VAR24, sizeof(VAR24));
FUN3(VAR10, VAR27, VAR29, &VAR24, sizeof(VAR24));
if (VAR30) {
int VAR31 = FUN4(VAR10);
if (VAR31 == 0) {
FUN5("");
}
}


if (VAR3 == 1) {
int VAR32 = 0;
while ((VAR3 = VAR33[VAR32]) > 0) {
int VAR31 = FUN3(VAR10, VAR19, VAR3, &VAR24, sizeof(VAR24));
if (VAR31 != -1) {
break;
}
VAR32++;
}
if (VAR3 == 0) {
FUN6("");
}
}

VAR9 = FUN7(VAR10, VAR7->VAR34, VAR7->VAR35);
if (VAR9 == 0) {

break;
} else {
FUN6("");
FUN8("");
}

close(VAR10);
VAR10 = -1;
}

FUN9(VAR6);

return VAR10;
}