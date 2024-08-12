int FUN1(struct VAR1 *VAR2, char *VAR3, char *VAR4, size_t VAR5, char **VAR6) {


uint16_t VAR7;
char *VAR8 = VAR2->VAR6;
char *VAR9 = VAR3+VAR5;
char *VAR10 = VAR8;
int VAR11 = 0;
struct stat VAR12;

if (VAR2->VAR13 == 0) return 0;

if (VAR8[0] == '') VAR11++;

for(VAR7=0;VAR7<VAR2->VAR13;VAR7++) {
if (VAR8[VAR7] == '') {
memcpy(VAR9, VAR10, VAR11-1);
*(VAR9+VAR11-1) = 0;

if (FUN2(VAR3, &VAR12)) {
return -1;
}



if (!FUN3(VAR12.VAR14)) {
if (VAR7 < (VAR2->VAR13)-1) {
*VAR6 = VAR8 + VAR7;
}
return 0;
}



*(VAR9+VAR11-1) = '';
*(VAR9+VAR11) = 0;

VAR9 += VAR11 ;
VAR11 = 0;
VAR10 = VAR8 + VAR7 + 1;
}

VAR11++;
}

if (VAR10 < VAR2->VAR6+VAR2->VAR13) {
memcpy(VAR9, VAR10, VAR11-1);
*(VAR9+VAR11-1) = 0;
if (FUN2(VAR3, &VAR12)) {
return -1;
}
}

return 0;


}