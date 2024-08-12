static struct VAR1 *
FUN1(struct VAR2 *VAR3, VAR4 *VAR5, VAR4 *VAR6) {
char *VAR7, **VAR8;
int VAR9;

VAR7 = VAR6->VAR6;
VAR7[VAR6->VAR10 - 1] = '';	
if (((char *)VAR5->VAR6)[0] == '') {
if (VAR5->VAR10 < sizeof(VAR11)*2 || VAR6->VAR10 < 2)
return (NULL);
VAR3->VAR12.VAR13 = ((VAR11 *)VAR5->VAR6)[1];
VAR9 = strlen(VAR7) + 1;
if ((VAR14)VAR9 > sizeof(VAR3->VAR15)) {
VAR9 = sizeof(VAR3->VAR15);
}
memcpy(VAR3->VAR15, VAR7, VAR9);
VAR3->VAR12.VAR16 = VAR3->VAR15;
if ((VAR3->VAR12.VAR17 = strchr(VAR3->VAR15, '')) != NULL)
*(VAR3->VAR12.VAR17)++ = '';
VAR7 += VAR9;
VAR6->VAR10 -= VAR9;
} else {
if (VAR6->VAR10 < sizeof(VAR11) + 1)
return (NULL);
if (VAR5->VAR10 > sizeof(VAR3->VAR15))
VAR5->VAR10 = sizeof(VAR3->VAR15);
((char *)VAR5->VAR6)[VAR5->VAR10 - 1] = '';
memcpy(VAR3->VAR15, VAR5->VAR6, VAR5->VAR10);
VAR3->VAR12.VAR16 = VAR3->VAR15;
if ((VAR3->VAR12.VAR17 = strchr(VAR3->VAR15, '')) != NULL)
*(VAR3->VAR12.VAR17)++ = '';
VAR3->VAR12.VAR13 = *(VAR11 *)VAR6->VAR6;
VAR7 += sizeof(VAR11);
VAR6->VAR10 -= sizeof(VAR11);
}
VAR8 = VAR3->VAR12.VAR18 = VAR3->VAR19;
while (VAR6->VAR10 > 0 && VAR8 < &VAR3->VAR19[VAR20 - 1]) {

*VAR8++ = VAR7;
VAR9 = strlen(VAR7) + 1;
VAR6->VAR10 -= VAR9;
VAR7 += VAR9;
}
*VAR8 = NULL;
return (&VAR3->VAR12);
}