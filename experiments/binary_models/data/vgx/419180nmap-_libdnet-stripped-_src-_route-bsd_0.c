int
FUN1(VAR1 *VAR2, route_handler VAR3, void *VAR4)
{
struct VAR5 *VAR6;
struct route_entry VAR7;
struct VAR8 *VAR9;
char *VAR10, *VAR11, *VAR12;
int VAR13;
int VAR14[6] = { VAR15, VAR16, 0, 0 , VAR17, 0 };
size_t VAR18;

if (FUN2(VAR14, 6, NULL, &VAR18, NULL, 0) < 0)
return (-1);

if (VAR18 == 0)
return (0);

if ((VAR10 = malloc(VAR18)) == NULL)
return (-1);

if (FUN2(VAR14, 6, VAR10, &VAR18, NULL, 0) < 0) {
free(VAR10);
return (-1);
}
VAR11 = VAR10 + VAR18;
VAR12 = VAR10;
int VAR18 = FUN3(VAR19,0,0,0);

if (VAR18 == 0)
return (0);

if ((VAR10 = malloc(VAR18)) == NULL)
return (-1);

if (FUN3(VAR19,VAR10,&VAR18,0) < 0) {
free(VAR10);
return (-1);
}
VAR11 = VAR10 + VAR18;
VAR12 = VAR10;
struct rt_giarg VAR20, *VAR21;

memset(&VAR20, 0, sizeof(VAR20));
VAR20.VAR22 = VAR19;

if (FUN4(VAR2->VAR23, VAR24, &VAR20) < 0)
return (-1);

if ((VAR10 = malloc(VAR20.VAR25)) == NULL)
return (-1);

VAR21 = (struct VAR26 *)VAR10;
VAR21->VAR25 = VAR20.VAR25;
VAR21->VAR22 = VAR19;
VAR21->VAR27 = VAR10;
VAR21->VAR28 = VAR29 | VAR30;

if (FUN4(VAR2->VAR23, VAR24, VAR10) < 0) {
free(VAR10);
return (-1);
}
VAR11 = VAR10 + VAR21->VAR25;
VAR12 = VAR10 + sizeof(VAR20);

for (VAR13 = 0; VAR12 < VAR11; VAR12 += VAR6->VAR31) {
char VAR32[VAR33];
sa_family_t VAR34;
VAR6 = (struct VAR5 *)VAR12;
VAR9 = (struct VAR8 *)(VAR6 + 1);

VAR34 = VAR9->VAR35;

if (FUN5(VAR6->VAR36, VAR32) == NULL)
continue;
FUN6(VAR7.VAR37, VAR32, sizeof(VAR7.VAR37));

if ((VAR6->VAR38 & VAR39) == 0)

continue;
if (FUN7(VAR9, &VAR7.VAR40) < 0)
continue;

if ((VAR6->VAR38 & VAR41) == 0)

continue;
VAR9 = FUN8(VAR9);
if (FUN9(&VAR7.VAR40, VAR9, &VAR7.VAR42) < 0)
continue;

if (VAR7.VAR40.VAR43 != VAR7.VAR42.VAR43 ||
(VAR7.VAR40.VAR43 != VAR44 &&
VAR7.VAR40.VAR43 != VAR45))
continue;

if (VAR6->VAR38 & VAR46) {
VAR9 = FUN8(VAR9);

VAR9->VAR35 = VAR34;
if (FUN10(VAR9, &VAR7.VAR40.VAR47) < 0)
continue;
}

VAR7.VAR48 = 0;

if ((VAR13 = FUN11(&VAR7, VAR4)) != 0)
break;
}
free(VAR10);

return (VAR13);
}