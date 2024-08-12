int
FUN1(sa_share_t VAR1, VAR2 *VAR3, char *VAR4)
{
char *VAR5;



VAR5 = FUN2(VAR1, "");
if (VAR5 != NULL) {
(void) memset(VAR3, 0, sizeof (VAR3));
(void) FUN3(VAR1, VAR4, VAR3);
FUN4(VAR5);
return (0);
} else
return (1);
}

if ((VAR6) > (VAR7)) { \
(VAR7) = (VAR6); \
}

int
FUN5(sa_share_t VAR1, sa_resource_t VAR8, char *VAR5, VAR2 *VAR3,
void *VAR9, zfs_share_op_t VAR10)
{
VAR11 *VAR12;
sa_group_t VAR13;
sa_handle_t VAR14;
char *VAR15;
int VAR16 = VAR17;
int VAR7, VAR6;
char VAR18[VAR19];
char *VAR20;


if ((VAR13 = FUN6(VAR1)) == NULL)  {
return (VAR17);
}
if ((VAR14 = FUN7(VAR13)) == NULL) {
return (VAR17);
}



VAR20 = VAR5;
while ((VAR15 = FUN8(VAR14, VAR20, VAR21)) == NULL) {
char *VAR22;

if (VAR20 == VAR5) {
(void) FUN9(VAR18, VAR5, sizeof (VAR18));
VAR20 = VAR18;
}


while (*VAR20 == '' && *(VAR20 + 1) == '')
VAR20++;


if ((strlen(VAR20) > 1) && (VAR22 = strrchr(VAR20, ''))) {
if (VAR20 == VAR22) {
*(VAR22 + 1) = '';  
} else {
*VAR22 = '';
}
} else {
return (VAR17);
}
}

VAR12 = FUN10();
if (VAR12 != NULL) {
char *VAR23;

VAR7 = (VAR3->VAR24 ? strlen(VAR3->VAR24) : 0);
VAR3->VAR25 = VAR7;

VAR6 = (VAR3->VAR26 ? strlen(VAR3->VAR26) : 0);
VAR3->VAR25 += VAR6;
FUN11(VAR7, VAR6);

VAR6 = (VAR3->VAR27 ? strlen(VAR3->VAR27) : 0);
VAR3->VAR25 += VAR6;
FUN11(VAR7, VAR6);

VAR6 = (VAR3->VAR28 ? strlen(VAR3->VAR28) : 0);
VAR3->VAR25 += VAR6;
FUN11(VAR7, VAR6);

VAR6 = (VAR3->VAR29 ? strlen(VAR3->VAR29) : 0);
VAR3->VAR25 += VAR6;
FUN11(VAR7, VAR6);

VAR23 = FUN12(VAR8, "");

VAR16 = FUN13(VAR12, VAR15, VAR5,
VAR23, VAR9, VAR3, VAR7, VAR10);
if (VAR16 == VAR30)
FUN14(VAR14);
else
VAR16 = VAR31;
if (VAR23)
FUN4(VAR23);

FUN15(VAR12);
}
free(VAR15);
return (VAR16);
}