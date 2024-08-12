int
FUN1(int VAR1, const unsigned char *VAR2, unsigned char VAR3,
unsigned short VAR4, const unsigned char *VAR5,
struct VAR6 *VAR7, int VAR8)
{
struct VAR9 *VAR9;
unsigned int VAR10 = VAR7 ? VAR7->VAR10 : 0;

if((VAR1 == VAR11 &&
FUN2(NULL, VAR2, VAR3, NULL, VAR10) >= VAR12) ||
(VAR1 == VAR13 &&
FUN3(NULL, VAR2, VAR3, VAR10) >= VAR12))
return 0;

if(VAR8 >= 0xFFFF)
VAR8 = 0xFFFF;

VAR9 = FUN4(VAR1, VAR2, VAR3, NULL);
if(VAR9) {
if(VAR9->VAR8 && VAR8)
VAR9->VAR8 = FUN5(VAR9->VAR8, VAR8);
else if(VAR8)
VAR9->VAR8 = VAR8;
VAR9->VAR14 = VAR15;
VAR9->VAR16 = VAR17;
if(VAR5 && memcmp(VAR9->VAR5, VAR5, 8) == 0 &&
FUN6(VAR9->VAR4, VAR4) > 0) {
return 0;
}
if(VAR5)
memcpy(VAR9->VAR5, VAR5, 8);
else
memset(VAR9->VAR5, 0, 8);
VAR9->VAR4 = VAR4;
if(VAR9->VAR7 != VAR7)
VAR9->VAR7 = NULL;
} else {
VAR9 = malloc(sizeof(struct VAR9));
if(VAR9 == NULL)
return -1;
VAR9->VAR1 = VAR1;
VAR9->VAR16 = VAR17;
VAR9->VAR8 = VAR8;
memcpy(VAR9->VAR2, VAR2, 16);
VAR9->VAR3 = VAR3;
VAR9->VAR4 = VAR4;
if(VAR5)
memcpy(VAR9->VAR5, VAR5, 8);
else
memset(VAR9->VAR5, 0, 8);
VAR9->VAR7 = VAR7;
VAR9->VAR14 = VAR15;
VAR9->VAR18 = VAR19;
VAR19 = VAR9;
}

if(VAR9->VAR8) {
struct timeval VAR20;
FUN7(&VAR20, &VAR9->VAR14, VAR9->VAR8);
FUN8(&VAR21, &VAR20);
}
return 1;
}