int FUN1(struct VAR1 *VAR2)
{
FUN2(VAR3, "" VAR4 "", 
VAR2, VAR2->VAR5, VAR2->VAR6, 
(VAR2->VAR7&VAR8)?(long long)VAR2->VAR9.VAR10*1000+
(long long)VAR2->VAR9.VAR11/1000:-1,
(VAR2->VAR7&VAR12)?"":"",
(VAR2->VAR7&VAR13)?"":"",
(VAR2->VAR7&VAR8)?"":"");
if(!VAR2->VAR5)
return 0;
FUN3(VAR2->VAR5);
if((VAR2->VAR7&VAR8))
(void)FUN4(VAR2->VAR14->VAR15, &VAR2->VAR16);
if((VAR2->VAR7&(VAR12|VAR13)) && VAR2->VAR6 != -1) {
FUN3(VAR2->VAR14->VAR17 > 0);

VAR2->VAR14->VAR18[VAR2->VAR19] = 
VAR2->VAR14->VAR18[VAR2->VAR14->VAR17-1];
VAR2->VAR14->VAR18[VAR2->VAR14->VAR17-1] = NULL;
VAR2->VAR14->VAR17--;
if(VAR2->VAR19 < VAR2->VAR14->VAR17)
VAR2->VAR14->VAR18[VAR2->VAR19]->VAR19 = VAR2->VAR19;
FUN5(VAR2->VAR14->VAR20, VAR2->VAR21);

if(FUN6(VAR2->VAR6, VAR2->VAR21, 0) != 0)
FUN7("",
FUN8(FUN9()));
if(!FUN10(VAR2->VAR21))
FUN7("",
FUN8(FUN9()));
}
VAR2->VAR22 = 0;
VAR2->VAR5 = 0;
return 0;
}


static struct VAR23* VAR24 = NULL;

static VAR25 FUN11(int VAR26)
{
struct VAR1* VAR2;
if(!VAR24 || VAR26 < 0 || VAR26 >= VAR27)
return;
VAR2 = VAR24->VAR28[VAR26];
if(!VAR2)
return;
FUN12(FUN13(VAR2->VAR29));
(*VAR2->VAR29)(VAR26, VAR30, VAR2->VAR31);
}