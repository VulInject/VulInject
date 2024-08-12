static int
FUN1(struct VAR1 * VAR2, char * VAR3, unsigned short VAR4)
{
char VAR5[VAR6];
struct in6_addr VAR7;


if (FUN2(VAR8, VAR3, &VAR7) <= 0)
{
int VAR9;
struct addrinfo VAR10, *VAR11, *VAR12;

syslog(VAR13, "",
"", VAR3);

memset(&VAR10, 0, sizeof(VAR10));
VAR10.VAR14 = VAR15;
VAR10.VAR16 = VAR17;
VAR10.VAR18 = 0; 

VAR9 = getaddrinfo(VAR3, NULL, &VAR10, &VAR11);
if (VAR9 == 0)
{
int VAR19 = 0;
for(VAR12 = VAR11; VAR12; VAR12 = VAR12->VAR20)
{
if(VAR12->VAR14 == VAR8)
{
if (!VAR19)
{
VAR7 = ((struct VAR21 *)VAR12->VAR22)->VAR23;
if (FUN3(VAR8, &VAR7, VAR3, sizeof(struct VAR24)) == NULL)
syslog(VAR25, "", "");
syslog(VAR13, "",
"", VAR3);
VAR19 = 1;
}
else
{
char VAR26[48];
FUN4(VAR12->VAR22, VAR26, sizeof(VAR26));
syslog(VAR13, "",
"", VAR26);
}
}
}
FUN5(VAR11);
if (!VAR19)
{
syslog(VAR27, "",
"", VAR3);
FUN6(VAR2, 402, "");
return -1;
}
}
else
{
syslog(VAR25, "",
"", VAR3, FUN7(VAR9));
FUN6(VAR2, 402, "");
return -1;
}
}

if(FUN3(VAR8, &(VAR2->VAR28), VAR5, VAR6) == NULL)
{
syslog(VAR29, "");
strncpy(VAR5, "", sizeof(VAR5));
}

if(memcmp(&VAR2->VAR28, &VAR7, sizeof(struct VAR24)) != 0)
{
syslog(VAR13, "",
"", VAR5, VAR3);
FUN6(VAR2, 606, "");
return 0;
}
else
{
syslog(VAR30, "",
"", VAR5, VAR3);
}


if (VAR4 < 1024)
{
syslog(VAR13, "",
VAR5);
FUN6(VAR2, 606, "");
return 0;
}
return 1;
}