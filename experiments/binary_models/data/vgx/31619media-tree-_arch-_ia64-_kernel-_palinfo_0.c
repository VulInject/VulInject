static int FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3, VAR4, VAR5;
pal_cache_config_info_t VAR6;
int VAR7, VAR8;
long VAR9;

if ((VAR9 = FUN2(&VAR4, &VAR5)) != 0) {
FUN3(VAR10 "", VAR9);
return 0;
}

FUN4(VAR2, "",
VAR4, VAR5);

for (VAR3=0; VAR3 < VAR4; VAR3++) {
for (VAR7=2; VAR7 >0 ; VAR7--) {

if ((VAR9=FUN5(VAR3,VAR7, &VAR6)) != 0)
continue;

FUN4(VAR2,
""
""
"",
VAR11[VAR7+VAR6.VAR12], VAR3+1,
VAR6.VAR13);

if (VAR6.VAR12)
FUN6(VAR2, "");

FUN4(VAR2, "", VAR14[VAR6.VAR15]);

FUN4(VAR2,
""
""
"",
VAR6.VAR16,
1<<VAR6.VAR17,
1<<VAR6.VAR18);
if (VAR7 == 1)
FUN6(VAR2, "");
else
FUN4(VAR2, "",
VAR6.VAR19);

FUN4(VAR2,
""
"", VAR6.VAR20);

for(VAR8=0; VAR8 < 8; VAR8++ ) {
if ( VAR6.VAR21 & 0x1)
FUN4(VAR2, "", VAR22[VAR8]);
VAR6.VAR21 >>=1;
}
FUN6(VAR2, "");

for(VAR8=0; VAR8 < 8; VAR8++ ) {
if (VAR6.VAR23 & 0x1)
FUN4(VAR2, "", VAR24[VAR8]);
VAR6.VAR23 >>=1;
}
FUN4(VAR2,
""
""
"",
1<<VAR6.VAR25, VAR6.VAR26,
VAR6.VAR27);


if (VAR6.VAR12)
break;
}
}
return 0;
}